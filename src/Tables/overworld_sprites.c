#include "../defines.h"
#include "../../include/constants/event_objects.h"

#define EVENT_OBJ_PAL_TAG_NONE 0x1102
#define gEventObjectBaseOam_16x16 ((const struct OamData*) 0x83A36F8)
#define gEventObjectBaseOam_16x32 ((const struct OamData*) 0x83A3710)
#define gEventObjectBaseOam_32x32 ((const struct OamData*) 0x83A3718)
#define gEventObjectBaseOam_64x64 ((const struct OamData*) 0x83A3720)
#define gEventObjectSpriteOamTables_16x16 ((const struct SubspriteTable*) 0x83A3748)
#define gEventObjectSpriteOamTables_16x32 ((const struct SubspriteTable*) 0x83A379C)
#define gEventObjectSpriteOamTables_32x32 ((const struct SubspriteTable*) 0x83A37F0)
#define gEventObjectSpriteOamTables_64x64 ((const struct SubspriteTable*) 0x83A38D0)
#define gEventObjectImageAnimTable_PlayerNormal ((const union AnimCmd* const*) 0x83A3470)
#define gEventObjectImageAnimTable_Standard ((const union AnimCmd* const*) 0x83A3368)
#define gEventObjectImageAnimTable_Surfing ((const union AnimCmd* const*) 0x83A3584)
#define gEventObjectImageAnimTable_FieldMove ((const union AnimCmd* const*) 0x83A3638)
#define gEventObjectImageAnimTable_Fishing ((const union AnimCmd* const*) 0x83A3668)
#define gEventObjectImageAnimTable_VsSeekerBike ((const union AnimCmd* const*) 0x83A3640)


extern const u8 g0Tiles[];
extern const u8 g1Tiles[];
extern const u8 g2Tiles[];
extern const u8 g3Tiles[];
extern const u8 g4Tiles[];
extern const u8 g5Tiles[];
extern const u8 g6Tiles[];
extern const u8 g7Tiles[];
extern const u8 g72Tiles[];



static const struct SpriteFrameImage gEventObjectPicTable_g0[] =
{
    overworld_frame(g0Tiles, 2, 4, 0),
    overworld_frame(g0Tiles, 2, 4, 1),
    overworld_frame(g0Tiles, 2, 4, 2),
    overworld_frame(g0Tiles, 2, 4, 3),
    overworld_frame(g0Tiles, 2, 4, 4),
    overworld_frame(g0Tiles, 2, 4, 5),
    overworld_frame(g0Tiles, 2, 4, 6),
    overworld_frame(g0Tiles, 2, 4, 7),
    overworld_frame(g0Tiles, 2, 4, 8),
    overworld_frame(g0Tiles, 2, 4, 9),
    overworld_frame(g0Tiles, 2, 4, 10),
    overworld_frame(g0Tiles, 2, 4, 11),
    overworld_frame(g0Tiles, 2, 4, 12),
    overworld_frame(g0Tiles, 2, 4, 13),
    overworld_frame(g0Tiles, 2, 4, 14),
    overworld_frame(g0Tiles, 2, 4, 15),
    overworld_frame(g0Tiles, 2, 4, 16),
    overworld_frame(g0Tiles, 2, 4, 17),
    overworld_frame(g0Tiles, 2, 4, 18),
    overworld_frame(g0Tiles, 2, 4, 19),
};

static const struct SpriteFrameImage gEventObjectPicTable_g1[] =
{
    overworld_frame(g1Tiles, 4, 4, 0),
    overworld_frame(g1Tiles, 4, 4, 1),
    overworld_frame(g1Tiles, 4, 4, 2),
    overworld_frame(g1Tiles, 4, 4, 3),
    overworld_frame(g1Tiles, 4, 4, 4),
    overworld_frame(g1Tiles, 4, 4, 5),
    overworld_frame(g1Tiles, 4, 4, 6),
    overworld_frame(g1Tiles, 4, 4, 7),
    overworld_frame(g1Tiles, 4, 4, 8),
};

static const struct SpriteFrameImage gEventObjectPicTable_g2[] =
{
    overworld_frame(g2Tiles, 2, 4, 0),
    overworld_frame(g2Tiles, 2, 4, 1),
    overworld_frame(g2Tiles, 2, 4, 2),
    overworld_frame(g2Tiles, 2, 4, 3),
    overworld_frame(g2Tiles, 2, 4, 4),
    overworld_frame(g2Tiles, 2, 4, 5),
    overworld_frame(g2Tiles, 2, 4, 6),
    overworld_frame(g2Tiles, 2, 4, 7),
    overworld_frame(g2Tiles, 2, 4, 8),
    overworld_frame(g2Tiles, 2, 4, 9),
    overworld_frame(g2Tiles, 2, 4, 10),
    overworld_frame(g2Tiles, 2, 4, 11),
};

static const struct SpriteFrameImage gEventObjectPicTable_g3[] =
{
    overworld_frame(g3Tiles, 2, 4, 0),
    overworld_frame(g3Tiles, 2, 4, 1),
    overworld_frame(g3Tiles, 2, 4, 2),
    overworld_frame(g3Tiles, 2, 4, 3),
    overworld_frame(g3Tiles, 2, 4, 4),
    overworld_frame(g3Tiles, 2, 4, 5),
    overworld_frame(g3Tiles, 2, 4, 6),
    overworld_frame(g3Tiles, 2, 4, 7),
    overworld_frame(g3Tiles, 2, 4, 8),
};

static const struct SpriteFrameImage gEventObjectPicTable_g4[] =
{
    overworld_frame(g4Tiles, 4, 4, 0),
    overworld_frame(g4Tiles, 4, 4, 1),
    overworld_frame(g4Tiles, 4, 4, 2),
    overworld_frame(g4Tiles, 4, 4, 3),
    overworld_frame(g4Tiles, 4, 4, 4),
    overworld_frame(g4Tiles, 4, 4, 5),
    overworld_frame(g4Tiles, 4, 4, 6),
    overworld_frame(g4Tiles, 4, 4, 7),
    overworld_frame(g4Tiles, 4, 4, 8),
    overworld_frame(g4Tiles, 4, 4, 9),
    overworld_frame(g4Tiles, 4, 4, 10),
    overworld_frame(g4Tiles, 4, 4, 11),
};

static const struct SpriteFrameImage gEventObjectPicTable_g5[] =
{
    overworld_frame(g5Tiles, 2, 4, 0),
    overworld_frame(g5Tiles, 2, 4, 1),
    overworld_frame(g5Tiles, 2, 4, 2),
    overworld_frame(g5Tiles, 2, 4, 3),
    overworld_frame(g5Tiles, 2, 4, 4),
    overworld_frame(g5Tiles, 2, 4, 5),
    overworld_frame(g5Tiles, 2, 4, 6),
    overworld_frame(g5Tiles, 2, 4, 7),
    overworld_frame(g5Tiles, 2, 4, 8),
};

static const struct SpriteFrameImage gEventObjectPicTable_g6[] =
{
    overworld_frame(g6Tiles, 4, 4, 0),
    overworld_frame(g6Tiles, 4, 4, 1),
    overworld_frame(g6Tiles, 4, 4, 2),
    overworld_frame(g6Tiles, 4, 4, 3),
    overworld_frame(g6Tiles, 4, 4, 4),
    overworld_frame(g6Tiles, 4, 4, 5),
};

static const struct SpriteFrameImage gEventObjectPicTable_g7[] =
{
    overworld_frame(g7Tiles, 2, 4, 0),
    overworld_frame(g7Tiles, 2, 4, 1),
    overworld_frame(g7Tiles, 2, 4, 2),
    overworld_frame(g7Tiles, 2, 4, 3),
    overworld_frame(g7Tiles, 2, 4, 4),
    overworld_frame(g7Tiles, 2, 4, 5),
    overworld_frame(g7Tiles, 2, 4, 6),
    overworld_frame(g7Tiles, 2, 4, 7),
    overworld_frame(g7Tiles, 2, 4, 8),
    overworld_frame(g7Tiles, 2, 4, 9),
    overworld_frame(g7Tiles, 2, 4, 10),
    overworld_frame(g7Tiles, 2, 4, 11),
    overworld_frame(g7Tiles, 2, 4, 12),
    overworld_frame(g7Tiles, 2, 4, 13),
    overworld_frame(g7Tiles, 2, 4, 14),
    overworld_frame(g7Tiles, 2, 4, 15),
    overworld_frame(g7Tiles, 2, 4, 16),
    overworld_frame(g7Tiles, 2, 4, 17),
    overworld_frame(g7Tiles, 2, 4, 18),
    overworld_frame(g7Tiles, 2, 4, 19),
};

static const struct SpriteFrameImage gEventObjectPicTable_g72[] =
{
    overworld_frame(g72Tiles, 2, 4, 0),
    overworld_frame(g72Tiles, 2, 4, 1),
    overworld_frame(g72Tiles, 2, 4, 2),
    overworld_frame(g72Tiles, 2, 4, 3),
    overworld_frame(g72Tiles, 2, 4, 4),
    overworld_frame(g72Tiles, 2, 4, 5),
    overworld_frame(g72Tiles, 2, 4, 6),
    overworld_frame(g72Tiles, 2, 4, 7),
    overworld_frame(g72Tiles, 2, 4, 8),
};


const struct EventObjectGraphicsInfo gEventObjectGraphicsInfo_g0 =
{
    .tileTag = 0xFFFF,
    .paletteTag1 = 0x114F,
    .paletteTag2 = EVENT_OBJ_PAL_TAG_NONE,
    .size = (16 * 32) / 2,
    .width = 16,
    .height = 32,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .disableReflectionPaletteLoad = FALSE,
    .tracks = TRACKS_FOOT,
    .gender = MALE,
    .oam = gEventObjectBaseOam_16x32,
    .subspriteTables = gEventObjectSpriteOamTables_16x32,
    .anims = gEventObjectImageAnimTable_PlayerNormal,
    .images = gEventObjectPicTable_g0,
    .affineAnims = gDummySpriteAffineAnimTable,
};

const struct EventObjectGraphicsInfo gEventObjectGraphicsInfo_g1 =
{
    .tileTag = 0xFFFF,
    .paletteTag1 = 0x1150,
    .paletteTag2 = EVENT_OBJ_PAL_TAG_NONE,
    .size = (32 * 32) / 2,
    .width = 32,
    .height = 32,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .disableReflectionPaletteLoad = FALSE,
    .tracks = TRACKS_FOOT,
    .gender = MALE,
    .oam = gEventObjectBaseOam_32x32,
    .subspriteTables = gEventObjectSpriteOamTables_32x32,
    .anims = gEventObjectImageAnimTable_Standard,
    .images = gEventObjectPicTable_g1,
    .affineAnims = gDummySpriteAffineAnimTable,
};

const struct EventObjectGraphicsInfo gEventObjectGraphicsInfo_g2 =
{
    .tileTag = 0xFFFF,
    .paletteTag1 = 0x1151,
    .paletteTag2 = EVENT_OBJ_PAL_TAG_NONE,
    .size = (16 * 32) / 2,
    .width = 16,
    .height = 32,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .disableReflectionPaletteLoad = FALSE,
    .tracks = TRACKS_FOOT,
    .gender = MALE,
    .oam = gEventObjectBaseOam_16x32,
    .subspriteTables = gEventObjectSpriteOamTables_16x32,
    .anims = gEventObjectImageAnimTable_Surfing,
    .images = gEventObjectPicTable_g2,
    .affineAnims = gDummySpriteAffineAnimTable,
};

const struct EventObjectGraphicsInfo gEventObjectGraphicsInfo_g3 =
{
    .tileTag = 0xFFFF,
    .paletteTag1 = 0x1152,
    .paletteTag2 = EVENT_OBJ_PAL_TAG_NONE,
    .size = (16 * 32) / 2,
    .width = 16,
    .height = 32,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .disableReflectionPaletteLoad = FALSE,
    .tracks = TRACKS_FOOT,
    .gender = MALE,
    .oam = gEventObjectBaseOam_16x32,
    .subspriteTables = gEventObjectSpriteOamTables_16x32,
    .anims = gEventObjectImageAnimTable_FieldMove,
    .images = gEventObjectPicTable_g3,
    .affineAnims = gDummySpriteAffineAnimTable,
};

const struct EventObjectGraphicsInfo gEventObjectGraphicsInfo_g4 =
{
    .tileTag = 0xFFFF,
    .paletteTag1 = 0x1153,
    .paletteTag2 = EVENT_OBJ_PAL_TAG_NONE,
    .size = (32 * 32) / 2,
    .width = 32,
    .height = 32,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .disableReflectionPaletteLoad = FALSE,
    .tracks = TRACKS_FOOT,
    .gender = MALE,
    .oam = gEventObjectBaseOam_32x32,
    .subspriteTables = gEventObjectSpriteOamTables_32x32,
    .anims = gEventObjectImageAnimTable_Fishing,
    .images = gEventObjectPicTable_g4,
    .affineAnims = gDummySpriteAffineAnimTable,
};

const struct EventObjectGraphicsInfo gEventObjectGraphicsInfo_g5 =
{
    .tileTag = 0xFFFF,
    .paletteTag1 = 0x1154,
    .paletteTag2 = EVENT_OBJ_PAL_TAG_NONE,
    .size = (16 * 32) / 2,
    .width = 16,
    .height = 32,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .disableReflectionPaletteLoad = FALSE,
    .tracks = TRACKS_FOOT,
    .gender = MALE,
    .oam = gEventObjectBaseOam_16x32,
    .subspriteTables = gEventObjectSpriteOamTables_16x32,
    .anims = gEventObjectImageAnimTable_FieldMove,
    .images = gEventObjectPicTable_g5,
    .affineAnims = gDummySpriteAffineAnimTable,
};

const struct EventObjectGraphicsInfo gEventObjectGraphicsInfo_g6 =
{
    .tileTag = 0xFFFF,
    .paletteTag1 = 0x1155,
    .paletteTag2 = EVENT_OBJ_PAL_TAG_NONE,
    .size = (32* 32) / 2,
    .width = 32,
    .height = 32,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .disableReflectionPaletteLoad = FALSE,
    .tracks = TRACKS_FOOT,
    .gender = MALE,
    .oam = gEventObjectBaseOam_32x32,
    .subspriteTables = gEventObjectSpriteOamTables_32x32,
    .anims = gEventObjectImageAnimTable_VsSeekerBike,
    .images = gEventObjectPicTable_g6,
    .affineAnims = gDummySpriteAffineAnimTable,
};

const struct EventObjectGraphicsInfo gEventObjectGraphicsInfo_g7 =
{
    .tileTag = 0xFFFF,
    .paletteTag1 = 0x1156,
    .paletteTag2 = EVENT_OBJ_PAL_TAG_NONE,
    .size = (16 * 32) / 2,
    .width = 16,
    .height = 32,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .disableReflectionPaletteLoad = FALSE,
    .tracks = TRACKS_FOOT,
    .gender = FEMALE,
    .oam = gEventObjectBaseOam_16x32,
    .subspriteTables = gEventObjectSpriteOamTables_16x32,
    .anims = gEventObjectImageAnimTable_PlayerNormal,
    .images = gEventObjectPicTable_g7,
    .affineAnims = gDummySpriteAffineAnimTable,
};

const struct EventObjectGraphicsInfo gEventObjectGraphicsInfo_g72 =
{
    .tileTag = 0xFFFF,
    .paletteTag1 = 0x1157,
    .paletteTag2 = EVENT_OBJ_PAL_TAG_NONE,
    .size = (16 * 32) / 2,
    .width = 16,
    .height = 32,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .disableReflectionPaletteLoad = FALSE,
    .tracks = TRACKS_FOOT,
    .gender = MALE,
    .oam = gEventObjectBaseOam_16x32,
    .subspriteTables = gEventObjectSpriteOamTables_16x32,
    .anims = gEventObjectImageAnimTable_Standard,
    .images = gEventObjectPicTable_g72,
    .affineAnims = gDummySpriteAffineAnimTable,
};




