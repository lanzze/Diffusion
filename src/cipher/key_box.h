//
// Created by Angel on 2017/4/6.
//

#ifndef DIFFUSION_KEY_BOX_H
#define DIFFUSION_KEY_BOX_H
namespace lc{
    namespace key{
        constexpr static const unsigned char S1[256] = {
                0x30, 0xeb, 0x8e, 0x81, 0xff, 0x06, 0xad, 0xaa, 0x99, 0x6d, 0xa7, 0x0b, 0xd7, 0xea, 0x7b, 0x38,
                0xe1, 0x84, 0xf4, 0x6e, 0x0d, 0xc5, 0x14, 0xc3, 0xdc, 0xdf, 0xfd, 0x7d, 0x2e, 0xd3, 0x17, 0xac,
                0xce, 0x6b, 0xfc, 0x0c, 0xf6, 0xaf, 0x86, 0x41, 0xa2, 0xf8, 0xfe, 0xc0, 0x16, 0xd1, 0x11, 0x70,
                0x23, 0x76, 0x3e, 0xa6, 0xf3, 0xdd, 0x5f, 0x7f, 0x62, 0x20, 0x97, 0xa0, 0x1c, 0x91, 0xf0, 0x7c,
                0x8a, 0xb5, 0xee, 0x2c, 0x47, 0x94, 0x1a, 0xe0, 0x6f, 0xfa, 0xec, 0x9e, 0x40, 0x25, 0x32, 0x5e,
                0x49, 0x7e, 0x67, 0x98, 0xfb, 0x4b, 0x5d, 0xc9, 0x3c, 0x63, 0x8d, 0x51, 0x74, 0x10, 0x09, 0x79,
                0x01, 0xf7, 0x2f, 0x18, 0x92, 0xb6, 0x0a, 0x8f, 0xdb, 0x9f, 0xb3, 0x77, 0x22, 0xd8, 0x1b, 0x9c,
                0x78, 0x89, 0xae, 0xd0, 0x56, 0xb1, 0xc2, 0x57, 0x00, 0x1d, 0xc6, 0xe9, 0x9d, 0x24, 0xbe, 0x72,
                0x13, 0x27, 0xd9, 0x3f, 0xd4, 0x83, 0x1f, 0x82, 0x5c, 0x39, 0xcf, 0x96, 0x61, 0x5a, 0x2b, 0xb7,
                0x71, 0xb4, 0xf1, 0xba, 0xca, 0x4d, 0x29, 0xb8, 0xbc, 0x42, 0x34, 0x54, 0x6c, 0xed, 0x4e, 0x69,
                0x75, 0x9b, 0x80, 0xb9, 0x8b, 0xbf, 0x07, 0xef, 0x73, 0xe2, 0x50, 0x6a, 0x45, 0xa9, 0x28, 0x7a,
                0xcc, 0x90, 0x4f, 0x05, 0x52, 0x48, 0x59, 0xab, 0x0e, 0xe7, 0x35, 0xd2, 0xbb, 0x36, 0x03, 0xf9,
                0xe4, 0x08, 0xb0, 0x95, 0x4a, 0x31, 0x64, 0xa8, 0xa4, 0x68, 0xf2, 0x4c, 0xda, 0x04, 0xcd, 0x58,
                0x44, 0x5b, 0x3b, 0x37, 0xc7, 0xc8, 0x9a, 0x3a, 0xc1, 0xe8, 0xf5, 0x21, 0x19, 0x65, 0xcb, 0xe5,
                0x26, 0xa3, 0xb2, 0x2a, 0x93, 0x12, 0xbd, 0x3d, 0x87, 0x88, 0xd5, 0x46, 0x8c, 0xa1, 0xe3, 0x1e,
                0x60, 0xde, 0x02, 0xe6, 0x33, 0x85, 0x15, 0x0f, 0x43, 0x2d, 0x53, 0x55, 0xa5, 0xd6, 0xc4, 0x66,
        };

        constexpr static const unsigned char S2[256] = {
                0x1b, 0x72, 0xf0, 0x64, 0x91, 0x94, 0x65, 0x53, 0x95, 0x0f, 0x70, 0xaa, 0xd2, 0x90, 0xcc, 0xb9,
                0xeb, 0x02, 0xd4, 0x36, 0xa4, 0x00, 0x28, 0x0d, 0x20, 0x18, 0xea, 0xa7, 0xd5, 0xa8, 0x2a, 0x98,
                0xec, 0xc9, 0x32, 0x44, 0x8f, 0x63, 0xac, 0x6e, 0xfb, 0xd8, 0x60, 0x39, 0x19, 0xfe, 0xb4, 0xc5,
                0xda, 0x87, 0x99, 0x89, 0xf8, 0xf5, 0x59, 0xdc, 0x0c, 0xe3, 0x6f, 0xe5, 0x75, 0x8b, 0xe6, 0x5c,
                0x5f, 0x17, 0xd0, 0x7b, 0xee, 0x52, 0x3f, 0x4e, 0xde, 0x34, 0xaf, 0x56, 0xe8, 0xca, 0x92, 0x03,
                0x04, 0xa1, 0x4d, 0x29, 0xb3, 0x58, 0x5d, 0xc2, 0x78, 0x26, 0x4f, 0xd6, 0x3a, 0xe7, 0xdd, 0xae,
                0x47, 0xd1, 0x7c, 0x2e, 0xcd, 0xfd, 0x77, 0xf7, 0x81, 0xa5, 0x3d, 0x6b, 0x5e, 0x14, 0xed, 0xe1,
                0xa0, 0xb8, 0x9a, 0xad, 0x3b, 0x0a, 0x01, 0x46, 0xbc, 0x3e, 0x50, 0xf6, 0x96, 0x08, 0x25, 0x4a,
                0x09, 0x7a, 0xce, 0x23, 0xd7, 0xf1, 0x38, 0xf3, 0xc7, 0xb7, 0x6a, 0x15, 0x9c, 0x73, 0xa6, 0x37,
                0x51, 0x33, 0xfc, 0xf2, 0x43, 0xa3, 0xd9, 0x30, 0x8a, 0x49, 0x55, 0x76, 0x54, 0xba, 0x68, 0x8d,
                0x2d, 0x0b, 0x9d, 0x66, 0x11, 0x61, 0x13, 0x9b, 0xab, 0xc6, 0x31, 0x1c, 0x1d, 0x24, 0x69, 0x80,
                0x93, 0x05, 0xb0, 0xa2, 0x83, 0xb5, 0x27, 0xc4, 0x8e, 0x42, 0x48, 0x86, 0x0e, 0x9f, 0xd3, 0xe0,
                0xef, 0x40, 0xbe, 0x07, 0xdb, 0x71, 0x4c, 0x67, 0x7d, 0x06, 0x6d, 0xcb, 0x82, 0x2b, 0x2c, 0x62,
                0x85, 0x97, 0xff, 0xbb, 0x41, 0x1a, 0xbd, 0x5b, 0xc8, 0xc1, 0xbf, 0x57, 0x45, 0xe2, 0x12, 0xc3,
                0x2f, 0x84, 0x6c, 0x9e, 0x1e, 0xb1, 0x35, 0xfa, 0xf9, 0x79, 0xcf, 0xe4, 0xa9, 0xb6, 0xf4, 0x7e,
                0x22, 0x16, 0x8c, 0x7f, 0x10, 0x4b, 0x21, 0x74, 0x5a, 0xb2, 0x88, 0x1f, 0xc0, 0x3c, 0xdf, 0xe9,
        };
    }
}
#endif //DIFFUSION_KEY_BOX_H
