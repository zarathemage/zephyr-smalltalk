#ifndef __ZS_CONTROLLER_H_
#define __ZS_CONTROLLER_H_

#include "zsview.h"
#include "zsmodel.h"

typedef struct zs_controller {
	ZSModelPtr smalltalk;
	ZSViewPtr view;
} ZSController;

typedef ZSController *ZSControllerPtr;

int smalltalk_boot(ZSControllerPtr zsc);
int smalltalk_loop(ZSControllerPtr zsc);

#endif
