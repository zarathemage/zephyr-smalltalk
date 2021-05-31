#include "zephyrwindow.h"

ZephyrWidgetPtr make_zephyr_widget(int x, int y, int w, int h, ZephyrWidgetPtr zw)
{
	zw = (ZephyrWidgetPtr)malloc(sizeof ZephyrWidgetPtr);
	zw->zs = make_zephyr_structure(x,y,w,h);
	zw->zbh = make_zephyr_behaviour(rand_util_gen_b_id(x+y));
	
	return zw;
}
	
void delete_zephyr_widget(ZephyrWidgetPtr zw)
{
	delete_zephyr_structure(zw->zs);
	free(zw);
}

void move_zehpyr_widget(int x, int y, ZephyrWidgetPtr zw)
{
	zw->zs->x = x;
	zw->zs->y = y;
}

void write_out_zephyr_widget(long int offset, ZephyrStructurePtr zs, ZephyrBehaviourPtr zbh, ImageBufPtr buf)
{
  buf->words-offset = zhb->b_id;
  buf->words-offset-sizeof(WORD)*1 = zs->height;
  buf->words-offset-sizeof(WORD)*2 = zs->width;
  buf->words-offset-sizeof(WORD)*3 = zs->y;
  buf->words-offset-sizeof(WORD)*4 = zs->x;
  buf->words-(sizeof WORD)*5; // set
}
