def find_real_data_end(filename):
    with open(filename, 'rb') as f:
        data = f.read()

    # Work backwards until we hit something that's not 0xFF
    for i in range(len(data) - 1, -1, -1):
        if data[i] != 0xFF:
            print(f"Last non-FF byte at offset: 0x{i:X} (decimal: {i})")
            print(f"ROM data size: {i + 1} bytes ({(i + 1) // 1024} KB)")
            return

    print("File contains only 0xFF bytes.")

# Use the name of your GBA file here
find_real_data_end('test.gba')
