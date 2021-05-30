#include "zephyrstructure.h"

#include <stdlib.h>

ZephyrStructurePtr make_zephyr_structure(int x, int ,y ,int w, int h, 
					ZephyrSturecturePtr zs)
{
	zs = (ZephyrStructurePtr)malloc(sizeof ZephyrStructure);

	zs->x = x;
	zs->y = y;
	zs->width = w;
	zs->height = h;

	return zs;
}

void delete_zephyr_structure(ZephyrStructurePtr zs)
{
	free(zs);
}


