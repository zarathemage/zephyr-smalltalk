#include <stdio.h>
#include <SDL.h>

#include "zs_.h"
#include "zscontroller.h"

int main(int argc, char *argv[])
{

	SDL_Init(SDL_INIT_EVERYTHING);	

	ZSController c;
	ZSView view;

	SDL_Surface *scr = SDL_SetVideoMode(SCREEN_WIDTH, SCREEN_HEIGHT, 32, SDL_HWSURFACE); 
	view->screen = scr; 
	c.view = &view;
	
	smalltalk_loop(&zsc);

	return 0;
}
