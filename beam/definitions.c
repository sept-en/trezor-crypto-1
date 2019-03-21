#include "definitions.h"

const uint8_t const_raw_G[] = {
    0x98, 0x17, 0xf8, 0x02, 0xc5, 0x56, 0xa0, 0x00, 0x9f, 0x95, 0x8d, 0x02,
    0x38, 0xb7, 0x6c, 0x03, 0xfc, 0x9b, 0x02, 0x03, 0xc1, 0xc2, 0xa1, 0x03,
    0x5c, 0x29, 0x06, 0x02, 0x56, 0xb1, 0xee, 0x02, 0xdc, 0xf9, 0x7e, 0x02,
    0x99, 0x6f, 0x1e, 0x00, 0xb8, 0xd4, 0x10, 0x03, 0xfe, 0x23, 0xf4, 0x01,
    0xc4, 0x99, 0x41, 0x01, 0x15, 0x9a, 0x22, 0x01, 0xb4, 0x17, 0xfd, 0x00,
    0x2a, 0x42, 0x84, 0x03, 0xc0, 0xbf, 0x4f, 0x02, 0x76, 0x95, 0x11, 0x03,
    0xa3, 0x26, 0x77, 0x02, 0xb6, 0x0e, 0x12, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00};

const uint8_t const_raw_J[] = {
    0x31, 0x96, 0xe4, 0x01, 0x84, 0x96, 0x7a, 0x03, 0x3a, 0x7f, 0x68, 0x01,
    0x4b, 0x9e, 0xc3, 0x01, 0x2b, 0xd1, 0x2a, 0x01, 0xc6, 0xa9, 0x46, 0x03,
    0xf9, 0x05, 0x0c, 0x02, 0x13, 0x87, 0x8a, 0x03, 0x0d, 0x2f, 0x0b, 0x02,
    0xd8, 0xc4, 0x1e, 0x00, 0xea, 0x0e, 0x42, 0x02, 0xd2, 0xc7, 0x5b, 0x03,
    0x2d, 0xe5, 0x18, 0x03, 0x77, 0x35, 0xc8, 0x03, 0x3d, 0x1f, 0x01, 0x02,
    0x34, 0x8f, 0x16, 0x03, 0xc8, 0xcd, 0x54, 0x02, 0x37, 0x3a, 0x90, 0x01,
    0x06, 0xd4, 0x32, 0x00, 0x00, 0x02, 0x19, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00};

const uint8_t const_raw_H[] = {
    0x26, 0xb9, 0x20, 0x01, 0x93, 0x5a, 0xe5, 0x00, 0x06, 0x7a, 0xdc, 0x00,
    0xb6, 0xb9, 0x1c, 0x02, 0xb0, 0xbd, 0xa0, 0x00, 0xda, 0x9b, 0xbc, 0x03,
    0xf1, 0x91, 0x26, 0x00, 0x32, 0x52, 0x5e, 0x01, 0x19, 0xbb, 0xca, 0x02,
    0xe2, 0xa9, 0x3a, 0x00, 0xc7, 0xa7, 0xf1, 0x0d, 0xcb, 0x03, 0x75, 0x0e,
    0x6d, 0x63, 0x94, 0x0e, 0x00, 0x7d, 0x48, 0x0e, 0xe4, 0xa4, 0xa2, 0x0c,
    0xaa, 0x35, 0x41, 0x0d, 0x50, 0x08, 0x4f, 0x0e, 0xed, 0xfb, 0x49, 0x0d,
    0xe5, 0xd0, 0x85, 0x0c, 0xd3, 0x86, 0xd3, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00};

secp256k1_gej *get_generator_G(void)
{
  return (secp256k1_gej *)const_raw_G;
}

secp256k1_gej *get_generator_J(void)
{
  return (secp256k1_gej *)const_raw_J;
}

secp256k1_gej *get_generator_H(void)
{
  return (secp256k1_gej *)const_raw_H;
}
