#include "zephyr_window.h"

ZephyrWindowPtr make_zephyr_window(int x, int y, int w, int h, ZephyrWindowPtr zw)
{
	zw = (ZephyrWindowPtr)malloc(sizeof ZephyrWindowPtr);
	zw->zs = make_zephyr_structure(x,y,w,h);

	return zw;
}
	
void delete_zephyr_window(ZephyrWindowPtr zw)
{
	delete_zephyr_structure(zw->zs);
	free(zw);
}

void move_zehpyr_window(int x, int y, ZephyrWindowPtr zw)
{
	zw->zs->x = x;
	zw->zs->y = y;
}


