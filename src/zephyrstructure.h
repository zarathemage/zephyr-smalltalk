#ifndef __ZEPHYR_WINDOW_H_
#define __ZEPHYR_WINDOW_H_

// (offset) in the image
typedef struct zephyr_structure {
	int x,y,width,height;
} ZephyrStructure;

typedef ZephyrStructure *ZephyrStructurePtr;	

ZephyrStructurePtr make_zephyr_structure(int x, int ,y ,int w, int h, 
					ZephyrSturecturePtr zs);

void delete_zephyr_structure(ZephyrStructurePtr zs);

#endif
