#include <ximage.h>

static uint8_t gradient_grayscale_recoloring_16x16_data[] =
{
    0x00, 0x00, 0x00, 0x00, 0xA0, 0xA0, 0xA0, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 
    0xA0, 0xA0, 0xA0, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 
    0xA0, 0xA0, 0xA0, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 
    0x00, 0x00, 0x00, 0x00, 0xA0, 0xA0, 0xA0, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x09, 0x09, 0x0A, 0xFF, 0x1E, 0x1D, 0x1D, 0xFF, 
    0x31, 0x31, 0x31, 0xFF, 0x44, 0x45, 0x44, 0xFF, 0x59, 0x59, 0x58, 0xFF, 0x6C, 0x6C, 0x6B, 0xFF, 0x7F, 0x7F, 0x7F, 0xFF, 
    0x93, 0x93, 0x93, 0xFF, 0xA7, 0xA6, 0xA7, 0xFF, 0xBA, 0xBA, 0xBB, 0xFF, 0xCE, 0xCE, 0xCE, 0xFF, 0xE1, 0xE1, 0xE2, 0xFF, 
    0xF5, 0xF5, 0xF5, 0xFF, 0x40, 0x40, 0x40, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x0A, 0x0A, 0x0A, 0xFF, 
    0x1E, 0x1E, 0x1E, 0xFF, 0x31, 0x31, 0x31, 0xFF, 0x45, 0x45, 0x44, 0xFF, 0x58, 0x58, 0x58, 0xFF, 0x6C, 0x6C, 0x6C, 0xFF, 
    0x80, 0x7F, 0x7F, 0xFF, 0x93, 0x94, 0x93, 0xFF, 0xA7, 0xA7, 0xA7, 0xFF, 0xBB, 0xBA, 0xBA, 0xFF, 0xCE, 0xCE, 0xCE, 0xFF, 
    0xE1, 0xE2, 0xE2, 0xFF, 0xF5, 0xF5, 0xF5, 0xFF, 0x40, 0x40, 0x40, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0x00, 0x00, 0x00, 0xFF, 
    0x09, 0x0A, 0x09, 0xFF, 0x1D, 0x1D, 0x1D, 0xFF, 0x31, 0x31, 0x31, 0xFF, 0x45, 0x45, 0x45, 0xFF, 0x58, 0x58, 0x59, 0xFF, 
    0x6C, 0x6B, 0x6C, 0xFF, 0x80, 0x80, 0x7F, 0xFF, 0x93, 0x93, 0x94, 0xFF, 0xA7, 0xA7, 0xA7, 0xFF, 0xBB, 0xBB, 0xBA, 0xFF, 
    0xCE, 0xCE, 0xCE, 0xFF, 0xE2, 0xE2, 0xE1, 0xFF, 0xF5, 0xF5, 0xF5, 0xFF, 0x40, 0x40, 0x40, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 
    0x00, 0x00, 0x00, 0xFF, 0x0A, 0x0A, 0x0A, 0xFF, 0x1E, 0x1D, 0x1D, 0xFF, 0x31, 0x31, 0x31, 0xFF, 0x45, 0x45, 0x45, 0xFF, 
    0x59, 0x58, 0x58, 0xFF, 0x6C, 0x6C, 0x6C, 0xFF, 0x7F, 0x7F, 0x7F, 0xFF, 0x93, 0x93, 0x94, 0xFF, 0xA6, 0xA7, 0xA7, 0xFF, 
    0xBA, 0xBB, 0xBA, 0xFF, 0xCE, 0xCE, 0xCE, 0xFF, 0xE2, 0xE2, 0xE2, 0xFF, 0xF5, 0xF5, 0xF5, 0xFF, 0x40, 0x40, 0x40, 0xFF, 
    0xA0, 0xA0, 0xA0, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x0A, 0x0A, 0x0A, 0xFF, 0x1E, 0x1D, 0x1D, 0xFF, 0x31, 0x31, 0x31, 0xFF, 
    0x45, 0x45, 0x45, 0xFF, 0x59, 0x58, 0x58, 0xFF, 0x6C, 0x6C, 0x6C, 0xFF, 0x80, 0x80, 0x7F, 0xFF, 0x93, 0x93, 0x93, 0xFF, 
    0xA7, 0xA7, 0xA7, 0xFF, 0xBB, 0xBB, 0xBA, 0xFF, 0xCE, 0xCE, 0xCE, 0xFF, 0xE2, 0xE2, 0xE2, 0xFF, 0xF5, 0xF6, 0xF5, 0xFF, 
    0x40, 0x40, 0x40, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x40, 0xFF, 0x40, 0x40, 0x40, 0xFF, 0x40, 0x40, 0x40, 0xFF, 
    0x40, 0x40, 0x40, 0xFF, 0x40, 0x40, 0x40, 0xFF, 0x40, 0x40, 0x40, 0xFF, 0x40, 0x40, 0x40, 0xFF, 0x40, 0x40, 0x40, 0xFF, 
    0x40, 0x40, 0x40, 0xFF, 0x40, 0x40, 0x40, 0xFF, 0x40, 0x40, 0x40, 0xFF, 0x40, 0x40, 0x40, 0xFF, 0x40, 0x40, 0x40, 0xFF, 
    0x40, 0x40, 0x40, 0xFF, 0x40, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 0xA8, 0x00, 0x00, 
    0x00, 0xC0, 0x00, 0x00, 0x00, 0xD8, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0xC0, 0x00, 0x00, 0x00, 0xD8, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0xA0, 0xA0, 0xA0, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 
    0xA0, 0xA0, 0xA0, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 
    0xA0, 0xA0, 0xA0, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0x00, 0x00, 0x00, 0x00, 
    0xA0, 0xA0, 0xA0, 0xFF, 0x1A, 0x8A, 0xEF, 0xFF, 0x18, 0x8F, 0xE4, 0xFF, 0x17, 0x97, 0xD3, 0xFF, 0x14, 0xA1, 0xC0, 0xFF, 
    0x12, 0xA9, 0xAE, 0xFF, 0x10, 0xB3, 0x9C, 0xFF, 0x0E, 0xBB, 0x8A, 0xFF, 0x0D, 0xC5, 0x77, 0xFF, 0x0A, 0xCE, 0x65, 0xFF, 
    0x08, 0xD7, 0x53, 0xFF, 0x07, 0xDF, 0x40, 0xFF, 0x05, 0xE9, 0x2D, 0xFF, 0x03, 0xF1, 0x1C, 0xFF, 0x01, 0xFB, 0x0A, 0xFF, 
    0x40, 0x40, 0x40, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0x19, 0x8A, 0xEF, 0xFF, 0x18, 0x8E, 0xE5, 0xFF, 0x17, 0x97, 0xD3, 0xFF, 
    0x15, 0xA0, 0xC0, 0xFF, 0x13, 0xAA, 0xAE, 0xFF, 0x11, 0xB2, 0x9B, 0xFF, 0x0E, 0xBC, 0x8A, 0xFF, 0x0D, 0xC5, 0x77, 0xFF, 
    0x0A, 0xCD, 0x65, 0xFF, 0x08, 0xD7, 0x52, 0xFF, 0x07, 0xE0, 0x41, 0xFF, 0x04, 0xE8, 0x2E, 0xFF, 0x03, 0xF1, 0x1B, 0xFF, 
    0x01, 0xFB, 0x09, 0xFF, 0x40, 0x40, 0x40, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0x19, 0x8A, 0xEF, 0xFF, 0x19, 0x8E, 0xE5, 0xFF, 
    0x16, 0x98, 0xD2, 0xFF, 0x14, 0xA0, 0xC1, 0xFF, 0x12, 0xA9, 0xAE, 0xFF, 0x11, 0xB2, 0x9C, 0xFF, 0x0E, 0xBB, 0x89, 0xFF, 
    0x0C, 0xC5, 0x77, 0xFF, 0x0A, 0xCE, 0x65, 0xFF, 0x09, 0xD6, 0x53, 0xFF, 0x07, 0xDF, 0x40, 0xFF, 0x05, 0xE9, 0x2E, 0xFF, 
    0x03, 0xF2, 0x1C, 0xFF, 0x01, 0xFB, 0x09, 0xFF, 0x40, 0x40, 0x40, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0x1A, 0x8A, 0xEF, 0xFF, 
    0x18, 0x8F, 0xE5, 0xFF, 0x16, 0x98, 0xD2, 0xFF, 0x14, 0xA0, 0xC0, 0xFF, 0x13, 0xA9, 0xAE, 0xFF, 0x11, 0xB2, 0x9B, 0xFF, 
    0x0E, 0xBB, 0x89, 0xFF, 0x0D, 0xC5, 0x77, 0xFF, 0x0A, 0xCE, 0x65, 0xFF, 0x09, 0xD7, 0x53, 0xFF, 0x06, 0xDF, 0x40, 0xFF, 
    0x05, 0xE8, 0x2E, 0xFF, 0x03, 0xF2, 0x1B, 0xFF, 0x01, 0xFA, 0x09, 0xFF, 0x40, 0x40, 0x40, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 
    0x19, 0x89, 0xEF, 0xFF, 0x18, 0x8E, 0xE5, 0xFF, 0x17, 0x97, 0xD3, 0xFF, 0x15, 0xA1, 0xC0, 0xFF, 0x13, 0xA9, 0xAE, 0xFF, 
    0x11, 0xB2, 0x9C, 0xFF, 0x0F, 0xBB, 0x8A, 0xFF, 0x0C, 0xC4, 0x77, 0xFF, 0x0B, 0xCE, 0x65, 0xFF, 0x08, 0xD6, 0x52, 0xFF, 
    0x06, 0xE0, 0x40, 0xFF, 0x05, 0xE8, 0x2E, 0xFF, 0x02, 0xF2, 0x1C, 0xFF, 0x01, 0xFA, 0x09, 0xFF, 0x40, 0x40, 0x40, 0xFF, 
    0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x40, 0xFF, 0x40, 0x40, 0x40, 0xFF, 0x40, 0x40, 0x40, 0xFF, 0x40, 0x40, 0x40, 0xFF, 
    0x40, 0x40, 0x40, 0xFF, 0x40, 0x40, 0x40, 0xFF, 0x40, 0x40, 0x40, 0xFF, 0x40, 0x40, 0x40, 0xFF, 0x40, 0x40, 0x40, 0xFF, 
    0x40, 0x40, 0x40, 0xFF, 0x40, 0x40, 0x40, 0xFF, 0x40, 0x40, 0x40, 0xFF, 0x40, 0x40, 0x40, 0xFF, 0x40, 0x40, 0x40, 0xFF, 
    0x00, 0x00, 0x00, 0x00, 
};

static const ximage image_gradient_grayscale_recoloring_16x16 =
{
    &gradient_grayscale_recoloring_16x16_data[0],
    16, 16,
    64,
    XPixelFormatRGBA32
};
