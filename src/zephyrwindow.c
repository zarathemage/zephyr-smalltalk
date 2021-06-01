#include "zephyrwindow.h"

ZephyrWindowPtr make_zephyr_window(int x, int y, int w, int h, ZephyrWindowPtr zw)
{
	zw = (ZephyrWindowPtr)malloc(sizeof ZephyrWindowPtr);
	zw->zs = make_zephyr_structure(x,y,w,h);
	zw->zbh = make_zephyr_behaviour(rand_util_gen_b_id(x+y));

/* Create a 32-bit surface with the bytes of each pixel in R,G,B,A order,
       as expected by OpenGL for textures */ 
    SDL_Surface *surface;
    Uint32 rmask, gmask, bmask, amask;
    
    /* SDL interprets each pixel as a 32-bit number, so our masks must depend
       on the endianness (byte order) of the machine */ 
#if SDL_BYTEORDER == SDL_BIG_ENDIAN
    rmask = 0xff000000;
    gmask = 0x00ff0000;
    bmask = 0x0000ff00;
    amask = 0x000000ff;
#else
    rmask = 0x000000ff;
    gmask = 0x0000ff00;
    bmask = 0x00ff0000;
    amask = 0xff000000;
#endif

    zw->surface = SDL_CreateRGBSurface(0, zw->zs->width, zw->zs->height, 32,
                                   rmask, gmask, bmask, amask);	
    return zw;
}
	
void delete_zephyr_window(ZephyrWindowPtr zw)
{
	delete_zephyr_structure(zw->zs);
	free(zw);
}

void move_zehpyr_window(int x, int y, ZephyrWindowPtr zw)
{
	zw->zs->x = x;
	zw->zs->y = y;
}

void paint_zephyr_window(SDL_Surface *screen, ZephyrWindowPtr zw)
{

	SDL_Rect rect;
	rect.x = zw->zs->x; 
	rect.y = zw->zs->y; 

	SDL_BlitSurface(zw->surface, 0, screen, rect);
	SDL_Flip(); // NOTE FIXME put in seperate method ?
}

void write_out_zephyr_window(long int offset, ZephyrStructurePtr zs, ZephyrBehaviourPtr zbh, ImageBufPtr buf)
{
  buf->words-offset = zhb->b_id;
  buf->words-offset-sizeof(WORD)*1 = zs->height;
  buf->words-offset-sizeof(WORD)*2 = zs->width;
  buf->words-offset-sizeof(WORD)*3 = zs->y;
  buf->words-offset-sizeof(WORD)*4 = zs->x;
  buf->words-(sizeof WORD)*5; // set
}
