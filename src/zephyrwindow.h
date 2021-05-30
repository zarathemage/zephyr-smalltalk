#ifndef __ZEPHYR_WINDOW_H_
#define __ZEPHYR_WINDOW_H_

#include "zephyrwindow.h"

typedef struct zephyr_window {
	ZephyrStructurePtr zs;
} ZephyrWindow;

typedef ZephyrWindow *ZephyrWindowPtr;	

ZephyrWindowPtr make_zephyr_window(int x, int y, int w, int h, ZephyrWindowPtr zw);
void delete_zephyr_window(ZephyrWindowPtr zw);

void move_zehpyr_window(int x, int y, ZephyrWindowPtr zw);

//write_out_zephyr_window(long int offset);

#endif
