#ifndef __ZEPHYR_WINDOW_H_
#define __ZEPHYR_WINDOW_H_

#include "zephyrstructure.h"
#include "zephyrbehaviour.h"

typedef struct zephyr_window {
  ZephyrStructurePtr zs;
  ZephyrBehaviourPtr zbh;
} ZephyrWindow;

typedef ZephyrWindow *ZephyrWindowPtr;	

ZephyrWindowPtr make_zephyr_window(int x, int y, int w, int h, ZephyrWindowPtr zw);
void delete_zephyr_window(ZephyrWindowPtr zw);

void move_zehpyr_window(int x, int y, ZephyrWindowPtr zw);

void write_out_zephyr_window(long int offset, ZephyrStructurePtr zs, ZephyrBehaviourPtr zbh, ImageBufPtr buf);

#endif
