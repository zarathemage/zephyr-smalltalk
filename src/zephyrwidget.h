#ifndef __ZEPHYR_WIDGET_H_
#define __ZEPHYR_WIDGET_H_

/*
 * a pseudo smalltalk Morph class
 */
#include "zephyrstructure.h"
#include "zephyrbehaviour.h"

typedef struct zephyr_widget {
  ZephyrStructurePtr zs;
  ZephyrBehaviourPtr zbh;
} ZephyrWidget;

typedef ZephyrWidget *ZephyrWidgetPtr;	

ZephyrWidgetPtr make_zephyr_widget(int x, int y, int w, int h, ZephyrWidgetPtr zw);
void delete_zephyr_widget(ZephyrWidgetPtr zw);

void move_zehpyr_widget(int x, int y, ZephyrWidgetPtr zw);

void write_out_zephyr_widget(long int offset, ZephyrStructurePtr zs, ZephyrBehaviourPtr zbh, ImageBufPtr buf);

#endif
