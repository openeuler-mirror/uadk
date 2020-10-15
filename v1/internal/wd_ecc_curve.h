/*
 * Copyright 2020 Huawei Technologies Co.,Ltd.All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __WD_ECC_CURVE_H
#define __WD_ECC_CURVE_H

#ifdef __cplusplus
extern "C" {
#endif

/********************* big-endian ************************/
#define X25519_256_PARAM {\
	/* p = (2 ^ 255 - 19) */\
	0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xed,\
	/* a = (486662 - 2) / 4  = 121665 */\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xDB, 0x41,\
	/* b : only for format, no mean */\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
	/* x */\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09,\
	/* y : only for format, no mean */\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
	/* order : only for format, no mean */\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,\
}

/********************* big-endian ************************/
#define X448_448_PARAM {\
	/* p = (2 ^ 448 - 2 ^ 224 - 1) */\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,\
	0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,\
	/* a = (156326 - 2) / 4  = 39081 */\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x98, 0xA9,\
	/* b : only for format, no mean */\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
	/* x */\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05,\
	/* y : only for format, no mean */\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
	/* order : only for format, no mean */\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,\
}

#define SECG_P128_R1_PARAM {\
	/* p */\
	0xFF, 0xFF, 0xFF, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,\
	0xFF, 0xFF, 0xFF, 0xFF,\
	/* a */\
	0xFF, 0xFF, 0xFF, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,\
	0xFF, 0xFF, 0xFF, 0xFC,\
	/* b */\
	0xE8, 0x75, 0x79, 0xC1, 0x10, 0x79, 0xF4, 0x3D, 0xD8, 0x24, 0x99, 0x3C,\
	0x2C, 0xEE, 0x5E, 0xD3,\
	/* x */\
	0x16, 0x1F, 0xF7, 0x52, 0x8B, 0x89, 0x9B, 0x2D, 0x0C, 0x28, 0x60, 0x7C,\
	0xA5, 0x2C, 0x5B, 0x86,\
	/* y */\
	0xcf, 0x5a, 0xc8, 0x39, 0x5b, 0xaf, 0xeb, 0x13, 0xc0, 0x2d, 0xa2, 0x92,\
	0xdd, 0xed, 0x7a, 0x83,\
	/* order */\
	0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x75, 0xA3, 0x0D, 0x1B,\
	0x90, 0x38, 0xA1, 0x15,\
}

#define SECG_P192_K1_PARAM {\
	/* p */\
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,\
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xEE, 0x37,\
	/* a */\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
	/* b */\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,\
	/* x */\
	0xDB, 0x4F, 0xF1, 0x0E, 0xC0, 0x57, 0xE9, 0xAE, 0x26, 0xB0, 0x7D, 0x02,\
	0x80, 0xB7, 0xF4, 0x34, 0x1D, 0xA5, 0xD1, 0xB1, 0xEA, 0xE0, 0x6C, 0x7D,\
	/* y */\
	0x9b, 0x2f, 0x2f, 0x6d, 0x9c, 0x56, 0x28, 0xa7, 0x84, 0x41, 0x63, 0xd0,\
	0x15, 0xbe, 0x86, 0x34, 0x40, 0x82, 0xaa, 0x88, 0xd9, 0x5e, 0x2f, 0x9d,\
	/* order */\
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE,\
	0x26, 0xF2, 0xFC, 0x17, 0x0F, 0x69, 0x46, 0x6A, 0x74, 0xDE, 0xFD, 0x8D\
}

#define SECG_P256_K1_PARAM {\
	/* p */\
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,\
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,\
	0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFC, 0x2F,\
	/* a */\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
	/* b */\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07,\
	/* x */\
	0x79, 0xBE, 0x66, 0x7E, 0xF9, 0xDC, 0xBB, 0xAC, 0x55, 0xA0, 0x62, 0x95,\
	0xCE, 0x87, 0x0B, 0x07, 0x02, 0x9B, 0xFC, 0xDB, 0x2D, 0xCE, 0x28, 0xD9,\
	0x59, 0xF2, 0x81, 0x5B, 0x16, 0xF8, 0x17, 0x98,\
	/* y */\
	0x48, 0x3a, 0xda, 0x77, 0x26, 0xa3, 0xc4, 0x65, 0x5d, 0xa4, 0xfb, 0xfc,\
	0x0e, 0x11, 0x08, 0xa8, 0xfd, 0x17, 0xb4, 0x48, 0xa6, 0x85, 0x54, 0x19,\
	0x9c, 0x47, 0xd0, 0x8f, 0xfb, 0x10, 0xd4, 0xb8,\
	/* order */\
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,\
	0xFF, 0xFF, 0xFF, 0xFE, 0xBA, 0xAE, 0xDC, 0xE6, 0xAF, 0x48, 0xA0, 0x3B,\
	0xBF, 0xD2, 0x5E, 0x8C, 0xD0, 0x36, 0x41, 0x41\
}

#define BRAINPOOL_P320_R1_PARAM {\
	/* p */\
	0xD3, 0x5E, 0x47, 0x20, 0x36, 0xBC, 0x4F, 0xB7, 0xE1, 0x3C, 0x78, 0x5E,\
	0xD2, 0x01, 0xE0, 0x65, 0xF9, 0x8F, 0xCF, 0xA6, 0xF6, 0xF4, 0x0D, 0xEF,\
	0x4F, 0x92, 0xB9, 0xEC, 0x78, 0x93, 0xEC, 0x28, 0xFC, 0xD4, 0x12, 0xB1,\
	0xF1, 0xB3, 0x2E, 0x27,\
	/* a */\
	0x3E, 0xE3, 0x0B, 0x56, 0x8F, 0xBA, 0xB0, 0xF8, 0x83, 0xCC, 0xEB, 0xD4,\
	0x6D, 0x3F, 0x3B, 0xB8, 0xA2, 0xA7, 0x35, 0x13, 0xF5, 0xEB, 0x79, 0xDA,\
	0x66, 0x19, 0x0E, 0xB0, 0x85, 0xFF, 0xA9, 0xF4, 0x92, 0xF3, 0x75, 0xA9,\
	0x7D, 0x86, 0x0E, 0xB4,\
	/* b */\
	0x52, 0x08, 0x83, 0x94, 0x9D, 0xFD, 0xBC, 0x42, 0xD3, 0xAD, 0x19, 0x86,\
	0x40, 0x68, 0x8A, 0x6F, 0xE1, 0x3F, 0x41, 0x34, 0x95, 0x54, 0xB4, 0x9A,\
	0xCC, 0x31, 0xDC, 0xCD, 0x88, 0x45, 0x39, 0x81, 0x6F, 0x5E, 0xB4, 0xAC,\
	0x8F, 0xB1, 0xF1, 0xA6,\
	/* x */\
	0x43, 0xBD, 0x7E, 0x9A, 0xFB, 0x53, 0xD8, 0xB8, 0x52, 0x89, 0xBC, 0xC4,\
	0x8E, 0xE5, 0xBF, 0xE6, 0xF2, 0x01, 0x37, 0xD1, 0x0A, 0x08, 0x7E, 0xB6,\
	0xE7, 0x87, 0x1E, 0x2A, 0x10, 0xA5, 0x99, 0xC7, 0x10, 0xAF, 0x8D, 0x0D,\
	0x39, 0xE2, 0x06, 0x11,\
	/* y */\
	0x14, 0xFD, 0xD0, 0x55, 0x45, 0xEC, 0x1C, 0xC8, 0xAB, 0x40, 0x93, 0x24,\
	0x7F, 0x77, 0x27, 0x5E, 0x07, 0x43, 0xFF, 0xED, 0x11, 0x71, 0x82, 0xEA,\
	0xA9, 0xC7, 0x78, 0x77, 0xAA, 0xAC, 0x6A, 0xC7, 0xD3, 0x52, 0x45, 0xD1,\
	0x69, 0x2E, 0x8E, 0xE1,\
	/* order */\
	0xD3, 0x5E, 0x47, 0x20, 0x36, 0xBC, 0x4F, 0xB7, 0xE1, 0x3C, 0x78, 0x5E,\
	0xD2, 0x01, 0xE0, 0x65, 0xF9, 0x8F, 0xCF, 0xA5, 0xB6, 0x8F, 0x12, 0xA3,\
	0x2D, 0x48, 0x2E, 0xC7, 0xEE, 0x86, 0x58, 0xE9, 0x86, 0x91, 0x55, 0x5B,\
	0x44, 0xC5, 0x93, 0x11\
}

#define BRAINPOOL_P384_R1_PARAM {\
	/* p */\
	0x8C, 0xB9, 0x1E, 0x82, 0xA3, 0x38, 0x6D, 0x28, 0x0F, 0x5D, 0x6F, 0x7E,\
	0x50, 0xE6, 0x41, 0xDF, 0x15, 0x2F, 0x71, 0x09, 0xED, 0x54, 0x56, 0xB4,\
	0x12, 0xB1, 0xDA, 0x19, 0x7F, 0xB7, 0x11, 0x23, 0xAC, 0xD3, 0xA7, 0x29,\
	0x90, 0x1D, 0x1A, 0x71, 0x87, 0x47, 0x00, 0x13, 0x31, 0x07, 0xEC, 0x53,\
	/* a */\
	0x7B, 0xC3, 0x82, 0xC6, 0x3D, 0x8C, 0x15, 0x0C, 0x3C, 0x72, 0x08, 0x0A,\
	0xCE, 0x05, 0xAF, 0xA0, 0xC2, 0xBE, 0xA2, 0x8E, 0x4F, 0xB2, 0x27, 0x87,\
	0x13, 0x91, 0x65, 0xEF, 0xBA, 0x91, 0xF9, 0x0F, 0x8A, 0xA5, 0x81, 0x4A,\
	0x50, 0x3A, 0xD4, 0xEB, 0x04, 0xA8, 0xC7, 0xDD, 0x22, 0xCE, 0x28, 0x26,\
	/* b */\
	0x04, 0xA8, 0xC7, 0xDD, 0x22, 0xCE, 0x28, 0x26, 0x8B, 0x39, 0xB5, 0x54,\
	0x16, 0xF0, 0x44, 0x7C, 0x2F, 0xB7, 0x7D, 0xE1, 0x07, 0xDC, 0xD2, 0xA6,\
	0x2E, 0x88, 0x0E, 0xA5, 0x3E, 0xEB, 0x62, 0xD5, 0x7C, 0xB4, 0x39, 0x02,\
	0x95, 0xDB, 0xC9, 0x94, 0x3A, 0xB7, 0x86, 0x96, 0xFA, 0x50, 0x4C, 0x11,\
	/* x */\
	0x1D, 0x1C, 0x64, 0xF0, 0x68, 0xCF, 0x45, 0xFF, 0xA2, 0xA6, 0x3A, 0x81,\
	0xB7, 0xC1, 0x3F, 0x6B, 0x88, 0x47, 0xA3, 0xE7, 0x7E, 0xF1, 0x4F, 0xE3,\
	0xDB, 0x7F, 0xCA, 0xFE, 0x0C, 0xBD, 0x10, 0xE8, 0xE8, 0x26, 0xE0, 0x34,\
	0x36, 0xD6, 0x46, 0xAA, 0xEF, 0x87, 0xB2, 0xE2, 0x47, 0xD4, 0xAF, 0x1E,\
	/* y */\
	0x8A, 0xBE, 0x1D, 0x75, 0x20, 0xF9, 0xC2, 0xA4, 0x5C, 0xB1, 0xEB, 0x8E,\
	0x95, 0xCF, 0xD5, 0x52, 0x62, 0xB7, 0x0B, 0x29, 0xFE, 0xEC, 0x58, 0x64,\
	0xE1, 0x9C, 0x05, 0x4F, 0xF9, 0x91, 0x29, 0x28, 0x0E, 0x46, 0x46, 0x21,\
	0x77, 0x91, 0x81, 0x11, 0x42, 0x82, 0x03, 0x41, 0x26, 0x3C, 0x53, 0x15,\
	/* order */\
	0x8C, 0xB9, 0x1E, 0x82, 0xA3, 0x38, 0x6D, 0x28, 0x0F, 0x5D, 0x6F, 0x7E,\
	0x50, 0xE6, 0x41, 0xDF, 0x15, 0x2F, 0x71, 0x09, 0xED, 0x54, 0x56, 0xB3,\
	0x1F, 0x16, 0x6E, 0x6C, 0xAC, 0x04, 0x25, 0xA7, 0xCF, 0x3A, 0xB6, 0xAF,\
	0x6B, 0x7F, 0xC3, 0x10, 0x3B, 0x88, 0x32, 0x02, 0xE9, 0x04, 0x65, 0x65\
}

#define NIST_P521_R1_PARAM {\
	/* p */\
	0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,\
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,\
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,\
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,\
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,\
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,\
	/* a */\
	0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,\
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,\
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,\
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,\
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,\
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC,\
	/* b */\
	0x00, 0x51, 0x95, 0x3E, 0xB9, 0x61, 0x8E, 0x1C, 0x9A, 0x1F, 0x92, 0x9A,\
	0x21, 0xA0, 0xB6, 0x85, 0x40, 0xEE, 0xA2, 0xDA, 0x72, 0x5B, 0x99, 0xB3,\
	0x15, 0xF3, 0xB8, 0xB4, 0x89, 0x91, 0x8E, 0xF1, 0x09, 0xE1, 0x56, 0x19,\
	0x39, 0x51, 0xEC, 0x7E, 0x93, 0x7B, 0x16, 0x52, 0xC0, 0xBD, 0x3B, 0xB1,\
	0xBF, 0x07, 0x35, 0x73, 0xDF, 0x88, 0x3D, 0x2C, 0x34, 0xF1, 0xEF, 0x45,\
	0x1F, 0xD4, 0x6B, 0x50, 0x3F, 0x00,\
	/* x */\
	0x00, 0xC6, 0x85, 0x8E, 0x06, 0xB7, 0x04, 0x04, 0xE9, 0xCD, 0x9E, 0x3E,\
	0xCB, 0x66, 0x23, 0x95, 0xB4, 0x42, 0x9C, 0x64, 0x81, 0x39, 0x05, 0x3F,\
	0xB5, 0x21, 0xF8, 0x28, 0xAF, 0x60, 0x6B, 0x4D, 0x3D, 0xBA, 0xA1, 0x4B,\
	0x5E, 0x77, 0xEF, 0xE7, 0x59, 0x28, 0xFE, 0x1D, 0xC1, 0x27, 0xA2, 0xFF,\
	0xA8, 0xDE, 0x33, 0x48, 0xB3, 0xC1, 0x85, 0x6A, 0x42, 0x9B, 0xF9, 0x7E,\
	0x7E, 0x31, 0xC2, 0xE5, 0xBD, 0x66,\
	/* y */\
	0x01, 0x18, 0x39, 0x29, 0x6a, 0x78, 0x9a, 0x3b, 0xc0, 0x04, 0x5c, 0x8a,\
	0x5f, 0xb4, 0x2c, 0x7d, 0x1b, 0xd9, 0x98, 0xf5, 0x44, 0x49, 0x57, 0x9b,\
	0x44, 0x68, 0x17, 0xaf, 0xbd, 0x17, 0x27, 0x3e, 0x66, 0x2c, 0x97, 0xee,\
	0x72, 0x99, 0x5e, 0xf4, 0x26, 0x40, 0xc5, 0x50, 0xb9, 0x01, 0x3f, 0xad,\
	0x07, 0x61, 0x35, 0x3c, 0x70, 0x86, 0xa2, 0x72, 0xc2, 0x40, 0x88, 0xbe,\
	0x94, 0x76, 0x9f, 0xd1, 0x66, 0x50,\
	/* order */\
	0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,\
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,\
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFA, 0x51, 0x86,\
	0x87, 0x83, 0xBF, 0x2F, 0x96, 0x6B, 0x7F, 0xCC, 0x01, 0x48, 0xF7, 0x09,\
	0xA5, 0xD0, 0x3B, 0xB5, 0xC9, 0xB8, 0x89, 0x9C, 0x47, 0xAE, 0xBB, 0x6F,\
	0xB7, 0x1E, 0x91, 0x38, 0x64, 0x09\
}

#define SM2_P256_V1_PARAM {\
	/* p */\
	0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00,\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,\
	/* a */\
	0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00,\
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc,\
	/* b */\
	0x28, 0xe9, 0xfa, 0x9e, 0x9d, 0x9f, 0x5e, 0x34, 0x4d, 0x5a, 0x9e, 0x4b,\
	0xcf, 0x65, 0x09, 0xa7, 0xf3, 0x97, 0x89, 0xf5, 0x15, 0xab, 0x8f, 0x92,\
	0xdd, 0xbc, 0xbd, 0x41, 0x4d, 0x94, 0x0e, 0x93,\
	/* x */\
	0x32, 0xc4, 0xae, 0x2c, 0x1f, 0x19, 0x81, 0x19, 0x5f, 0x99, 0x04, 0x46,\
	0x6a, 0x39, 0xc9, 0x94, 0x8f, 0xe3, 0x0b, 0xbf, 0xf2, 0x66, 0x0b, 0xe1,\
	0x71, 0x5a, 0x45, 0x89, 0x33, 0x4c, 0x74, 0xc7,\
	/* y */\
	0xbc, 0x37, 0x36, 0xa2, 0xf4, 0xf6, 0x77, 0x9c, 0x59, 0xbd, 0xce, 0xe3,\
	0x6b, 0x69, 0x21, 0x53, 0xd0, 0xa9, 0x87, 0x7c, 0xc6, 0x2a, 0x47, 0x40,\
	0x02, 0xdf, 0x32, 0xe5, 0x21, 0x39, 0xf0, 0xa0,\
	/* order */\
	0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,\
	0xff, 0xff, 0xff, 0xff, 0x72, 0x03, 0xdf, 0x6b, 0x21, 0xc6, 0x05, 0x2b,\
	0x53, 0xbb, 0xf4, 0x09, 0x39, 0xd5, 0x41, 0x23,\
}

#ifdef __cplusplus
}
#endif

#endif
