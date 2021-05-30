#include "zscontroller.h"

#include <SDL.h>

int smalltalk_boot(ZSControllerPtr zsc)
{
	return smalltalk_loop(zsc);
	return 0;
}

int smalltalk_loop(ZSControllerPtr zsc) {
	SDL_Event e;
	int mousex, mousey, mousetype = 0;

        while (SDL_WaitEvent(&e)) {
        
                if (e.key.keysym.sym == SDLK_ESCAPE) {
                        return 0;       
                }       

		SDL_GetMouseState(&mousex, &mousey);
		if (e.type == SDL_MOUSEBUTTONDOWN) {
               		if (e.button.button == SDL_BUTTON_LEFT) 
				mousetype &= 0x96;
               		else if (e.button.button == SDL_BUTTON_RIGHT) 
				mousetype &= 0x96 + 0x9600;
               		else if (e.button.button == SDL_BUTTON_RIGHT) 
				mousetype &= 0x96 + 0x960000;
			else
				mousetype = 0;
		}

		zsc.update(mousex,mousey, mousetype);
                zsc.drawOn(zsc->view);

       		SDL_Flip(zsc->view->screen); 
        } 	

	return 0;
}
	
