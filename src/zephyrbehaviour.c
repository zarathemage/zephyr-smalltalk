#include "zephyrbehaviour.h"

#include <stdlib.h>

ZephyrBehaviourPtr make_zephyr_behaviour(int id, 
					ZephyrBehaviourPtr zb)
{
	zb = (ZephyrBehaviourPtr)malloc(sizeof ZephyrBehaviour);
	zb->b_id = id;

	return zb;
}

void delete_zephyr_behaviour(ZephyrBehaviourPtr zb)
{
	free(zb);
}


