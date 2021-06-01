#ifndef __ZEPHYR_WINDOW_H_
#define __ZEPHYR_WINDOW_H_

#include <SDL.h>

#include "zephyrstructure.h"
#include "zephyrbehaviour.h"

typedef struct zephyr_window {
  ZephyrStructurePtr zs;
  ZephyrBehaviourPtr zbh;
  SDL_Surface *surface;
} ZephyrWindow;

typedef ZephyrWindow *ZephyrWindowPtr;	

ZephyrWindowPtr make_zephyr_window(int x, int y, int w, int h, ZephyrWindowPtr zw);
void delete_zephyr_window(ZephyrWindowPtr zw);

void move_zehpyr_window(int x, int y, ZephyrWindowPtr zw);

void paint_zephyr_window(SDL_Surface *screen, ZephyrWindowPtr zw);
void draw_on_zephyr_window(int x, int y, SDL_Surface *s, ZephyrWindowPtr zw);

void write_out_zephyr_window(long int offset, ZephyrStructurePtr zs, ZephyrBehaviourPtr zbh, ImageBufPtr buf);

#endif
