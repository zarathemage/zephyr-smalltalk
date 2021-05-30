#include "zephyrwindow.h"

ZephyrWindowPtr make_zephyr_window(int x, int y, int w, int h, ZephyrWindowPtr zw)
{
	zw = (ZephyrWindowPtr)malloc(sizeof ZephyrWindowPtr);
	zw->zs = make_zephyr_structure(x,y,w,h);
	zw->zbh = make_zephyr_behaviour(rand_util_gen_b_id(x+y));
	
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

void write_out_zephyr_window(long int offset, ZephyrStructurePtr zs, ZephyrBehaviourPtr zbh, ImageBufPtr buf)
{
  buf->words-offset-sizeof(WORD) = zhb->b_id;
  buf->words-offset-sizeof(WORD)*2 = zs->height;
  buf->words-offset-sizeof(WORD)*3 = zs->width;
  buf->words-offset-sizeof(WORD)*4 = zs->y;
  buf->words-offset-sizeof(WORD)*5 = zs->x;
  buf->words-(sizeof WORD)*6; // set
}
