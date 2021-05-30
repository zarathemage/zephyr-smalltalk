#include <stdio.h>
#include <SDL.h>

#include "zs_.h"
#include "zscontroller.h"

int main(int argc, char *argv[])
{

	SDL_Init(SDL_INIT_EVERYTHING);	

	ZSController c;

	c.view = (ZSViewPtr)malloc(sizeof ZSView);
	c.view->screen = SDL_SetVideoMode(SCREEN_WIDTH, SCREEN_HEIGHT, 32, SDL_HWSURFACE); 

	smalltalk_loop(&zsc);

	return 0;
}
