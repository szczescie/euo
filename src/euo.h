#pragma once

// conditionally included:
// <assert.h>
// <stdint.h>

// #region arity selection
#define _euo_arity_inner(                                                      \
    _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, \
    _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, \
    _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, \
    _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, \
    _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, _75, _76, \
    _77, _78, _79, _80, _81, _82, _83, _84, _85, _86, _87, _88, _89, _90, _91, \
    _92, _93, _94, _95, _96, _97, _98, _99, _100, _101, _102, _103, _104,      \
    _105, _106, _107, _108, _109, _110, _111, _112, _113, _114, _115, _116,    \
    _117, _118, _119, _120, _121, _122, _123, _124, _125, _126, _127, _128,    \
    _129, _130, _131, _132, _133, _134, _135, _136, _137, _138, _139, _140,    \
    _141, _142, _143, _144, _145, _146, _147, _148, _149, _150, _151, _152,    \
    _153, _154, _155, _156, _157, _158, _159, _160, _161, _162, _163, _164,    \
    _165, _166, _167, _168, _169, _170, _171, _172, _173, _174, _175, _176,    \
    _177, _178, _179, _180, _181, _182, _183, _184, _185, _186, _187, _188,    \
    _189, _190, _191, _192, _193, _194, _195, _196, _197, _198, _199, _200,    \
    _201, _202, _203, _204, _205, _206, _207, _208, _209, _210, _211, _212,    \
    _213, _214, _215, _216, _217, _218, _219, _220, _221, _222, _223, _224,    \
    _225, _226, _227, _228, _229, _230, _231, _232, _233, _234, _235, _236,    \
    _237, _238, _239, _240, _241, _242, _243, _244, _245, _246, _247, _248,    \
    _249, _250, _251, _252, _253, _254, _255, _256, _257, _258, _259, _260,    \
    _261, _262, _263, _264, _265, _266, _267, _268, _269, _270, _271, _272,    \
    _273, _274, _275, _276, _277, _278, _279, _280, _281, _282, _283, _284,    \
    _285, _286, _287, _288, _289, _290, _291, _292, _293, _294, _295, _296,    \
    _297, _298, _299, _300, _301, _302, _303, _304, _305, _306, _307, _308,    \
    _309, _310, _311, _312, _313, _314, _315, _316, _317, _318, _319, _320,    \
    _321, _322, _323, _324, _325, _326, _327, _328, _329, _330, _331, _332,    \
    _333, _334, _335, _336, _337, _338, _339, _340, _341, _342, _343, _344,    \
    _345, _346, _347, _348, _349, _350, _351, _352, _353, _354, _355, _356,    \
    _357, _358, _359, _360, _361, _362, _363, _364, _365, _366, _367, _368,    \
    _369, _370, _371, _372, _373, _374, _375, _376, _377, _378, _379, _380,    \
    _381, _382, _383, _384, _385, _386, _387, _388, _389, _390, _391, _392,    \
    _393, _394, _395, _396, _397, _398, _399, _400, _401, _402, _403, _404,    \
    _405, _406, _407, _408, _409, _410, _411, _412, _413, _414, _415, _416,    \
    _417, _418, _419, _420, _421, _422, _423, _424, _425, _426, _427, _428,    \
    _429, _430, _431, _432, _433, _434, _435, _436, _437, _438, _439, _440,    \
    _441, _442, _443, _444, _445, _446, _447, _448, _449, _450, _451, _452,    \
    _453, _454, _455, _456, _457, _458, _459, _460, _461, _462, _463, _464,    \
    _465, _466, _467, _468, _469, _470, _471, _472, _473, _474, _475, _476,    \
    _477, _478, _479, _480, _481, _482, _483, _484, _485, _486, _487, _488,    \
    _489, _490, _491, _492, _493, _494, _495, _496, _497, _498, _499, _500,    \
    _501, count, ...                                                           \
) count
#define _euo_arity(...) _euo_arity_inner(                                      \
    __VA_OPT__(, ) __VA_ARGS__, 501, 500, 499, 498, 497, 496, 495, 494, 493,   \
    492, 491, 490, 489, 488, 487, 486, 485, 484, 483, 482, 481, 480, 479, 478, \
    477, 476, 475, 474, 473, 472, 471, 470, 469, 468, 467, 466, 465, 464, 463, \
    462, 461, 460, 459, 458, 457, 456, 455, 454, 453, 452, 451, 450, 449, 448, \
    447, 446, 445, 444, 443, 442, 441, 440, 439, 438, 437, 436, 435, 434, 433, \
    432, 431, 430, 429, 428, 427, 426, 425, 424, 423, 422, 421, 420, 419, 418, \
    417, 416, 415, 414, 413, 412, 411, 410, 409, 408, 407, 406, 405, 404, 403, \
    402, 401, 400, 399, 398, 397, 396, 395, 394, 393, 392, 391, 390, 389, 388, \
    387, 386, 385, 384, 383, 382, 381, 380, 379, 378, 377, 376, 375, 374, 373, \
    372, 371, 370, 369, 368, 367, 366, 365, 364, 363, 362, 361, 360, 359, 358, \
    357, 356, 355, 354, 353, 352, 351, 350, 349, 348, 347, 346, 345, 344, 343, \
    342, 341, 340, 339, 338, 337, 336, 335, 334, 333, 332, 331, 330, 329, 328, \
    327, 326, 325, 324, 323, 322, 321, 320, 319, 318, 317, 316, 315, 314, 313, \
    312, 311, 310, 309, 308, 307, 306, 305, 304, 303, 302, 301, 300, 299, 298, \
    297, 296, 295, 294, 293, 292, 291, 290, 289, 288, 287, 286, 285, 284, 283, \
    282, 281, 280, 279, 278, 277, 276, 275, 274, 273, 272, 271, 270, 269, 268, \
    267, 266, 265, 264, 263, 262, 261, 260, 259, 258, 257, 256, 255, 254, 253, \
    252, 251, 250, 249, 248, 247, 246, 245, 244, 243, 242, 241, 240, 239, 238, \
    237, 236, 235, 234, 233, 232, 231, 230, 229, 228, 227, 226, 225, 224, 223, \
    222, 221, 220, 219, 218, 217, 216, 215, 214, 213, 212, 211, 210, 209, 208, \
    207, 206, 205, 204, 203, 202, 201, 200, 199, 198, 197, 196, 195, 194, 193, \
    192, 191, 190, 189, 188, 187, 186, 185, 184, 183, 182, 181, 180, 179, 178, \
    177, 176, 175, 174, 173, 172, 171, 170, 169, 168, 167, 166, 165, 164, 163, \
    162, 161, 160, 159, 158, 157, 156, 155, 154, 153, 152, 151, 150, 149, 148, \
    147, 146, 145, 144, 143, 142, 141, 140, 139, 138, 137, 136, 135, 134, 133, \
    132, 131, 130, 129, 128, 127, 126, 125, 124, 123, 122, 121, 120, 119, 118, \
    117, 116, 115, 114, 113, 112, 111, 110, 109, 108, 107, 106, 105, 104, 103, \
    102, 101, 100, 99, 98, 97, 96, 95, 94, 93, 92, 91, 90, 89, 88, 87, 86, 85, \
    84, 83, 82, 81, 80, 79, 78, 77, 76, 75, 74, 73, 72, 71, 70, 69, 68, 67,    \
    66, 65, 64, 63, 62, 61, 60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49,    \
    48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31,    \
    30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13,    \
    12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0                                   \
)
// #endregion

// #region map
#define _euo_map_0(_, __)
#define _euo_map_1(f, x) f(0, x)
#define _euo_map_2(f, x, ...) _euo_map_1(f, __VA_ARGS__) f(1, x)
#define _euo_map_3(f, x, ...) _euo_map_2(f, __VA_ARGS__) f(2, x)
#define _euo_map_4(f, x, ...) _euo_map_3(f, __VA_ARGS__) f(3, x)
#define _euo_map_5(f, x, ...) _euo_map_4(f, __VA_ARGS__) f(4, x)
#define _euo_map_6(f, x, ...) _euo_map_5(f, __VA_ARGS__) f(5, x)
#define _euo_map_7(f, x, ...) _euo_map_6(f, __VA_ARGS__) f(6, x)
#define _euo_map_8(f, x, ...) _euo_map_7(f, __VA_ARGS__) f(7, x)
#define _euo_map_9(f, x, ...) _euo_map_8(f, __VA_ARGS__) f(8, x)
#define _euo_map_10(f, x, ...) _euo_map_9(f, __VA_ARGS__) f(9, x)
#define _euo_map_11(f, x, ...) _euo_map_10(f, __VA_ARGS__) f(10, x)
#define _euo_map_12(f, x, ...) _euo_map_11(f, __VA_ARGS__) f(11, x)
#define _euo_map_13(f, x, ...) _euo_map_12(f, __VA_ARGS__) f(12, x)
#define _euo_map_14(f, x, ...) _euo_map_13(f, __VA_ARGS__) f(13, x)
#define _euo_map_15(f, x, ...) _euo_map_14(f, __VA_ARGS__) f(14, x)
#define _euo_map_16(f, x, ...) _euo_map_15(f, __VA_ARGS__) f(15, x)
#define _euo_map_17(f, x, ...) _euo_map_16(f, __VA_ARGS__) f(16, x)
#define _euo_map_18(f, x, ...) _euo_map_17(f, __VA_ARGS__) f(17, x)
#define _euo_map_19(f, x, ...) _euo_map_18(f, __VA_ARGS__) f(18, x)
#define _euo_map_20(f, x, ...) _euo_map_19(f, __VA_ARGS__) f(19, x)
#define _euo_map_21(f, x, ...) _euo_map_20(f, __VA_ARGS__) f(20, x)
#define _euo_map_22(f, x, ...) _euo_map_21(f, __VA_ARGS__) f(21, x)
#define _euo_map_23(f, x, ...) _euo_map_22(f, __VA_ARGS__) f(22, x)
#define _euo_map_24(f, x, ...) _euo_map_23(f, __VA_ARGS__) f(23, x)
#define _euo_map_25(f, x, ...) _euo_map_24(f, __VA_ARGS__) f(24, x)
#define _euo_map_26(f, x, ...) _euo_map_25(f, __VA_ARGS__) f(25, x)
#define _euo_map_27(f, x, ...) _euo_map_26(f, __VA_ARGS__) f(26, x)
#define _euo_map_28(f, x, ...) _euo_map_27(f, __VA_ARGS__) f(27, x)
#define _euo_map_29(f, x, ...) _euo_map_28(f, __VA_ARGS__) f(28, x)
#define _euo_map_30(f, x, ...) _euo_map_29(f, __VA_ARGS__) f(29, x)
#define _euo_map_31(f, x, ...) _euo_map_30(f, __VA_ARGS__) f(30, x)
#define _euo_map_32(f, x, ...) _euo_map_31(f, __VA_ARGS__) f(31, x)
#define _euo_map_33(f, x, ...) _euo_map_32(f, __VA_ARGS__) f(32, x)
#define _euo_map_34(f, x, ...) _euo_map_33(f, __VA_ARGS__) f(33, x)
#define _euo_map_35(f, x, ...) _euo_map_34(f, __VA_ARGS__) f(34, x)
#define _euo_map_36(f, x, ...) _euo_map_35(f, __VA_ARGS__) f(35, x)
#define _euo_map_37(f, x, ...) _euo_map_36(f, __VA_ARGS__) f(36, x)
#define _euo_map_38(f, x, ...) _euo_map_37(f, __VA_ARGS__) f(37, x)
#define _euo_map_39(f, x, ...) _euo_map_38(f, __VA_ARGS__) f(38, x)
#define _euo_map_40(f, x, ...) _euo_map_39(f, __VA_ARGS__) f(39, x)
#define _euo_map_41(f, x, ...) _euo_map_40(f, __VA_ARGS__) f(40, x)
#define _euo_map_42(f, x, ...) _euo_map_41(f, __VA_ARGS__) f(41, x)
#define _euo_map_43(f, x, ...) _euo_map_42(f, __VA_ARGS__) f(42, x)
#define _euo_map_44(f, x, ...) _euo_map_43(f, __VA_ARGS__) f(43, x)
#define _euo_map_45(f, x, ...) _euo_map_44(f, __VA_ARGS__) f(44, x)
#define _euo_map_46(f, x, ...) _euo_map_45(f, __VA_ARGS__) f(45, x)
#define _euo_map_47(f, x, ...) _euo_map_46(f, __VA_ARGS__) f(46, x)
#define _euo_map_48(f, x, ...) _euo_map_47(f, __VA_ARGS__) f(47, x)
#define _euo_map_49(f, x, ...) _euo_map_48(f, __VA_ARGS__) f(48, x)
#define _euo_map_50(f, x, ...) _euo_map_49(f, __VA_ARGS__) f(49, x)
#define _euo_map_51(f, x, ...) _euo_map_50(f, __VA_ARGS__) f(50, x)
#define _euo_map_52(f, x, ...) _euo_map_51(f, __VA_ARGS__) f(51, x)
#define _euo_map_53(f, x, ...) _euo_map_52(f, __VA_ARGS__) f(52, x)
#define _euo_map_54(f, x, ...) _euo_map_53(f, __VA_ARGS__) f(53, x)
#define _euo_map_55(f, x, ...) _euo_map_54(f, __VA_ARGS__) f(54, x)
#define _euo_map_56(f, x, ...) _euo_map_55(f, __VA_ARGS__) f(55, x)
#define _euo_map_57(f, x, ...) _euo_map_56(f, __VA_ARGS__) f(56, x)
#define _euo_map_58(f, x, ...) _euo_map_57(f, __VA_ARGS__) f(57, x)
#define _euo_map_59(f, x, ...) _euo_map_58(f, __VA_ARGS__) f(58, x)
#define _euo_map_60(f, x, ...) _euo_map_59(f, __VA_ARGS__) f(59, x)
#define _euo_map_61(f, x, ...) _euo_map_60(f, __VA_ARGS__) f(60, x)
#define _euo_map_62(f, x, ...) _euo_map_61(f, __VA_ARGS__) f(61, x)
#define _euo_map_63(f, x, ...) _euo_map_62(f, __VA_ARGS__) f(62, x)
#define _euo_map_64(f, x, ...) _euo_map_63(f, __VA_ARGS__) f(63, x)
#define _euo_map_65(f, x, ...) _euo_map_64(f, __VA_ARGS__) f(64, x)
#define _euo_map_66(f, x, ...) _euo_map_65(f, __VA_ARGS__) f(65, x)
#define _euo_map_67(f, x, ...) _euo_map_66(f, __VA_ARGS__) f(66, x)
#define _euo_map_68(f, x, ...) _euo_map_67(f, __VA_ARGS__) f(67, x)
#define _euo_map_69(f, x, ...) _euo_map_68(f, __VA_ARGS__) f(68, x)
#define _euo_map_70(f, x, ...) _euo_map_69(f, __VA_ARGS__) f(69, x)
#define _euo_map_71(f, x, ...) _euo_map_70(f, __VA_ARGS__) f(70, x)
#define _euo_map_72(f, x, ...) _euo_map_71(f, __VA_ARGS__) f(71, x)
#define _euo_map_73(f, x, ...) _euo_map_72(f, __VA_ARGS__) f(72, x)
#define _euo_map_74(f, x, ...) _euo_map_73(f, __VA_ARGS__) f(73, x)
#define _euo_map_75(f, x, ...) _euo_map_74(f, __VA_ARGS__) f(74, x)
#define _euo_map_76(f, x, ...) _euo_map_75(f, __VA_ARGS__) f(75, x)
#define _euo_map_77(f, x, ...) _euo_map_76(f, __VA_ARGS__) f(76, x)
#define _euo_map_78(f, x, ...) _euo_map_77(f, __VA_ARGS__) f(77, x)
#define _euo_map_79(f, x, ...) _euo_map_78(f, __VA_ARGS__) f(78, x)
#define _euo_map_80(f, x, ...) _euo_map_79(f, __VA_ARGS__) f(79, x)
#define _euo_map_81(f, x, ...) _euo_map_80(f, __VA_ARGS__) f(80, x)
#define _euo_map_82(f, x, ...) _euo_map_81(f, __VA_ARGS__) f(81, x)
#define _euo_map_83(f, x, ...) _euo_map_82(f, __VA_ARGS__) f(82, x)
#define _euo_map_84(f, x, ...) _euo_map_83(f, __VA_ARGS__) f(83, x)
#define _euo_map_85(f, x, ...) _euo_map_84(f, __VA_ARGS__) f(84, x)
#define _euo_map_86(f, x, ...) _euo_map_85(f, __VA_ARGS__) f(85, x)
#define _euo_map_87(f, x, ...) _euo_map_86(f, __VA_ARGS__) f(86, x)
#define _euo_map_88(f, x, ...) _euo_map_87(f, __VA_ARGS__) f(87, x)
#define _euo_map_89(f, x, ...) _euo_map_88(f, __VA_ARGS__) f(88, x)
#define _euo_map_90(f, x, ...) _euo_map_89(f, __VA_ARGS__) f(89, x)
#define _euo_map_91(f, x, ...) _euo_map_90(f, __VA_ARGS__) f(90, x)
#define _euo_map_92(f, x, ...) _euo_map_91(f, __VA_ARGS__) f(91, x)
#define _euo_map_93(f, x, ...) _euo_map_92(f, __VA_ARGS__) f(92, x)
#define _euo_map_94(f, x, ...) _euo_map_93(f, __VA_ARGS__) f(93, x)
#define _euo_map_95(f, x, ...) _euo_map_94(f, __VA_ARGS__) f(94, x)
#define _euo_map_96(f, x, ...) _euo_map_95(f, __VA_ARGS__) f(95, x)
#define _euo_map_97(f, x, ...) _euo_map_96(f, __VA_ARGS__) f(96, x)
#define _euo_map_98(f, x, ...) _euo_map_97(f, __VA_ARGS__) f(97, x)
#define _euo_map_99(f, x, ...) _euo_map_98(f, __VA_ARGS__) f(98, x)
#define _euo_map_100(f, x, ...) _euo_map_99(f, __VA_ARGS__) f(99, x)
#define _euo_map_101(f, x, ...) _euo_map_100(f, __VA_ARGS__) f(100, x)
#define _euo_map_102(f, x, ...) _euo_map_101(f, __VA_ARGS__) f(101, x)
#define _euo_map_103(f, x, ...) _euo_map_102(f, __VA_ARGS__) f(102, x)
#define _euo_map_104(f, x, ...) _euo_map_103(f, __VA_ARGS__) f(103, x)
#define _euo_map_105(f, x, ...) _euo_map_104(f, __VA_ARGS__) f(104, x)
#define _euo_map_106(f, x, ...) _euo_map_105(f, __VA_ARGS__) f(105, x)
#define _euo_map_107(f, x, ...) _euo_map_106(f, __VA_ARGS__) f(106, x)
#define _euo_map_108(f, x, ...) _euo_map_107(f, __VA_ARGS__) f(107, x)
#define _euo_map_109(f, x, ...) _euo_map_108(f, __VA_ARGS__) f(108, x)
#define _euo_map_110(f, x, ...) _euo_map_109(f, __VA_ARGS__) f(109, x)
#define _euo_map_111(f, x, ...) _euo_map_110(f, __VA_ARGS__) f(110, x)
#define _euo_map_112(f, x, ...) _euo_map_111(f, __VA_ARGS__) f(111, x)
#define _euo_map_113(f, x, ...) _euo_map_112(f, __VA_ARGS__) f(112, x)
#define _euo_map_114(f, x, ...) _euo_map_113(f, __VA_ARGS__) f(113, x)
#define _euo_map_115(f, x, ...) _euo_map_114(f, __VA_ARGS__) f(114, x)
#define _euo_map_116(f, x, ...) _euo_map_115(f, __VA_ARGS__) f(115, x)
#define _euo_map_117(f, x, ...) _euo_map_116(f, __VA_ARGS__) f(116, x)
#define _euo_map_118(f, x, ...) _euo_map_117(f, __VA_ARGS__) f(117, x)
#define _euo_map_119(f, x, ...) _euo_map_118(f, __VA_ARGS__) f(118, x)
#define _euo_map_120(f, x, ...) _euo_map_119(f, __VA_ARGS__) f(119, x)
#define _euo_map_121(f, x, ...) _euo_map_120(f, __VA_ARGS__) f(120, x)
#define _euo_map_122(f, x, ...) _euo_map_121(f, __VA_ARGS__) f(121, x)
#define _euo_map_123(f, x, ...) _euo_map_122(f, __VA_ARGS__) f(122, x)
#define _euo_map_124(f, x, ...) _euo_map_123(f, __VA_ARGS__) f(123, x)
#define _euo_map_125(f, x, ...) _euo_map_124(f, __VA_ARGS__) f(124, x)
#define _euo_map_126(f, x, ...) _euo_map_125(f, __VA_ARGS__) f(125, x)
#define _euo_map_127(f, x, ...) _euo_map_126(f, __VA_ARGS__) f(126, x)
#define _euo_map_128(f, x, ...) _euo_map_127(f, __VA_ARGS__) f(127, x)
#define _euo_map_129(f, x, ...) _euo_map_128(f, __VA_ARGS__) f(128, x)
#define _euo_map_130(f, x, ...) _euo_map_129(f, __VA_ARGS__) f(129, x)
#define _euo_map_131(f, x, ...) _euo_map_130(f, __VA_ARGS__) f(130, x)
#define _euo_map_132(f, x, ...) _euo_map_131(f, __VA_ARGS__) f(131, x)
#define _euo_map_133(f, x, ...) _euo_map_132(f, __VA_ARGS__) f(132, x)
#define _euo_map_134(f, x, ...) _euo_map_133(f, __VA_ARGS__) f(133, x)
#define _euo_map_135(f, x, ...) _euo_map_134(f, __VA_ARGS__) f(134, x)
#define _euo_map_136(f, x, ...) _euo_map_135(f, __VA_ARGS__) f(135, x)
#define _euo_map_137(f, x, ...) _euo_map_136(f, __VA_ARGS__) f(136, x)
#define _euo_map_138(f, x, ...) _euo_map_137(f, __VA_ARGS__) f(137, x)
#define _euo_map_139(f, x, ...) _euo_map_138(f, __VA_ARGS__) f(138, x)
#define _euo_map_140(f, x, ...) _euo_map_139(f, __VA_ARGS__) f(139, x)
#define _euo_map_141(f, x, ...) _euo_map_140(f, __VA_ARGS__) f(140, x)
#define _euo_map_142(f, x, ...) _euo_map_141(f, __VA_ARGS__) f(141, x)
#define _euo_map_143(f, x, ...) _euo_map_142(f, __VA_ARGS__) f(142, x)
#define _euo_map_144(f, x, ...) _euo_map_143(f, __VA_ARGS__) f(143, x)
#define _euo_map_145(f, x, ...) _euo_map_144(f, __VA_ARGS__) f(144, x)
#define _euo_map_146(f, x, ...) _euo_map_145(f, __VA_ARGS__) f(145, x)
#define _euo_map_147(f, x, ...) _euo_map_146(f, __VA_ARGS__) f(146, x)
#define _euo_map_148(f, x, ...) _euo_map_147(f, __VA_ARGS__) f(147, x)
#define _euo_map_149(f, x, ...) _euo_map_148(f, __VA_ARGS__) f(148, x)
#define _euo_map_150(f, x, ...) _euo_map_149(f, __VA_ARGS__) f(149, x)
#define _euo_map_151(f, x, ...) _euo_map_150(f, __VA_ARGS__) f(150, x)
#define _euo_map_152(f, x, ...) _euo_map_151(f, __VA_ARGS__) f(151, x)
#define _euo_map_153(f, x, ...) _euo_map_152(f, __VA_ARGS__) f(152, x)
#define _euo_map_154(f, x, ...) _euo_map_153(f, __VA_ARGS__) f(153, x)
#define _euo_map_155(f, x, ...) _euo_map_154(f, __VA_ARGS__) f(154, x)
#define _euo_map_156(f, x, ...) _euo_map_155(f, __VA_ARGS__) f(155, x)
#define _euo_map_157(f, x, ...) _euo_map_156(f, __VA_ARGS__) f(156, x)
#define _euo_map_158(f, x, ...) _euo_map_157(f, __VA_ARGS__) f(157, x)
#define _euo_map_159(f, x, ...) _euo_map_158(f, __VA_ARGS__) f(158, x)
#define _euo_map_160(f, x, ...) _euo_map_159(f, __VA_ARGS__) f(159, x)
#define _euo_map_161(f, x, ...) _euo_map_160(f, __VA_ARGS__) f(160, x)
#define _euo_map_162(f, x, ...) _euo_map_161(f, __VA_ARGS__) f(161, x)
#define _euo_map_163(f, x, ...) _euo_map_162(f, __VA_ARGS__) f(162, x)
#define _euo_map_164(f, x, ...) _euo_map_163(f, __VA_ARGS__) f(163, x)
#define _euo_map_165(f, x, ...) _euo_map_164(f, __VA_ARGS__) f(164, x)
#define _euo_map_166(f, x, ...) _euo_map_165(f, __VA_ARGS__) f(165, x)
#define _euo_map_167(f, x, ...) _euo_map_166(f, __VA_ARGS__) f(166, x)
#define _euo_map_168(f, x, ...) _euo_map_167(f, __VA_ARGS__) f(167, x)
#define _euo_map_169(f, x, ...) _euo_map_168(f, __VA_ARGS__) f(168, x)
#define _euo_map_170(f, x, ...) _euo_map_169(f, __VA_ARGS__) f(169, x)
#define _euo_map_171(f, x, ...) _euo_map_170(f, __VA_ARGS__) f(170, x)
#define _euo_map_172(f, x, ...) _euo_map_171(f, __VA_ARGS__) f(171, x)
#define _euo_map_173(f, x, ...) _euo_map_172(f, __VA_ARGS__) f(172, x)
#define _euo_map_174(f, x, ...) _euo_map_173(f, __VA_ARGS__) f(173, x)
#define _euo_map_175(f, x, ...) _euo_map_174(f, __VA_ARGS__) f(174, x)
#define _euo_map_176(f, x, ...) _euo_map_175(f, __VA_ARGS__) f(175, x)
#define _euo_map_177(f, x, ...) _euo_map_176(f, __VA_ARGS__) f(176, x)
#define _euo_map_178(f, x, ...) _euo_map_177(f, __VA_ARGS__) f(177, x)
#define _euo_map_179(f, x, ...) _euo_map_178(f, __VA_ARGS__) f(178, x)
#define _euo_map_180(f, x, ...) _euo_map_179(f, __VA_ARGS__) f(179, x)
#define _euo_map_181(f, x, ...) _euo_map_180(f, __VA_ARGS__) f(180, x)
#define _euo_map_182(f, x, ...) _euo_map_181(f, __VA_ARGS__) f(181, x)
#define _euo_map_183(f, x, ...) _euo_map_182(f, __VA_ARGS__) f(182, x)
#define _euo_map_184(f, x, ...) _euo_map_183(f, __VA_ARGS__) f(183, x)
#define _euo_map_185(f, x, ...) _euo_map_184(f, __VA_ARGS__) f(184, x)
#define _euo_map_186(f, x, ...) _euo_map_185(f, __VA_ARGS__) f(185, x)
#define _euo_map_187(f, x, ...) _euo_map_186(f, __VA_ARGS__) f(186, x)
#define _euo_map_188(f, x, ...) _euo_map_187(f, __VA_ARGS__) f(187, x)
#define _euo_map_189(f, x, ...) _euo_map_188(f, __VA_ARGS__) f(188, x)
#define _euo_map_190(f, x, ...) _euo_map_189(f, __VA_ARGS__) f(189, x)
#define _euo_map_191(f, x, ...) _euo_map_190(f, __VA_ARGS__) f(190, x)
#define _euo_map_192(f, x, ...) _euo_map_191(f, __VA_ARGS__) f(191, x)
#define _euo_map_193(f, x, ...) _euo_map_192(f, __VA_ARGS__) f(192, x)
#define _euo_map_194(f, x, ...) _euo_map_193(f, __VA_ARGS__) f(193, x)
#define _euo_map_195(f, x, ...) _euo_map_194(f, __VA_ARGS__) f(194, x)
#define _euo_map_196(f, x, ...) _euo_map_195(f, __VA_ARGS__) f(195, x)
#define _euo_map_197(f, x, ...) _euo_map_196(f, __VA_ARGS__) f(196, x)
#define _euo_map_198(f, x, ...) _euo_map_197(f, __VA_ARGS__) f(197, x)
#define _euo_map_199(f, x, ...) _euo_map_198(f, __VA_ARGS__) f(198, x)
#define _euo_map_200(f, x, ...) _euo_map_199(f, __VA_ARGS__) f(199, x)
#define _euo_map_201(f, x, ...) _euo_map_200(f, __VA_ARGS__) f(200, x)
#define _euo_map_202(f, x, ...) _euo_map_201(f, __VA_ARGS__) f(201, x)
#define _euo_map_203(f, x, ...) _euo_map_202(f, __VA_ARGS__) f(202, x)
#define _euo_map_204(f, x, ...) _euo_map_203(f, __VA_ARGS__) f(203, x)
#define _euo_map_205(f, x, ...) _euo_map_204(f, __VA_ARGS__) f(204, x)
#define _euo_map_206(f, x, ...) _euo_map_205(f, __VA_ARGS__) f(205, x)
#define _euo_map_207(f, x, ...) _euo_map_206(f, __VA_ARGS__) f(206, x)
#define _euo_map_208(f, x, ...) _euo_map_207(f, __VA_ARGS__) f(207, x)
#define _euo_map_209(f, x, ...) _euo_map_208(f, __VA_ARGS__) f(208, x)
#define _euo_map_210(f, x, ...) _euo_map_209(f, __VA_ARGS__) f(209, x)
#define _euo_map_211(f, x, ...) _euo_map_210(f, __VA_ARGS__) f(210, x)
#define _euo_map_212(f, x, ...) _euo_map_211(f, __VA_ARGS__) f(211, x)
#define _euo_map_213(f, x, ...) _euo_map_212(f, __VA_ARGS__) f(212, x)
#define _euo_map_214(f, x, ...) _euo_map_213(f, __VA_ARGS__) f(213, x)
#define _euo_map_215(f, x, ...) _euo_map_214(f, __VA_ARGS__) f(214, x)
#define _euo_map_216(f, x, ...) _euo_map_215(f, __VA_ARGS__) f(215, x)
#define _euo_map_217(f, x, ...) _euo_map_216(f, __VA_ARGS__) f(216, x)
#define _euo_map_218(f, x, ...) _euo_map_217(f, __VA_ARGS__) f(217, x)
#define _euo_map_219(f, x, ...) _euo_map_218(f, __VA_ARGS__) f(218, x)
#define _euo_map_220(f, x, ...) _euo_map_219(f, __VA_ARGS__) f(219, x)
#define _euo_map_221(f, x, ...) _euo_map_220(f, __VA_ARGS__) f(220, x)
#define _euo_map_222(f, x, ...) _euo_map_221(f, __VA_ARGS__) f(221, x)
#define _euo_map_223(f, x, ...) _euo_map_222(f, __VA_ARGS__) f(222, x)
#define _euo_map_224(f, x, ...) _euo_map_223(f, __VA_ARGS__) f(223, x)
#define _euo_map_225(f, x, ...) _euo_map_224(f, __VA_ARGS__) f(224, x)
#define _euo_map_226(f, x, ...) _euo_map_225(f, __VA_ARGS__) f(225, x)
#define _euo_map_227(f, x, ...) _euo_map_226(f, __VA_ARGS__) f(226, x)
#define _euo_map_228(f, x, ...) _euo_map_227(f, __VA_ARGS__) f(227, x)
#define _euo_map_229(f, x, ...) _euo_map_228(f, __VA_ARGS__) f(228, x)
#define _euo_map_230(f, x, ...) _euo_map_229(f, __VA_ARGS__) f(229, x)
#define _euo_map_231(f, x, ...) _euo_map_230(f, __VA_ARGS__) f(230, x)
#define _euo_map_232(f, x, ...) _euo_map_231(f, __VA_ARGS__) f(231, x)
#define _euo_map_233(f, x, ...) _euo_map_232(f, __VA_ARGS__) f(232, x)
#define _euo_map_234(f, x, ...) _euo_map_233(f, __VA_ARGS__) f(233, x)
#define _euo_map_235(f, x, ...) _euo_map_234(f, __VA_ARGS__) f(234, x)
#define _euo_map_236(f, x, ...) _euo_map_235(f, __VA_ARGS__) f(235, x)
#define _euo_map_237(f, x, ...) _euo_map_236(f, __VA_ARGS__) f(236, x)
#define _euo_map_238(f, x, ...) _euo_map_237(f, __VA_ARGS__) f(237, x)
#define _euo_map_239(f, x, ...) _euo_map_238(f, __VA_ARGS__) f(238, x)
#define _euo_map_240(f, x, ...) _euo_map_239(f, __VA_ARGS__) f(239, x)
#define _euo_map_241(f, x, ...) _euo_map_240(f, __VA_ARGS__) f(240, x)
#define _euo_map_242(f, x, ...) _euo_map_241(f, __VA_ARGS__) f(241, x)
#define _euo_map_243(f, x, ...) _euo_map_242(f, __VA_ARGS__) f(242, x)
#define _euo_map_244(f, x, ...) _euo_map_243(f, __VA_ARGS__) f(243, x)
#define _euo_map_245(f, x, ...) _euo_map_244(f, __VA_ARGS__) f(244, x)
#define _euo_map_246(f, x, ...) _euo_map_245(f, __VA_ARGS__) f(245, x)
#define _euo_map_247(f, x, ...) _euo_map_246(f, __VA_ARGS__) f(246, x)
#define _euo_map_248(f, x, ...) _euo_map_247(f, __VA_ARGS__) f(247, x)
#define _euo_map_249(f, x, ...) _euo_map_248(f, __VA_ARGS__) f(248, x)
#define _euo_map_250(f, x, ...) _euo_map_249(f, __VA_ARGS__) f(249, x)
#define _euo_map_251(f, x, ...) _euo_map_250(f, __VA_ARGS__) f(250, x)
#define _euo_map_252(f, x, ...) _euo_map_251(f, __VA_ARGS__) f(251, x)
#define _euo_map_253(f, x, ...) _euo_map_252(f, __VA_ARGS__) f(252, x)
#define _euo_map_254(f, x, ...) _euo_map_253(f, __VA_ARGS__) f(253, x)
#define _euo_map_255(f, x, ...) _euo_map_254(f, __VA_ARGS__) f(254, x)
#define _euo_map_256(f, x, ...) _euo_map_255(f, __VA_ARGS__) f(255, x)
#define _euo_map_257(f, x, ...) _euo_map_256(f, __VA_ARGS__) f(256, x)
#define _euo_map_258(f, x, ...) _euo_map_257(f, __VA_ARGS__) f(257, x)
#define _euo_map_259(f, x, ...) _euo_map_258(f, __VA_ARGS__) f(258, x)
#define _euo_map_260(f, x, ...) _euo_map_259(f, __VA_ARGS__) f(259, x)
#define _euo_map_261(f, x, ...) _euo_map_260(f, __VA_ARGS__) f(260, x)
#define _euo_map_262(f, x, ...) _euo_map_261(f, __VA_ARGS__) f(261, x)
#define _euo_map_263(f, x, ...) _euo_map_262(f, __VA_ARGS__) f(262, x)
#define _euo_map_264(f, x, ...) _euo_map_263(f, __VA_ARGS__) f(263, x)
#define _euo_map_265(f, x, ...) _euo_map_264(f, __VA_ARGS__) f(264, x)
#define _euo_map_266(f, x, ...) _euo_map_265(f, __VA_ARGS__) f(265, x)
#define _euo_map_267(f, x, ...) _euo_map_266(f, __VA_ARGS__) f(266, x)
#define _euo_map_268(f, x, ...) _euo_map_267(f, __VA_ARGS__) f(267, x)
#define _euo_map_269(f, x, ...) _euo_map_268(f, __VA_ARGS__) f(268, x)
#define _euo_map_270(f, x, ...) _euo_map_269(f, __VA_ARGS__) f(269, x)
#define _euo_map_271(f, x, ...) _euo_map_270(f, __VA_ARGS__) f(270, x)
#define _euo_map_272(f, x, ...) _euo_map_271(f, __VA_ARGS__) f(271, x)
#define _euo_map_273(f, x, ...) _euo_map_272(f, __VA_ARGS__) f(272, x)
#define _euo_map_274(f, x, ...) _euo_map_273(f, __VA_ARGS__) f(273, x)
#define _euo_map_275(f, x, ...) _euo_map_274(f, __VA_ARGS__) f(274, x)
#define _euo_map_276(f, x, ...) _euo_map_275(f, __VA_ARGS__) f(275, x)
#define _euo_map_277(f, x, ...) _euo_map_276(f, __VA_ARGS__) f(276, x)
#define _euo_map_278(f, x, ...) _euo_map_277(f, __VA_ARGS__) f(277, x)
#define _euo_map_279(f, x, ...) _euo_map_278(f, __VA_ARGS__) f(278, x)
#define _euo_map_280(f, x, ...) _euo_map_279(f, __VA_ARGS__) f(279, x)
#define _euo_map_281(f, x, ...) _euo_map_280(f, __VA_ARGS__) f(280, x)
#define _euo_map_282(f, x, ...) _euo_map_281(f, __VA_ARGS__) f(281, x)
#define _euo_map_283(f, x, ...) _euo_map_282(f, __VA_ARGS__) f(282, x)
#define _euo_map_284(f, x, ...) _euo_map_283(f, __VA_ARGS__) f(283, x)
#define _euo_map_285(f, x, ...) _euo_map_284(f, __VA_ARGS__) f(284, x)
#define _euo_map_286(f, x, ...) _euo_map_285(f, __VA_ARGS__) f(285, x)
#define _euo_map_287(f, x, ...) _euo_map_286(f, __VA_ARGS__) f(286, x)
#define _euo_map_288(f, x, ...) _euo_map_287(f, __VA_ARGS__) f(287, x)
#define _euo_map_289(f, x, ...) _euo_map_288(f, __VA_ARGS__) f(288, x)
#define _euo_map_290(f, x, ...) _euo_map_289(f, __VA_ARGS__) f(289, x)
#define _euo_map_291(f, x, ...) _euo_map_290(f, __VA_ARGS__) f(290, x)
#define _euo_map_292(f, x, ...) _euo_map_291(f, __VA_ARGS__) f(291, x)
#define _euo_map_293(f, x, ...) _euo_map_292(f, __VA_ARGS__) f(292, x)
#define _euo_map_294(f, x, ...) _euo_map_293(f, __VA_ARGS__) f(293, x)
#define _euo_map_295(f, x, ...) _euo_map_294(f, __VA_ARGS__) f(294, x)
#define _euo_map_296(f, x, ...) _euo_map_295(f, __VA_ARGS__) f(295, x)
#define _euo_map_297(f, x, ...) _euo_map_296(f, __VA_ARGS__) f(296, x)
#define _euo_map_298(f, x, ...) _euo_map_297(f, __VA_ARGS__) f(297, x)
#define _euo_map_299(f, x, ...) _euo_map_298(f, __VA_ARGS__) f(298, x)
#define _euo_map_300(f, x, ...) _euo_map_299(f, __VA_ARGS__) f(299, x)
#define _euo_map_301(f, x, ...) _euo_map_300(f, __VA_ARGS__) f(300, x)
#define _euo_map_302(f, x, ...) _euo_map_301(f, __VA_ARGS__) f(301, x)
#define _euo_map_303(f, x, ...) _euo_map_302(f, __VA_ARGS__) f(302, x)
#define _euo_map_304(f, x, ...) _euo_map_303(f, __VA_ARGS__) f(303, x)
#define _euo_map_305(f, x, ...) _euo_map_304(f, __VA_ARGS__) f(304, x)
#define _euo_map_306(f, x, ...) _euo_map_305(f, __VA_ARGS__) f(305, x)
#define _euo_map_307(f, x, ...) _euo_map_306(f, __VA_ARGS__) f(306, x)
#define _euo_map_308(f, x, ...) _euo_map_307(f, __VA_ARGS__) f(307, x)
#define _euo_map_309(f, x, ...) _euo_map_308(f, __VA_ARGS__) f(308, x)
#define _euo_map_310(f, x, ...) _euo_map_309(f, __VA_ARGS__) f(309, x)
#define _euo_map_311(f, x, ...) _euo_map_310(f, __VA_ARGS__) f(310, x)
#define _euo_map_312(f, x, ...) _euo_map_311(f, __VA_ARGS__) f(311, x)
#define _euo_map_313(f, x, ...) _euo_map_312(f, __VA_ARGS__) f(312, x)
#define _euo_map_314(f, x, ...) _euo_map_313(f, __VA_ARGS__) f(313, x)
#define _euo_map_315(f, x, ...) _euo_map_314(f, __VA_ARGS__) f(314, x)
#define _euo_map_316(f, x, ...) _euo_map_315(f, __VA_ARGS__) f(315, x)
#define _euo_map_317(f, x, ...) _euo_map_316(f, __VA_ARGS__) f(316, x)
#define _euo_map_318(f, x, ...) _euo_map_317(f, __VA_ARGS__) f(317, x)
#define _euo_map_319(f, x, ...) _euo_map_318(f, __VA_ARGS__) f(318, x)
#define _euo_map_320(f, x, ...) _euo_map_319(f, __VA_ARGS__) f(319, x)
#define _euo_map_321(f, x, ...) _euo_map_320(f, __VA_ARGS__) f(320, x)
#define _euo_map_322(f, x, ...) _euo_map_321(f, __VA_ARGS__) f(321, x)
#define _euo_map_323(f, x, ...) _euo_map_322(f, __VA_ARGS__) f(322, x)
#define _euo_map_324(f, x, ...) _euo_map_323(f, __VA_ARGS__) f(323, x)
#define _euo_map_325(f, x, ...) _euo_map_324(f, __VA_ARGS__) f(324, x)
#define _euo_map_326(f, x, ...) _euo_map_325(f, __VA_ARGS__) f(325, x)
#define _euo_map_327(f, x, ...) _euo_map_326(f, __VA_ARGS__) f(326, x)
#define _euo_map_328(f, x, ...) _euo_map_327(f, __VA_ARGS__) f(327, x)
#define _euo_map_329(f, x, ...) _euo_map_328(f, __VA_ARGS__) f(328, x)
#define _euo_map_330(f, x, ...) _euo_map_329(f, __VA_ARGS__) f(329, x)
#define _euo_map_331(f, x, ...) _euo_map_330(f, __VA_ARGS__) f(330, x)
#define _euo_map_332(f, x, ...) _euo_map_331(f, __VA_ARGS__) f(331, x)
#define _euo_map_333(f, x, ...) _euo_map_332(f, __VA_ARGS__) f(332, x)
#define _euo_map_334(f, x, ...) _euo_map_333(f, __VA_ARGS__) f(333, x)
#define _euo_map_335(f, x, ...) _euo_map_334(f, __VA_ARGS__) f(334, x)
#define _euo_map_336(f, x, ...) _euo_map_335(f, __VA_ARGS__) f(335, x)
#define _euo_map_337(f, x, ...) _euo_map_336(f, __VA_ARGS__) f(336, x)
#define _euo_map_338(f, x, ...) _euo_map_337(f, __VA_ARGS__) f(337, x)
#define _euo_map_339(f, x, ...) _euo_map_338(f, __VA_ARGS__) f(338, x)
#define _euo_map_340(f, x, ...) _euo_map_339(f, __VA_ARGS__) f(339, x)
#define _euo_map_341(f, x, ...) _euo_map_340(f, __VA_ARGS__) f(340, x)
#define _euo_map_342(f, x, ...) _euo_map_341(f, __VA_ARGS__) f(341, x)
#define _euo_map_343(f, x, ...) _euo_map_342(f, __VA_ARGS__) f(342, x)
#define _euo_map_344(f, x, ...) _euo_map_343(f, __VA_ARGS__) f(343, x)
#define _euo_map_345(f, x, ...) _euo_map_344(f, __VA_ARGS__) f(344, x)
#define _euo_map_346(f, x, ...) _euo_map_345(f, __VA_ARGS__) f(345, x)
#define _euo_map_347(f, x, ...) _euo_map_346(f, __VA_ARGS__) f(346, x)
#define _euo_map_348(f, x, ...) _euo_map_347(f, __VA_ARGS__) f(347, x)
#define _euo_map_349(f, x, ...) _euo_map_348(f, __VA_ARGS__) f(348, x)
#define _euo_map_350(f, x, ...) _euo_map_349(f, __VA_ARGS__) f(349, x)
#define _euo_map_351(f, x, ...) _euo_map_350(f, __VA_ARGS__) f(350, x)
#define _euo_map_352(f, x, ...) _euo_map_351(f, __VA_ARGS__) f(351, x)
#define _euo_map_353(f, x, ...) _euo_map_352(f, __VA_ARGS__) f(352, x)
#define _euo_map_354(f, x, ...) _euo_map_353(f, __VA_ARGS__) f(353, x)
#define _euo_map_355(f, x, ...) _euo_map_354(f, __VA_ARGS__) f(354, x)
#define _euo_map_356(f, x, ...) _euo_map_355(f, __VA_ARGS__) f(355, x)
#define _euo_map_357(f, x, ...) _euo_map_356(f, __VA_ARGS__) f(356, x)
#define _euo_map_358(f, x, ...) _euo_map_357(f, __VA_ARGS__) f(357, x)
#define _euo_map_359(f, x, ...) _euo_map_358(f, __VA_ARGS__) f(358, x)
#define _euo_map_360(f, x, ...) _euo_map_359(f, __VA_ARGS__) f(359, x)
#define _euo_map_361(f, x, ...) _euo_map_360(f, __VA_ARGS__) f(360, x)
#define _euo_map_362(f, x, ...) _euo_map_361(f, __VA_ARGS__) f(361, x)
#define _euo_map_363(f, x, ...) _euo_map_362(f, __VA_ARGS__) f(362, x)
#define _euo_map_364(f, x, ...) _euo_map_363(f, __VA_ARGS__) f(363, x)
#define _euo_map_365(f, x, ...) _euo_map_364(f, __VA_ARGS__) f(364, x)
#define _euo_map_366(f, x, ...) _euo_map_365(f, __VA_ARGS__) f(365, x)
#define _euo_map_367(f, x, ...) _euo_map_366(f, __VA_ARGS__) f(366, x)
#define _euo_map_368(f, x, ...) _euo_map_367(f, __VA_ARGS__) f(367, x)
#define _euo_map_369(f, x, ...) _euo_map_368(f, __VA_ARGS__) f(368, x)
#define _euo_map_370(f, x, ...) _euo_map_369(f, __VA_ARGS__) f(369, x)
#define _euo_map_371(f, x, ...) _euo_map_370(f, __VA_ARGS__) f(370, x)
#define _euo_map_372(f, x, ...) _euo_map_371(f, __VA_ARGS__) f(371, x)
#define _euo_map_373(f, x, ...) _euo_map_372(f, __VA_ARGS__) f(372, x)
#define _euo_map_374(f, x, ...) _euo_map_373(f, __VA_ARGS__) f(373, x)
#define _euo_map_375(f, x, ...) _euo_map_374(f, __VA_ARGS__) f(374, x)
#define _euo_map_376(f, x, ...) _euo_map_375(f, __VA_ARGS__) f(375, x)
#define _euo_map_377(f, x, ...) _euo_map_376(f, __VA_ARGS__) f(376, x)
#define _euo_map_378(f, x, ...) _euo_map_377(f, __VA_ARGS__) f(377, x)
#define _euo_map_379(f, x, ...) _euo_map_378(f, __VA_ARGS__) f(378, x)
#define _euo_map_380(f, x, ...) _euo_map_379(f, __VA_ARGS__) f(379, x)
#define _euo_map_381(f, x, ...) _euo_map_380(f, __VA_ARGS__) f(380, x)
#define _euo_map_382(f, x, ...) _euo_map_381(f, __VA_ARGS__) f(381, x)
#define _euo_map_383(f, x, ...) _euo_map_382(f, __VA_ARGS__) f(382, x)
#define _euo_map_384(f, x, ...) _euo_map_383(f, __VA_ARGS__) f(383, x)
#define _euo_map_385(f, x, ...) _euo_map_384(f, __VA_ARGS__) f(384, x)
#define _euo_map_386(f, x, ...) _euo_map_385(f, __VA_ARGS__) f(385, x)
#define _euo_map_387(f, x, ...) _euo_map_386(f, __VA_ARGS__) f(386, x)
#define _euo_map_388(f, x, ...) _euo_map_387(f, __VA_ARGS__) f(387, x)
#define _euo_map_389(f, x, ...) _euo_map_388(f, __VA_ARGS__) f(388, x)
#define _euo_map_390(f, x, ...) _euo_map_389(f, __VA_ARGS__) f(389, x)
#define _euo_map_391(f, x, ...) _euo_map_390(f, __VA_ARGS__) f(390, x)
#define _euo_map_392(f, x, ...) _euo_map_391(f, __VA_ARGS__) f(391, x)
#define _euo_map_393(f, x, ...) _euo_map_392(f, __VA_ARGS__) f(392, x)
#define _euo_map_394(f, x, ...) _euo_map_393(f, __VA_ARGS__) f(393, x)
#define _euo_map_395(f, x, ...) _euo_map_394(f, __VA_ARGS__) f(394, x)
#define _euo_map_396(f, x, ...) _euo_map_395(f, __VA_ARGS__) f(395, x)
#define _euo_map_397(f, x, ...) _euo_map_396(f, __VA_ARGS__) f(396, x)
#define _euo_map_398(f, x, ...) _euo_map_397(f, __VA_ARGS__) f(397, x)
#define _euo_map_399(f, x, ...) _euo_map_398(f, __VA_ARGS__) f(398, x)
#define _euo_map_400(f, x, ...) _euo_map_399(f, __VA_ARGS__) f(399, x)
#define _euo_map_401(f, x, ...) _euo_map_400(f, __VA_ARGS__) f(400, x)
#define _euo_map_402(f, x, ...) _euo_map_401(f, __VA_ARGS__) f(401, x)
#define _euo_map_403(f, x, ...) _euo_map_402(f, __VA_ARGS__) f(402, x)
#define _euo_map_404(f, x, ...) _euo_map_403(f, __VA_ARGS__) f(403, x)
#define _euo_map_405(f, x, ...) _euo_map_404(f, __VA_ARGS__) f(404, x)
#define _euo_map_406(f, x, ...) _euo_map_405(f, __VA_ARGS__) f(405, x)
#define _euo_map_407(f, x, ...) _euo_map_406(f, __VA_ARGS__) f(406, x)
#define _euo_map_408(f, x, ...) _euo_map_407(f, __VA_ARGS__) f(407, x)
#define _euo_map_409(f, x, ...) _euo_map_408(f, __VA_ARGS__) f(408, x)
#define _euo_map_410(f, x, ...) _euo_map_409(f, __VA_ARGS__) f(409, x)
#define _euo_map_411(f, x, ...) _euo_map_410(f, __VA_ARGS__) f(410, x)
#define _euo_map_412(f, x, ...) _euo_map_411(f, __VA_ARGS__) f(411, x)
#define _euo_map_413(f, x, ...) _euo_map_412(f, __VA_ARGS__) f(412, x)
#define _euo_map_414(f, x, ...) _euo_map_413(f, __VA_ARGS__) f(413, x)
#define _euo_map_415(f, x, ...) _euo_map_414(f, __VA_ARGS__) f(414, x)
#define _euo_map_416(f, x, ...) _euo_map_415(f, __VA_ARGS__) f(415, x)
#define _euo_map_417(f, x, ...) _euo_map_416(f, __VA_ARGS__) f(416, x)
#define _euo_map_418(f, x, ...) _euo_map_417(f, __VA_ARGS__) f(417, x)
#define _euo_map_419(f, x, ...) _euo_map_418(f, __VA_ARGS__) f(418, x)
#define _euo_map_420(f, x, ...) _euo_map_419(f, __VA_ARGS__) f(419, x)
#define _euo_map_421(f, x, ...) _euo_map_420(f, __VA_ARGS__) f(420, x)
#define _euo_map_422(f, x, ...) _euo_map_421(f, __VA_ARGS__) f(421, x)
#define _euo_map_423(f, x, ...) _euo_map_422(f, __VA_ARGS__) f(422, x)
#define _euo_map_424(f, x, ...) _euo_map_423(f, __VA_ARGS__) f(423, x)
#define _euo_map_425(f, x, ...) _euo_map_424(f, __VA_ARGS__) f(424, x)
#define _euo_map_426(f, x, ...) _euo_map_425(f, __VA_ARGS__) f(425, x)
#define _euo_map_427(f, x, ...) _euo_map_426(f, __VA_ARGS__) f(426, x)
#define _euo_map_428(f, x, ...) _euo_map_427(f, __VA_ARGS__) f(427, x)
#define _euo_map_429(f, x, ...) _euo_map_428(f, __VA_ARGS__) f(428, x)
#define _euo_map_430(f, x, ...) _euo_map_429(f, __VA_ARGS__) f(429, x)
#define _euo_map_431(f, x, ...) _euo_map_430(f, __VA_ARGS__) f(430, x)
#define _euo_map_432(f, x, ...) _euo_map_431(f, __VA_ARGS__) f(431, x)
#define _euo_map_433(f, x, ...) _euo_map_432(f, __VA_ARGS__) f(432, x)
#define _euo_map_434(f, x, ...) _euo_map_433(f, __VA_ARGS__) f(433, x)
#define _euo_map_435(f, x, ...) _euo_map_434(f, __VA_ARGS__) f(434, x)
#define _euo_map_436(f, x, ...) _euo_map_435(f, __VA_ARGS__) f(435, x)
#define _euo_map_437(f, x, ...) _euo_map_436(f, __VA_ARGS__) f(436, x)
#define _euo_map_438(f, x, ...) _euo_map_437(f, __VA_ARGS__) f(437, x)
#define _euo_map_439(f, x, ...) _euo_map_438(f, __VA_ARGS__) f(438, x)
#define _euo_map_440(f, x, ...) _euo_map_439(f, __VA_ARGS__) f(439, x)
#define _euo_map_441(f, x, ...) _euo_map_440(f, __VA_ARGS__) f(440, x)
#define _euo_map_442(f, x, ...) _euo_map_441(f, __VA_ARGS__) f(441, x)
#define _euo_map_443(f, x, ...) _euo_map_442(f, __VA_ARGS__) f(442, x)
#define _euo_map_444(f, x, ...) _euo_map_443(f, __VA_ARGS__) f(443, x)
#define _euo_map_445(f, x, ...) _euo_map_444(f, __VA_ARGS__) f(444, x)
#define _euo_map_446(f, x, ...) _euo_map_445(f, __VA_ARGS__) f(445, x)
#define _euo_map_447(f, x, ...) _euo_map_446(f, __VA_ARGS__) f(446, x)
#define _euo_map_448(f, x, ...) _euo_map_447(f, __VA_ARGS__) f(447, x)
#define _euo_map_449(f, x, ...) _euo_map_448(f, __VA_ARGS__) f(448, x)
#define _euo_map_450(f, x, ...) _euo_map_449(f, __VA_ARGS__) f(449, x)
#define _euo_map_451(f, x, ...) _euo_map_450(f, __VA_ARGS__) f(450, x)
#define _euo_map_452(f, x, ...) _euo_map_451(f, __VA_ARGS__) f(451, x)
#define _euo_map_453(f, x, ...) _euo_map_452(f, __VA_ARGS__) f(452, x)
#define _euo_map_454(f, x, ...) _euo_map_453(f, __VA_ARGS__) f(453, x)
#define _euo_map_455(f, x, ...) _euo_map_454(f, __VA_ARGS__) f(454, x)
#define _euo_map_456(f, x, ...) _euo_map_455(f, __VA_ARGS__) f(455, x)
#define _euo_map_457(f, x, ...) _euo_map_456(f, __VA_ARGS__) f(456, x)
#define _euo_map_458(f, x, ...) _euo_map_457(f, __VA_ARGS__) f(457, x)
#define _euo_map_459(f, x, ...) _euo_map_458(f, __VA_ARGS__) f(458, x)
#define _euo_map_460(f, x, ...) _euo_map_459(f, __VA_ARGS__) f(459, x)
#define _euo_map_461(f, x, ...) _euo_map_460(f, __VA_ARGS__) f(460, x)
#define _euo_map_462(f, x, ...) _euo_map_461(f, __VA_ARGS__) f(461, x)
#define _euo_map_463(f, x, ...) _euo_map_462(f, __VA_ARGS__) f(462, x)
#define _euo_map_464(f, x, ...) _euo_map_463(f, __VA_ARGS__) f(463, x)
#define _euo_map_465(f, x, ...) _euo_map_464(f, __VA_ARGS__) f(464, x)
#define _euo_map_466(f, x, ...) _euo_map_465(f, __VA_ARGS__) f(465, x)
#define _euo_map_467(f, x, ...) _euo_map_466(f, __VA_ARGS__) f(466, x)
#define _euo_map_468(f, x, ...) _euo_map_467(f, __VA_ARGS__) f(467, x)
#define _euo_map_469(f, x, ...) _euo_map_468(f, __VA_ARGS__) f(468, x)
#define _euo_map_470(f, x, ...) _euo_map_469(f, __VA_ARGS__) f(469, x)
#define _euo_map_471(f, x, ...) _euo_map_470(f, __VA_ARGS__) f(470, x)
#define _euo_map_472(f, x, ...) _euo_map_471(f, __VA_ARGS__) f(471, x)
#define _euo_map_473(f, x, ...) _euo_map_472(f, __VA_ARGS__) f(472, x)
#define _euo_map_474(f, x, ...) _euo_map_473(f, __VA_ARGS__) f(473, x)
#define _euo_map_475(f, x, ...) _euo_map_474(f, __VA_ARGS__) f(474, x)
#define _euo_map_476(f, x, ...) _euo_map_475(f, __VA_ARGS__) f(475, x)
#define _euo_map_477(f, x, ...) _euo_map_476(f, __VA_ARGS__) f(476, x)
#define _euo_map_478(f, x, ...) _euo_map_477(f, __VA_ARGS__) f(477, x)
#define _euo_map_479(f, x, ...) _euo_map_478(f, __VA_ARGS__) f(478, x)
#define _euo_map_480(f, x, ...) _euo_map_479(f, __VA_ARGS__) f(479, x)
#define _euo_map_481(f, x, ...) _euo_map_480(f, __VA_ARGS__) f(480, x)
#define _euo_map_482(f, x, ...) _euo_map_481(f, __VA_ARGS__) f(481, x)
#define _euo_map_483(f, x, ...) _euo_map_482(f, __VA_ARGS__) f(482, x)
#define _euo_map_484(f, x, ...) _euo_map_483(f, __VA_ARGS__) f(483, x)
#define _euo_map_485(f, x, ...) _euo_map_484(f, __VA_ARGS__) f(484, x)
#define _euo_map_486(f, x, ...) _euo_map_485(f, __VA_ARGS__) f(485, x)
#define _euo_map_487(f, x, ...) _euo_map_486(f, __VA_ARGS__) f(486, x)
#define _euo_map_488(f, x, ...) _euo_map_487(f, __VA_ARGS__) f(487, x)
#define _euo_map_489(f, x, ...) _euo_map_488(f, __VA_ARGS__) f(488, x)
#define _euo_map_490(f, x, ...) _euo_map_489(f, __VA_ARGS__) f(489, x)
#define _euo_map_491(f, x, ...) _euo_map_490(f, __VA_ARGS__) f(490, x)
#define _euo_map_492(f, x, ...) _euo_map_491(f, __VA_ARGS__) f(491, x)
#define _euo_map_493(f, x, ...) _euo_map_492(f, __VA_ARGS__) f(492, x)
#define _euo_map_494(f, x, ...) _euo_map_493(f, __VA_ARGS__) f(493, x)
#define _euo_map_495(f, x, ...) _euo_map_494(f, __VA_ARGS__) f(494, x)
#define _euo_map_496(f, x, ...) _euo_map_495(f, __VA_ARGS__) f(495, x)
#define _euo_map_497(f, x, ...) _euo_map_496(f, __VA_ARGS__) f(496, x)
#define _euo_map_498(f, x, ...) _euo_map_497(f, __VA_ARGS__) f(497, x)
#define _euo_map_499(f, x, ...) _euo_map_498(f, __VA_ARGS__) f(498, x)
#define _euo_map_500(f, x, ...) _euo_map_499(f, __VA_ARGS__) f(499, x)
#define _euo_map_501(f, x, ...) _euo_map_500(f, __VA_ARGS__) f(500, x)

#define _euo_cat_inner(a, b) a##b
#define _euo_cat(a, b) _euo_cat_inner(a, b)

#define _euo_map_select(...) _euo_cat(_euo_map_, _euo_arity(__VA_ARGS__))
#define _euo_map(macro, ...) _euo_map_select(__VA_ARGS__)(macro, __VA_ARGS__)
// #endregion

// #region generic selection
#define _euo_ErrUnion_i(i) _euo_cat(_euo_ErrUnion_, i) // i means index
#define _euo_Optional_i(i) _euo_cat(_euo_Optional_, i)
#define _euo_ErrOpt_i(i) _euo_cat(_euo_ErrOpt_, i)
#define _euo_ok_i(i) _euo_cat(_euo_ok_, i)
#define _euo_ok_opt_i(i) _euo_cat(_euo_ok_opt_, i)
#define _euo_err_i(i) _euo_cat(_euo_err_, i)
#define _euo_err_opt_i(i) _euo_cat(_euo_err_opt_, i)
#define _euo_some_i(i) _euo_cat(_euo_some_, i)
#define _euo_none_i(i) _euo_cat(_euo_none_, i)
#define _euo_failed_i(i) _euo_cat(_euo_failed_, i)
#define _euo_failed_opt_i(i) _euo_cat(_euo_failed_opt_, i)
#define _euo_absent_i(i) _euo_cat(_euo_absent_, i)
#define _euo_val_err_union_i(i) _euo_cat(_euo_val_err_union_, i)
#define _euo_val_err_union_opt_i(i) _euo_cat(_euo_val_err_union_opt_, i)
#define _euo_val_optional_i(i) _euo_cat(_euo_val_optional_, i)
#define _euo_errcode_i(i) _euo_cat(_euo_errcode_, i)
#define _euo_errcode_opt_i(i) _euo_cat(_euo_errcode_opt_, i)

// clang-format off
#define _euo_generic_err_union(i, T) \
    , T: (_euo_ErrUnion_i(i)){}      \
    , _euo_Optional_i(i): (_euo_ErrOpt_i(i)){}
#define _euo_generic_optional(i, T) \
    , T: (_euo_Optional_i(i)){}
#define _euo_generic_ok(i, T) \
    , T: _euo_ok_i(i)         \
    , _euo_Optional_i(i): _euo_ok_opt_i(i)
#define _euo_generic_err(i, T) \
    , T: _euo_err_i(i)         \
    , _euo_Optional_i(i): _euo_err_opt_i(i)
#define _euo_generic_some(i, T) \
    , T: _euo_some_i(i)
#define _euo_generic_none(i, T) \
    , T: _euo_none_i(i)
#define _euo_generic_failed(i, _)          \
    , _euo_ErrUnion_i(i): _euo_failed_i(i) \
    , _euo_ErrOpt_i(i): _euo_failed_opt_i(i)
#define _euo_generic_absent(i, _) \
    , _euo_Optional_i(i): _euo_absent_i(i)
#define _euo_generic_val(i, _)                    \
    , _euo_ErrUnion_i(i): _euo_val_err_union_i(i) \
    , _euo_Optional_i(i): _euo_val_optional_i(i)  \
    , _euo_ErrOpt_i(i): _euo_val_err_union_opt_i(i)
#define _euo_generic_errcode(i, _)          \
    , _euo_ErrUnion_i(i): _euo_errcode_i(i) \
    , _euo_ErrOpt_i(i): _euo_errcode_opt_i(i)
// clang-format on

// clang-format off
#define _euo_Err_arity_n(T) typeof(_Generic((T){} \
    _euo_map(_euo_generic_err_union, _euo_types)  \
))
#define _euo_Opt_arity_n(T) typeof(_Generic((T){} \
    _euo_map(_euo_generic_optional, _euo_types)   \
))
#define _euo_ok_arity_n(...) _Generic((__VA_ARGS__) \
    _euo_map(_euo_generic_ok, _euo_types)           \
)(__VA_ARGS__)
#define _euo_err_arity_n(T, ...) _Generic((T){} \
    _euo_map(_euo_generic_err, _euo_types)      \
)(__VA_ARGS__)
#define _euo_some_arity_n(...) _Generic((__VA_ARGS__) \
    _euo_map(_euo_generic_some, _euo_types)           \
)(__VA_ARGS__)
#define _euo_none_arity_n(T) _Generic((T){} \
    _euo_map(_euo_generic_none, _euo_types) \
)
#define _euo_failed(...) _Generic((__VA_ARGS__) \
    _euo_map(_euo_generic_failed, _euo_types)   \
)(__VA_ARGS__)
#define _euo_absent(...) _Generic((__VA_ARGS__) \
    _euo_map(_euo_generic_absent, _euo_types)   \
)(__VA_ARGS__)
#define _euo_val(...) _Generic((__VA_ARGS__) \
    _euo_map(_euo_generic_val, _euo_types)   \
)(__VA_ARGS__)
#define _euo_errcode(...) _Generic((__VA_ARGS__) \
    _euo_map(_euo_generic_errcode, _euo_types)   \
)(__VA_ARGS__)
// clang-format on

#define _euo_Err_arity_0() _euo_Err_arity_n(_euo_Void)
#define _euo_Opt_arity_0() _euo_Opt_arity_n(_euo_Void)
#define _euo_ok_arity_0() _euo_ok_arity_n((_euo_Void){})
#define _euo_err_arity_1(...) _euo_err_arity_n(_euo_Void, __VA_ARGS__)
#define _euo_some_arity_0() _euo_some_arity_n((_euo_Void){})
#define _euo_none_arity_0() _euo_none_arity_n(_euo_Void)

#define _euo_arity_0 0
#define _euo_not_arity_0 n
#define _euo_arity_0_or_n(name, ...) \
    _euo_cat(name, _euo_##__VA_OPT__(not_)##arity_0)(__VA_ARGS__)

#define _euo_arity_1 1
#define _euo_not_arity_1 n
#define _euo_arity_1_or_n(name, arg_0, ...)           \
    _euo_cat(name, _euo_##__VA_OPT__(not_)##arity_1)( \
        arg_0 __VA_OPT__(, ) __VA_ARGS__              \
    )

#define _euo_Err(...) _euo_arity_0_or_n(_euo_Err_arity_, __VA_ARGS__)
#define _euo_Opt(...) _euo_arity_0_or_n(_euo_Opt_arity_, __VA_ARGS__)
#define _euo_ok(...) _euo_arity_0_or_n(_euo_ok_arity_, __VA_ARGS__)
#define _euo_err(...) _euo_arity_1_or_n(_euo_err_arity_, __VA_ARGS__)
#define _euo_some(...) _euo_arity_0_or_n(_euo_some_arity_, __VA_ARGS__)
#define _euo_none(...) _euo_arity_0_or_n(_euo_none_arity_, __VA_ARGS__)
// #endregion

// #region declarations
// clang-format off
#define _euo_def_err_union(i, T)                          \
    typedef struct _euo_ErrUnion_i(i) {                   \
        bool error_active;                                \
        union { T value; _euo_ErrorCode error; } payload; \
    } _euo_ErrUnion_i(i);

#define _euo_def_optional(i, T)         \
    typedef struct _euo_Optional_i(i) { \
        bool null_active;               \
        T value;                        \
    } _euo_Optional_i(i);

#define _euo_def_err_union_opt(i, T)                      \
    typedef struct _euo_ErrOpt_i(i) {                     \
        bool error_active;                                \
        bool null_active;                                 \
        union { T value; _euo_ErrorCode error; } payload; \
    } _euo_ErrOpt_i(i);
// clang-format on

#define _euo_decl_ok(i, T)                     \
    _euo_attr _euo_ErrUnion_i(i) _euo_ok_i(i)( \
        register T const value                 \
    );
#define _euo_def_ok(i, T)                             \
    _euo_attr inline _euo_ErrUnion_i(i) _euo_ok_i(i)( \
        register T const value                        \
    ) {                                               \
        return (_euo_ErrUnion_i(i)){                  \
            .error_active = false,                    \
            .payload = { .value = value }             \
        };                                            \
    }

#define _euo_decl_ok_opt(i, T)                     \
    _euo_attr _euo_ErrOpt_i(i) _euo_ok_opt_i(i)(   \
        register _euo_Optional_i(i) const optional \
    );
#define _euo_def_ok_opt(i, T)                           \
    _euo_attr inline _euo_ErrOpt_i(i) _euo_ok_opt_i(i)( \
        register _euo_Optional_i(i) const optional      \
    ) {                                                 \
        return (_euo_ErrOpt_i(i)){                      \
            .error_active = false,                      \
            .null_active = optional.null_active,        \
            .payload = { .value = optional.value }      \
        };                                              \
    }

#define _euo_decl_err(i)                        \
    _euo_attr _euo_ErrUnion_i(i) _euo_err_i(i)( \
        register _euo_ErrorCode const error     \
    );
#define _euo_def_err(i)                                \
    _euo_attr inline _euo_ErrUnion_i(i) _euo_err_i(i)( \
        register _euo_ErrorCode const error            \
    ) {                                                \
        return (_euo_ErrUnion_i(i)){                   \
            .error_active = true,                      \
            .payload = { .error = error }              \
        };                                             \
    }

#define _euo_decl_err_opt(i)                      \
    _euo_attr _euo_ErrOpt_i(i) _euo_err_opt_i(i)( \
        register _euo_ErrorCode const error       \
    );
#define _euo_def_err_opt(i)                              \
    _euo_attr inline _euo_ErrOpt_i(i) _euo_err_opt_i(i)( \
        register _euo_ErrorCode const error              \
    ) {                                                  \
        return (_euo_ErrOpt_i(i)){                       \
            .error_active = true,                        \
            .payload = { .error = error }                \
        };                                               \
    }

#define _euo_decl_some(i, T)                     \
    _euo_attr _euo_Optional_i(i) _euo_some_i(i)( \
        register T const value                   \
    );
#define _euo_def_some(i, T)                             \
    _euo_attr inline _euo_Optional_i(i) _euo_some_i(i)( \
        register T const value                          \
    ) {                                                 \
        return (_euo_Optional_i(i)){                    \
            .null_active = false,                       \
            .value = value                              \
        };                                              \
    }

#define _euo_def_none(i)                             \
    [[maybe_unused]] constexpr auto _euo_none_i(i) = \
        (_euo_Optional_i(i)){ .null_active = true };

#define _euo_decl_failed(i)                         \
    _euo_attr bool _euo_failed_i(i)(                \
        register _euo_ErrUnion_i(i) const err_union \
    );
#define _euo_def_failed(i)                                      \
    _euo_attr inline bool _euo_failed_i(i)(                     \
        register _euo_ErrUnion_i(i) const err_union             \
    ) {                                                         \
        return __builtin_expect(err_union.error_active, false); \
    }

#define _euo_decl_failed_opt(i)                      \
    _euo_attr bool _euo_failed_opt_i(i)(             \
        register _euo_ErrOpt_i(i) const err_optional \
    );
#define _euo_def_failed_opt(i)                                     \
    _euo_attr inline bool _euo_failed_opt_i(i)(                    \
        register _euo_ErrOpt_i(i) const err_optional               \
    ) {                                                            \
        return __builtin_expect(err_optional.error_active, false); \
    }

#define _euo_decl_absent(i)                        \
    _euo_attr bool _euo_absent_i(i)(               \
        register _euo_Optional_i(i) const optional \
    );
#define _euo_def_absent(i)                                    \
    _euo_attr inline bool _euo_absent_i(i)(                   \
        register _euo_Optional_i(i) const optional            \
    ) {                                                       \
        return __builtin_expect(optional.null_active, false); \
    }

#define _euo_decl_val_err_union(i, T)               \
    _euo_attr T _euo_val_err_union_i(i)(            \
        register _euo_ErrUnion_i(i) const err_union \
    );
#define _euo_def_val_err_union(i, T)                \
    _euo_attr inline T _euo_val_err_union_i(i)(     \
        register _euo_ErrUnion_i(i) const err_union \
    ) {                                             \
        register bool const value_field_is_active = \
            !_euo_failed_i(i)(err_union);           \
        _euo_assert(value_field_is_active);         \
        return err_union.payload.value;             \
    }

#define _euo_decl_val_err_union_opt(i, T)                     \
    _euo_attr _euo_Optional_i(i) _euo_val_err_union_opt_i(i)( \
        register _euo_ErrOpt_i(i) const err_optional          \
    );
#define _euo_def_val_err_union_opt(i, T)                             \
    _euo_attr inline _euo_Optional_i(i) _euo_val_err_union_opt_i(i)( \
        register _euo_ErrOpt_i(i) const err_optional                 \
    ) {                                                              \
        register bool const error_field_is_not_active =              \
            !_euo_failed_opt_i(i)(err_optional);                     \
        _euo_assert(error_field_is_not_active);                      \
        return (_euo_Optional_i(i)){                                 \
            .null_active = err_optional.null_active,                 \
            .value = err_optional.payload.value                      \
        };                                                           \
    }

#define _euo_decl_val_optional(i, T)               \
    _euo_attr T _euo_val_optional_i(i)(            \
        register _euo_Optional_i(i) const optional \
    );
#define _euo_def_val_optional(i, T)                 \
    _euo_attr inline T _euo_val_optional_i(i)(      \
        register _euo_Optional_i(i) const optional  \
    ) {                                             \
        register bool const value_field_is_active = \
            !_euo_absent_i(i)(optional);            \
        _euo_assert(value_field_is_active);         \
        return optional.value;                      \
    }

#define _euo_decl_errcode(i)                        \
    _euo_attr _euo_ErrorCode _euo_errcode_i(i)(     \
        register _euo_ErrUnion_i(i) const err_union \
    );
#define _euo_def_errcode(i)                                 \
    _euo_attr inline _euo_ErrorCode _euo_errcode_i(i)(      \
        register _euo_ErrUnion_i(i) const err_union         \
    ) {                                                     \
        register bool const error_field_is_active =         \
            __builtin_expect(err_union.error_active, true); \
        _euo_assert(error_field_is_active);                 \
        return err_union.payload.error;                     \
    }

#define _euo_decl_errcode_opt(i)                     \
    _euo_attr _euo_ErrorCode _euo_errcode_opt_i(i)(  \
        register _euo_ErrOpt_i(i) const err_optional \
    );
#define _euo_def_errcode_opt(i)                                \
    _euo_attr inline _euo_ErrorCode _euo_errcode_opt_i(i)(     \
        register _euo_ErrOpt_i(i) const err_optional           \
    ) {                                                        \
        register bool const error_field_is_active =            \
            __builtin_expect(err_optional.error_active, true); \
        _euo_assert(error_field_is_active);                    \
        return err_optional.payload.error;                     \
    }

// clang-format off
#define _euo_define_types(i, T)  \
    _euo_def_err_union(i, T)     \
    _euo_def_optional(i, T)      \
    _euo_def_err_union_opt(i, T) \
    _euo_def_none(i)                 
#define _euo_declare_functions(i, T)  \
    _euo_decl_ok(i, T)                \
    _euo_decl_ok_opt(i, T)            \
    _euo_decl_err(i)                  \
    _euo_decl_err_opt(i)              \
    _euo_decl_some(i, T)              \
    _euo_decl_failed(i)               \
    _euo_decl_failed_opt(i)           \
    _euo_decl_absent(i)               \
    _euo_decl_val_err_union(i, T)     \
    _euo_decl_val_err_union_opt(i, T) \
    _euo_decl_val_optional(i, T)      \
    _euo_decl_errcode(i)              \
    _euo_decl_errcode_opt(i)
#define _euo_define_functions(i, T)  \
    _euo_def_ok(i, T)                \
    _euo_def_ok_opt(i, T)            \
    _euo_def_err(i)                  \
    _euo_def_err_opt(i)              \
    _euo_def_some(i, T)              \
    _euo_def_failed(i)               \
    _euo_def_failed_opt(i)           \
    _euo_def_absent(i)               \
    _euo_def_val_err_union(i, T)     \
    _euo_def_val_err_union_opt(i, T) \
    _euo_def_val_optional(i, T)      \
    _euo_def_errcode(i)              \
    _euo_def_errcode_opt(i)
// clang-format on
// #endregion

// #region library interface
#define _euo_empty 1
#define _euo_not_empty 0
#define _euo_is_empty(...) _euo_##__VA_OPT__(not_)##empty
#define _euo_with_comma(...) __VA_OPT__(, ) __VA_ARGS__

#if !defined euo_types || _euo_is_empty(euo_types)
    #define _euo_types _euo_Void
#else
    #define _euo_types _euo_Void _euo_with_comma(euo_types)
#endif

#if !defined euo_error_type || _euo_is_empty(euo_error_type)
    #include <stdint.h>
    #define _euo_ErrorCode uint_fast16_t
#else
    #define _euo_ErrorCode euo_error_type
#endif

#if !defined euo_flags
    #define euo_flags
#endif

#define _euo_static_implementation 1
#define _euo_implementation 2
#define _euo_short_names 4
#define _euo_no_pedantic 8
#define _euo_no_assert 16

#define _euo_or(_, flag) | _euo_##flag
#define _euo_flag_bits (0 _euo_map(_euo_or, euo_flags))
#define _euo_flag(flag) (_euo_##flag & _euo_flag_bits)

#if _euo_flag(static_implementation)
    #define _euo_attr [[gnu::const, nodiscard, maybe_unused]] static
    #define _euo_symbols(i, T) \
        _euo_define_types(i, T) _euo_define_functions(i, T)
#else
    #define _euo_attr [[gnu::const, nodiscard]]
    #if _euo_flag(implementation)
        #define _euo_symbols(i, T)                               \
            _euo_define_types(i, T) _euo_declare_functions(i, T) \
                _euo_define_functions(i, T)
    #else
        #define _euo_symbols(i, T) \
            _euo_define_types(i, T) _euo_declare_functions(i, T)
    #endif
#endif

#if _euo_flag(short_names)
    #define Err _euo_Err
    #define Opt _euo_Opt
    #define ok _euo_ok
    #define err _euo_err
    #define some _euo_some
    #define none _euo_none
    #define failed _euo_failed
    #define absent _euo_absent
    #define val _euo_val
    #define errcode _euo_errcode
    #if _euo_flag(no_pedantic)
        #define try _euo_try
    #endif
#else
    #define euo_Err _euo_Err
    #define euo_Opt _euo_Opt
    #define euo_ok _euo_ok
    #define euo_err _euo_err
    #define euo_some _euo_some
    #define euo_none _euo_none
    #define euo_failed _euo_failed
    #define euo_absent _euo_absent
    #define euo_val _euo_val
    #define euo_errcode _euo_errcode
    #if _euo_flag(no_pedantic)
        #define euo_try _euo_try
    #endif
#endif

#if _euo_flag(no_pedantic)
    #define _euo_try_arity_n(T, ...) ({                               \
        register auto const _euo_err_union = (__VA_ARGS__);           \
        if (_euo_failed(_euo_err_union))                              \
            return _euo_err_arity_n(T, _euo_errcode(_euo_err_union)); \
        _euo_val(_euo_err_union);                                     \
    })
    #define _euo_try_arity_1(...) _euo_try_arity_n(_euo_Void, __VA_ARGS__)
    #define _euo_try(...) _euo_arity_1_or_n(_euo_try_arity_, __VA_ARGS__)

    #define _euo_void_fields
#else
    #define _euo_void_fields bool _euo_void;
#endif

#if _euo_flag(no_assert) || defined NDEBUG
    #define _euo_assert(ok) ((ok) ? (void)0 : __builtin_unreachable())
#else
    #include <assert.h>
    #define _euo_assert(ok) assert(ok)
#endif
// #endregion

// #region actual code
typedef struct _euo_Void {
    _euo_void_fields
} _euo_Void;

#define _euo_pragma(directive) _Pragma(#directive)
#define _euo_push(_, name) _euo_pragma(push_macro(#name))
#define _euo_pop(_, name) _euo_pragma(pop_macro(#name))

// clang-format off
#define _euo_local_names error_active, value, payload, null_active, optional, \
    null_active, optional, err_union, err_optional, value_field_is_active,    \
    error_field_is_not_active, error_field_is_active

_euo_map(_euo_push, _euo_local_names)

#undef error_active
#undef value
#undef error
#undef payload
#undef null_active
#undef optional
#undef err_union
#undef err_optional
#undef value_field_is_active
#undef error_field_is_not_active
#undef error_field_is_active

_euo_map(_euo_symbols, _euo_types)
_euo_map(_euo_pop, _euo_local_names)
// #endregion
