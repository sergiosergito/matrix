
typedef struct {
  uint8_t cols: 3;
  uint8_t reserved: 5;
  uint8_t data[7];
} Character;

const Character textChars[] PROGMEM = {
  {7, 0, {0x7c, 0xfe, 0x8e, 0x9a, 0xb2, 0xfe, 0x7c}}, // num 0
  {6, 0, {0x02, 0x42, 0xfe, 0xfe, 0x02, 0x02, 0x00}}, // num 1
  {6, 0, {0x46, 0xce, 0x9a, 0x92, 0xf6, 0x66, 0x00}}, // num 2
  {6, 0, {0x44, 0xc6, 0x92, 0x92, 0xfe, 0x6c, 0x00}}, // num 3
  {7, 0, {0x18, 0x38, 0x68, 0xca, 0xfe, 0xfe, 0x0a}}, // num 4
  {6, 0, {0xe4, 0xe6, 0xa2, 0xa2, 0xbe, 0x9c, 0x00}}, // num 5
  {6, 0, {0x3c, 0x7e, 0xd2, 0x92, 0x9e, 0x0c, 0x00}}, // num 6
  {6, 0, {0xc0, 0xc0, 0x8e, 0x9e, 0xf0, 0xe0, 0x00}}, // num 7
  {6, 0, {0x6c, 0xfe, 0x92, 0x92, 0xfe, 0x6c, 0x00}}, // num 8
  {6, 0, {0x60, 0xf2, 0x92, 0x96, 0xfc, 0x78, 0x00}}, // num 9
  
  {2, 0, {0x66, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00}}, // colon

  {7, 0, {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}}, // space
};
