#ifndef __ZS_VIEW_H_
#define __ZS_VIEW_H_

#include <SDL.h>

typedef struct zs_view {
	SDL_Surface *screen;
} ZSView;	
	
typedef ZSView *ZSViewPtr;

#endif
