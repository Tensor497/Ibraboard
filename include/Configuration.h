#ifndef __CONFIG_H
#define __CONFIG_H

#define NUM_LEDS 1024
#define DATA_PIN D5

const char* ssid = "Ibraboard";  // Enter SSID here
const char* password = "";  //Enter Password here

CRGB leds[NUM_LEDS];
FastLED_NeoMatrix *matrix = new FastLED_NeoMatrix(leds, 32, 32, 1, 1, NEO_MATRIX_TOP);


int mat32x16[512] PROGMEM = {
  512, 543, 544, 575, 576, 607, 608, 639, 640, 671, 672, 703, 704, 735, 736, 767, 1023, 1022, 1021, 1020, 1019, 1018, 1017, 1016, 1015, 1014, 1013, 1012, 1011, 1010, 1009, 1008, 
  513, 542, 545, 574, 577, 606, 609, 638, 641, 670, 673, 702, 705, 734, 737, 766, 992, 993, 994, 995, 996, 997, 998, 999, 1000, 1001, 1002, 1003, 1004, 1005, 1006, 1007, 
  514, 541, 546, 573, 578, 605, 610, 637, 642, 669, 674, 701, 706, 733, 738, 765, 991, 990, 989, 988, 987, 986, 985, 984, 983, 982, 981, 980, 979, 978, 977, 976, 
  515, 540, 547, 572, 579, 604, 611, 636, 643, 668, 675, 700, 707, 732, 739, 764, 960, 961, 962, 963, 964, 965, 966, 967, 968, 969, 970, 971, 972, 973, 974, 975, 
  516, 539, 548, 571, 580, 603, 612, 635, 644, 667, 676, 699, 708, 731, 740, 763, 959, 958, 957, 956, 955, 954, 953, 952, 951, 950, 949, 948, 947, 946, 945, 944, 
  517, 538, 549, 570, 581, 602, 613, 634, 645, 666, 677, 698, 709, 730, 741, 762, 928, 929, 930, 931, 932, 933, 934, 935, 936, 937, 938, 939, 940, 941, 942, 943, 
  518, 537, 550, 569, 582, 601, 614, 633, 646, 665, 678, 697, 710, 729, 742, 761, 927, 926, 925, 924, 923, 922, 921, 920, 919, 918, 917, 916, 915, 914, 913, 912, 
  519, 536, 551, 568, 583, 600, 615, 632, 647, 664, 679, 696, 711, 728, 743, 760, 896, 897, 898, 899, 900, 901, 902, 903, 904, 905, 906, 907, 908, 909, 910, 911, 
  520, 535, 552, 567, 584, 599, 616, 631, 648, 663, 680, 695, 712, 727, 744, 759, 895, 894, 893, 892, 891, 890, 889, 888, 887, 886, 885, 884, 883, 882, 881, 880, 
  521, 534, 553, 566, 585, 598, 617, 630, 649, 662, 681, 694, 713, 726, 745, 758, 864, 865, 866, 867, 868, 869, 870, 871, 872, 873, 874, 875, 876, 877, 878, 879, 
  522, 533, 554, 565, 586, 597, 618, 629, 650, 661, 682, 693, 714, 725, 746, 757, 863, 862, 861, 860, 859, 858, 857, 856, 855, 854, 853, 852, 851, 850, 849, 848, 
  523, 532, 555, 564, 587, 596, 619, 628, 651, 660, 683, 692, 715, 724, 747, 756, 832, 833, 834, 835, 836, 837, 838, 839, 840, 841, 842, 843, 844, 845, 846, 847, 
  524, 531, 556, 563, 588, 595, 620, 627, 652, 659, 684, 691, 716, 723, 748, 755, 831, 830, 829, 828, 827, 826, 825, 824, 823, 822, 821, 820, 819, 818, 817, 816, 
  525, 530, 557, 562, 589, 594, 621, 626, 653, 658, 685, 690, 717, 722, 749, 754, 800, 801, 802, 803, 804, 805, 806, 807, 808, 809, 810, 811, 812, 813, 814, 815, 
  526, 529, 558, 561, 590, 593, 622, 625, 654, 657, 686, 689, 718, 721, 750, 753, 799, 798, 797, 796, 795, 794, 793, 792, 791, 790, 789, 788, 787, 786, 785, 784, 
  527, 528, 559, 560, 591, 592, 623, 624, 655, 656, 687, 688, 719, 720, 751, 752, 768, 769, 770, 771, 772, 773, 774, 775, 776, 777, 778, 779, 780, 781, 782, 783
};

int mat32x8[256] PROGMEM = {
    504, 503, 488, 487, 472, 471, 456, 455, 440, 439, 424, 423, 408, 407, 392, 391, 376, 375, 360, 359, 344, 343, 328, 327, 312, 311, 296, 295, 280, 279, 264, 263, 
    505, 502, 489, 486, 473, 470, 457, 454, 441, 438, 425, 422, 409, 406, 393, 390, 377, 374, 361, 358, 345, 342, 329, 326, 313, 310, 297, 294, 281, 278, 265, 262, 
    506, 501, 490, 485, 474, 469, 458, 453, 442, 437, 426, 421, 410, 405, 394, 389, 378, 373, 362, 357, 346, 341, 330, 325, 314, 309, 298, 293, 282, 277, 266, 261, 
    507, 500, 491, 484, 475, 468, 459, 452, 443, 436, 427, 420, 411, 404, 395, 388, 379, 372, 363, 356, 347, 340, 331, 324, 315, 308, 299, 292, 283, 276, 267, 260, 
    508, 499, 492, 483, 476, 467, 460, 451, 444, 435, 428, 419, 412, 403, 396, 387, 380, 371, 364, 355, 348, 339, 332, 323, 316, 307, 300, 291, 284, 275, 268, 259, 
    509, 498, 493, 482, 477, 466, 461, 450, 445, 434, 429, 418, 413, 402, 397, 386, 381, 370, 365, 354, 349, 338, 333, 322, 317, 306, 301, 290, 285, 274, 269, 258, 
    510, 497, 494, 481, 478, 465, 462, 449, 446, 433, 430, 417, 414, 401, 398, 385, 382, 369, 366, 353, 350, 337, 334, 321, 318, 305, 302, 289, 286, 273, 270, 257, 
    511, 496, 495, 480, 479, 464, 463, 448, 447, 432, 431, 416, 415, 400, 399, 384, 383, 368, 367, 352, 351, 336, 335, 320, 319, 304, 303, 288, 287, 272, 271, 256
};

int mat32x8_2[256] PROGMEM = {
    0, 15, 16, 31, 32, 47, 48, 63, 64, 79, 80, 95, 96, 111, 112, 127, 128, 143, 144, 159, 160, 175, 176, 191, 192, 207, 208, 223, 224, 239, 240, 255,
    1, 14, 17, 30, 33, 46, 49, 62, 65, 78, 81, 94, 97, 110, 113, 126, 129, 142, 145, 158, 161, 174, 177, 190, 193, 206, 209, 222, 225, 238, 241, 254,
    2, 13, 18, 29, 34, 45, 50, 61, 66, 77, 82, 93, 98, 109, 114, 125, 130, 141, 146, 157, 162, 173, 178, 189, 194, 205, 210, 221, 226, 237, 242, 253,
    3, 12, 19, 28, 35, 44, 51, 60, 67, 76, 83, 92, 99, 108, 115, 124, 131, 140, 147, 156, 163, 172, 179, 188, 195, 204, 211, 220, 227, 236, 243, 252,
    4, 11, 20, 27, 36, 43, 52, 59, 68, 75, 84, 91, 100, 107, 116, 123, 132, 139, 148, 155, 164, 171, 180, 187, 196, 203, 212, 219, 228, 235, 244, 251,
    5, 10, 21, 26, 37, 42, 53, 58, 69, 74, 85, 90, 101, 106, 117, 122, 133, 138, 149, 154, 165, 170, 181, 186, 197, 202, 213, 218, 229, 234, 245, 250,
    6, 9, 22, 25, 38, 41, 54, 57, 70, 73, 86, 89, 102, 105, 118, 121, 134, 137, 150, 153, 166, 169, 182, 185, 198, 201, 214, 217, 230, 233, 246, 249,
    7, 8, 23, 24, 39, 40, 55, 56, 71, 72, 87, 88, 103, 104, 119, 120, 135, 136, 151, 152, 167, 168, 183, 184, 199, 200, 215, 216, 231, 232, 247, 248
};

int remap(int x) {
  if (x < 512) {  
    return mat32x16[x];
  } else if (x >= 512 && x < 768) {
     return mat32x8[x - 512];
  } else {
     return mat32x8_2[x - 768];
  }
}

uint16_t remapXY(uint16_t x, uint16_t y) {
  return remap(32 * y + x);
}

#endif
