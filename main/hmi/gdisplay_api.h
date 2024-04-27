#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include "stdint.h"

typedef struct gdisplay_api_t {
    void (*draw_pixel)(uint16_t x, uint16_t y, uint16_t color);
    // void (*draw_pixel_unsafe)(uint16_t x, uint16_t y, uint16_t color);
    void (*draw_rect)(uint16_t x, uint16_t y, uint16_t w, uint16_t h, uint16_t color);
    void (*draw_bytes_bitmap)(uint16_t x, uint16_t y, uint16_t w, const uint8_t* bytes, const uint16_t bytes_count);
    void (*fill_black)();
    void (*fill_color)(uint16_t color);
    uint16_t (*get_display_width)();
    uint16_t (*get_display_height)();
} gdisplay_api_t;

#ifdef __cplusplus
}
#endif