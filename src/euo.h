#pragma once
// #include <assert.h> // conditionally included

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
    _249, _250, _251, _252, _253, _254, _255, count, ...                       \
) count
#define _euo_arity(...) _euo_arity_inner(                                      \
    __VA_OPT__(, ) __VA_ARGS__, 255, 254, 253, 252, 251, 250, 249, 248, 247,   \
    246, 245, 244, 243, 242, 241, 240, 239, 238, 237, 236, 235, 234, 233, 232, \
    231, 230, 229, 228, 227, 226, 225, 224, 223, 222, 221, 220, 219, 218, 217, \
    216, 215, 214, 213, 212, 211, 210, 209, 208, 207, 206, 205, 204, 203, 202, \
    201, 200, 199, 198, 197, 196, 195, 194, 193, 192, 191, 190, 189, 188, 187, \
    186, 185, 184, 183, 182, 181, 180, 179, 178, 177, 176, 175, 174, 173, 172, \
    171, 170, 169, 168, 167, 166, 165, 164, 163, 162, 161, 160, 159, 158, 157, \
    156, 155, 154, 153, 152, 151, 150, 149, 148, 147, 146, 145, 144, 143, 142, \
    141, 140, 139, 138, 137, 136, 135, 134, 133, 132, 131, 130, 129, 128, 127, \
    126, 125, 124, 123, 122, 121, 120, 119, 118, 117, 116, 115, 114, 113, 112, \
    111, 110, 109, 108, 107, 106, 105, 104, 103, 102, 101, 100, 99, 98, 97,    \
    96, 95, 94, 93, 92, 91, 90, 89, 88, 87, 86, 85, 84, 83, 82, 81, 80, 79,    \
    78, 77, 76, 75, 74, 73, 72, 71, 70, 69, 68, 67, 66, 65, 64, 63, 62, 61,    \
    60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43,    \
    42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25,    \
    24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, \
    4, 3, 2, 1, 0                                                              \
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
#define _euo_val_i(i) _euo_cat(_euo_val_, i)
#define _euo_null_i(i) _euo_cat(_euo_null_, i)
#define _euo_failed_i(i) _euo_cat(_euo_failed_, i)
#define _euo_failed_opt_i(i) _euo_cat(_euo_failed_opt_, i)
#define _euo_absent_i(i) _euo_cat(_euo_absent_, i)
#define _euo_unwrap_err_union_i(i) _euo_cat(_euo_unwrap_err_union_, i)
#define _euo_unwrap_err_union_opt_i(i) _euo_cat(_euo_unwrap_err_union_opt_, i)
#define _euo_unwrap_optional_i(i) _euo_cat(_euo_unwrap_optional_, i)
#define _euo_check_i(i) _euo_cat(_euo_check_, i)
#define _euo_check_opt_i(i) _euo_cat(_euo_check_opt_, i)

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
#define _euo_generic_val(i, T) \
    , T: _euo_val_i(i)
#define _euo_generic_null(i, T) \
    , T: _euo_null_i(i)
#define _euo_generic_failed(i, _)          \
    , _euo_ErrUnion_i(i): _euo_failed_i(i) \
    , _euo_ErrOpt_i(i): _euo_failed_opt_i(i)
#define _euo_generic_absent(i, _) \
    , _euo_Optional_i(i): _euo_absent_i(i)
#define _euo_generic_unwrap_err_union(i, _)          \
    , _euo_ErrUnion_i(i): _euo_unwrap_err_union_i(i) \
    , _euo_ErrOpt_i(i): _euo_unwrap_err_union_opt_i(i)
#define _euo_generic_unwrap_optional(i, _) \
    , _euo_Optional_i(i): _euo_unwrap_optional_i(i)
#define _euo_generic_check(i, _)          \
    , _euo_ErrUnion_i(i): _euo_check_i(i) \
    , _euo_ErrOpt_i(i): _euo_check_opt_i(i)
// clang-format on

#define _euo_arity_short_inner(_0, _1, count, ...) count
#define _euo_arity_short(...) \
    _euo_arity_short_inner(__VA_OPT__(, ) __VA_ARGS__, 1, 0)
#define _euo_arity_call(name, ...) \
    _euo_cat(name, _euo_arity_short(__VA_ARGS__))(__VA_ARGS__)

// clang-format off
#define _euo_Err_arity_1(T) \
    typeof(_Generic((T){} _euo_map(_euo_generic_err_union, _euo_types)))
#define _euo_Err_arity_0() _euo_Err_arity_1(_euo_Void)
#define _euo_Err(...) _euo_arity_call(_euo_Err_arity_, __VA_ARGS__)

#define _euo_Opt_arity_1(T) \
    typeof(_Generic((T){} _euo_map(_euo_generic_optional, _euo_types)))
#define _euo_Opt_arity_0() _euo_Opt_arity_1(_euo_Void)
#define _euo_Opt(...) _euo_arity_call(_euo_Opt_arity_, __VA_ARGS__)

#define _euo_ok_arity_1(value) \
    _Generic((value) _euo_map(_euo_generic_ok, _euo_types))(value)
#define _euo_ok_arity_0() _euo_ok_arity_1((_euo_Void){})
#define _euo_ok(...) _euo_arity_call(_euo_ok_arity_, __VA_ARGS__)

#define _euo_err_arity_1(T) \
    _Generic((T){} _euo_map(_euo_generic_err, _euo_types))
#define _euo_err_arity_0() _euo_err_arity_1(_euo_Void)
#define _euo_err(...) _euo_arity_call(_euo_err_arity_, __VA_ARGS__)

#define _euo_val_arity_1(value) \
    _Generic((value) _euo_map(_euo_generic_val, _euo_types))(value)
#define _euo_val_arity_0() _euo_val_arity_1((_euo_Void){})
#define _euo_val(...) _euo_arity_call(_euo_val_arity_, __VA_ARGS__)

#define _euo_null_arity_1(T) \
    _Generic((T){} _euo_map(_euo_generic_null, _euo_types))()
#define _euo_null_arity_0() _euo_null_arity_1(_euo_Void)
#define _euo_null(...) _euo_arity_call(_euo_null_arity_, __VA_ARGS__)

#define _euo_failed(err_union) \
    _Generic((err_union) _euo_map(_euo_generic_failed, _euo_types))(err_union)
#define _euo_absent(optional) \
    _Generic((optional) _euo_map(_euo_generic_absent, _euo_types))(optional)
#define _euo_unwrap(either)                                 \
    _Generic((either)                                       \
        _euo_map(_euo_generic_unwrap_err_union, _euo_types) \
        _euo_map(_euo_generic_unwrap_optional, _euo_types)  \
    )(either)
#define _euo_check(err_union) \
    _Generic((err_union) _euo_map(_euo_generic_check, _euo_types))(err_union)
// clang-format on
// #endregion

// #region declarations
// clang-format off
#define _euo_declare_err_union(i, T)                      \
    typedef struct [[nodiscard]] _euo_ErrUnion_i(i) {     \
        bool error_active;                                \
        union { T value; _euo_ErrorCode error; } payload; \
    } _euo_ErrUnion_i(i);

#define _euo_declare_optional(i, T)                   \
    typedef struct [[nodiscard]] _euo_Optional_i(i) { \
        bool null_active;                             \
        T value;                                      \
    } _euo_Optional_i(i);

#define _euo_declare_err_union_opt(i, T)                  \
    typedef struct [[nodiscard]] _euo_ErrOpt_i(i) {       \
        bool error_active;                                \
        bool null_active;                                 \
        union { T value; _euo_ErrorCode error; } payload; \
    } _euo_ErrOpt_i(i);
// clang-format on

#define _euo_declare_ok(i, T)                      \
    [[gnu::const, maybe_unused]]                   \
    static inline _euo_ErrUnion_i(i) _euo_ok_i(i)( \
        T const value                              \
    ) {                                            \
        return (_euo_ErrUnion_i(i)){               \
            .error_active = false,                 \
            .payload = { .value = value }          \
        };                                         \
    }

// clang-format off
#define _euo_declare_ok_opt(i, T)                    \
    [[gnu::const, maybe_unused]]                     \
    static inline _euo_ErrOpt_i(i) _euo_ok_opt_i(i)( \
        _euo_Optional_i(i) const optional            \
    ) {                                              \
        return (_euo_ErrOpt_i(i)){                   \
            .error_active = false,                   \
            .null_active = optional.null_active,     \
            .payload = { .value = optional.value }   \
        };                                           \
    }
// clang-format on

#define _euo_declare_err(i)                         \
    [[gnu::const, maybe_unused]]                    \
    static inline _euo_ErrUnion_i(i) _euo_err_i(i)( \
        _euo_ErrorCode const error                  \
    ) {                                             \
        return (_euo_ErrUnion_i(i)){                \
            .error_active = true,                   \
            .payload = { .error = error }           \
        };                                          \
    }

#define _euo_declare_err_opt(i)                       \
    [[gnu::const, maybe_unused]]                      \
    static inline _euo_ErrOpt_i(i) _euo_err_opt_i(i)( \
        _euo_ErrorCode const error                    \
    ) {                                               \
        return (_euo_ErrOpt_i(i)){                    \
            .error_active = true,                     \
            .payload = { .error = error }             \
        };                                            \
    }

#define _euo_declare_val(i, T)                      \
    [[gnu::const, maybe_unused]]                    \
    static inline _euo_Optional_i(i) _euo_val_i(i)( \
        T const value                               \
    ) {                                             \
        return (_euo_Optional_i(i)){                \
            .null_active = false,                   \
            .value = value                          \
        };                                          \
    }

// clang-format off
#define _euo_declare_null(i)                                \
    [[gnu::const, maybe_unused]]                            \
    static inline _euo_Optional_i(i) _euo_null_i(i)() {     \
        return (_euo_Optional_i(i)){ .null_active = true }; \
    }
// clang-format on

#define _euo_declare_failed(i)                                  \
    [[gnu::const, maybe_unused, nodiscard]]                     \
    static inline bool _euo_failed_i(i)(                        \
        _euo_ErrUnion_i(i) const err_union                      \
    ) {                                                         \
        return __builtin_expect(err_union.error_active, false); \
    }

#define _euo_declare_failed_opt(i)                                 \
    [[gnu::const, maybe_unused, nodiscard]]                        \
    static inline bool _euo_failed_opt_i(i)(                       \
        _euo_ErrOpt_i(i) const err_optional                        \
    ) {                                                            \
        return __builtin_expect(err_optional.error_active, false); \
    }

#define _euo_declare_absent(i)                                \
    [[gnu::const, maybe_unused, nodiscard]]                   \
    static inline bool _euo_absent_i(i)(                      \
        _euo_Optional_i(i) const optional                     \
    ) {                                                       \
        return __builtin_expect(optional.null_active, false); \
    }

#define _euo_declare_unwrap_err_union(i, T)                              \
    [[gnu::const, maybe_unused, nodiscard]]                              \
    static inline T _euo_unwrap_err_union_i(i)(                          \
        _euo_ErrUnion_i(i) const err_union                               \
    ) {                                                                  \
        bool const value_field_is_active = !_euo_failed_i(i)(err_union); \
        _euo_assert(value_field_is_active);                              \
        return err_union.payload.value;                                  \
    }

// clang-format off
#define _euo_declare_unwrap_err_union_opt(i, T)                      \
    [[gnu::const, maybe_unused, nodiscard]]                          \
    static inline _euo_Optional_i(i) _euo_unwrap_err_union_opt_i(i)( \
        _euo_ErrOpt_i(i) const err_optional                          \
    ) {                                                              \
        bool const error_field_is_not_active =                       \
            !_euo_failed_opt_i(i)(err_optional);                     \
        _euo_assert(error_field_is_not_active);                      \
        return (_euo_Optional_i(i)){                                 \
            .null_active = err_optional.null_active,                 \
            .value = err_optional.payload.value                      \
        };                                                           \
    }
// clang-format on

#define _euo_declare_unwrap_optional(i, T)                              \
    [[gnu::const, maybe_unused, nodiscard]]                             \
    static inline T _euo_unwrap_optional_i(i)(                          \
        _euo_Optional_i(i) const optional                               \
    ) {                                                                 \
        bool const value_field_is_active = !_euo_absent_i(i)(optional); \
        _euo_assert(value_field_is_active);                             \
        return optional.value;                                          \
    }

#define _euo_declare_check(i)                               \
    [[gnu::const, maybe_unused, nodiscard]]                 \
    static inline _euo_ErrorCode _euo_check_i(i)(           \
        _euo_ErrUnion_i(i) const err_union                  \
    ) {                                                     \
        bool const error_field_is_active =                  \
            __builtin_expect(err_union.error_active, true); \
        _euo_assert(error_field_is_active);                 \
        return err_union.payload.error;                     \
    }

#define _euo_declare_check_opt(i)                              \
    [[gnu::const, maybe_unused, nodiscard]]                    \
    static inline _euo_ErrorCode _euo_check_opt_i(i)(          \
        _euo_ErrOpt_i(i) const err_optional                    \
    ) {                                                        \
        bool const error_field_is_active =                     \
            __builtin_expect(err_optional.error_active, true); \
        _euo_assert(error_field_is_active);                    \
        return err_optional.payload.error;                     \
    }

// clang-format off
#define _euo_declare(i, T)                  \
    _euo_declare_err_union(i, T)            \
    _euo_declare_optional(i, T)             \
    _euo_declare_err_union_opt(i, T)        \
    _euo_declare_ok(i, T)                   \
    _euo_declare_ok_opt(i, T)               \
    _euo_declare_err(i)                     \
    _euo_declare_err_opt(i)                 \
    _euo_declare_val(i, T)                  \
    _euo_declare_null(i)                    \
    _euo_declare_failed(i)                  \
    _euo_declare_failed_opt(i)              \
    _euo_declare_absent(i)                  \
    _euo_declare_unwrap_err_union(i, T)     \
    _euo_declare_unwrap_err_union_opt(i, T) \
    _euo_declare_unwrap_optional(i, T)      \
    _euo_declare_check(i)                   \
    _euo_declare_check_opt(i)
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
    #define _euo_ErrorCode unsigned short
#else
    #define _euo_ErrorCode euo_error_type
#endif

#if !defined euo_flags
    #define euo_flags
#endif

#define _euo_no_short_names 1
#define _euo_no_assert 2
#define _euo_pedantic 4

#define _euo_or(_, flag) | _euo_##flag
#define _euo_flag_bits (0 _euo_map(_euo_or, euo_flags))
#define _euo_flag(flag) (_euo_##flag & _euo_flag_bits)

#if _euo_flag(no_short_names)
    #define euo_Err _euo_Err
    #define euo_Opt _euo_Opt
    #define euo_ok _euo_ok
    #define euo_err _euo_err
    #define euo_val _euo_val
    #define euo_null _euo_null
    #define euo_failed _euo_failed
    #define euo_absent _euo_absent
    #define euo_unwrap _euo_unwrap
    #define euo_check _euo_check
    #if !_euo_flag(pedantic)
        #define euo_try _euo_try
    #endif
#else
    #define Err _euo_Err
    #define Opt _euo_Opt
    #define ok _euo_ok
    #define err _euo_err
    #define val _euo_val
    #define null _euo_null
    #define failed _euo_failed
    #define absent _euo_absent
    #define unwrap _euo_unwrap
    #define check _euo_check
    #if !_euo_flag(pedantic)
        #define try _euo_try
    #endif
#endif

// clang-format off
#if !_euo_flag(pedantic)
    #define _euo_try_arity_1(T) \
        ({                      \
            typedef T _euo_T;   \
            _euo_try_inner
    #define _euo_try_inner(err_union)                                \
            auto const _euo_err_union = (err_union);                 \
            if (_euo_failed(_euo_err_union))                         \
                return _euo_err(_euo_T)(_euo_check(_euo_err_union)); \
            _euo_unwrap(_euo_err_union);                             \
        })
    #define _euo_try_arity_0() _euo_try_arity_1(_euo_Void)
    #define _euo_try(...) _euo_arity_call(_euo_try_arity_, __VA_ARGS__)
#endif
// clang-format on

#if _euo_flag(no_assert) || defined NDEBUG
    #define _euo_assert(ok) ((ok) ? (void)0 : __builtin_unreachable())
#else
    #include <assert.h>
    #define _euo_assert(ok) assert(ok)
#endif
// #endregion

typedef struct _euo_Void {
#if _euo_flag(pedantic)
    bool _;
#endif
} _euo_Void;

_euo_map(_euo_declare, _euo_types)
