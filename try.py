#!/usr/bin/env python3

import sys

VANILLA = "vanilla.gba"     # A
PATCHED = "patched.gba"     # B
TARGET  = "test.gba"        # C

LOG_FILE = "uninstall_log.txt"

# ----------------------------
# BUILD FULL DIFF A → B
# ----------------------------
def build_diff(vanilla, patched):
    diff = {}

    with open(vanilla, "rb") as a, open(patched, "rb") as b:
        addr = 0

        while True:
            va = a.read(1)
            vb = b.read(1)

            if not va or not vb:
                break

            if va != vb:
                diff[addr] = (va, vb)  # (original, patched)

            addr += 1

    return diff


# ----------------------------
# CLASSIFY PATCH TYPE
# ----------------------------
def classify(diff):
    insert_regions = []
    byte_edits = []

    sorted_addrs = sorted(diff.keys())

    if not sorted_addrs:
        return insert_regions, byte_edits

    # detect large contiguous region (likely injected code)
    start = prev = sorted_addrs[0]

    for addr in sorted_addrs[1:]:
        if addr == prev + 1:
            prev = addr
        else:
            if prev - start > 0x100:  # heuristic threshold
                insert_regions.append((start, prev))
            else:
                byte_edits.extend(range(start, prev + 1))

            start = prev = addr

    # flush last region
    if prev - start > 0x100:
        insert_regions.append((start, prev))
    else:
        byte_edits.extend(range(start, prev + 1))

    return insert_regions, byte_edits


# ----------------------------
# APPLY SAFE UNINSTALL
# ----------------------------
def uninstall(target, diff, inserts, edits):
    with open(target, "rb+") as rom, open(LOG_FILE, "w") as log:

        # 1. restore normal byte edits
        for addr in edits:
            original, patched = diff[addr]

            rom.seek(addr)
            rom.write(original)

            log.write(f"[BYTE] {addr:08X} {patched.hex()} -> {original.hex()}\n")

        # 2. handle big injected regions (0x800000 etc.)
        for start, end in inserts:
            size = end - start + 1

            log.write(f"[INSERT] {start:08X}-{end:08X} ZEROED\n")

            rom.seek(start)
            rom.write(b"\x00" * size)


# ----------------------------
# MAIN
# ----------------------------
def main():
    print("[*] Building A → B diff...")
    diff = build_diff(VANILLA, PATCHED)

    print(f"[*] Total modified bytes: {len(diff)}")

    print("[*] Classifying patch types...")
    inserts, edits = classify(diff)

    print(f"[*] Byte edits: {len(edits)}")
    print(f"[*] Insert regions: {len(inserts)}")

    print("[*] Uninstalling patch from target ROM (C)...")
    uninstall(TARGET, diff, inserts, edits)

    print("[✔] Done.")
    print(f"[✔] Log written to {LOG_FILE}")


if __name__ == "__main__":
    main()