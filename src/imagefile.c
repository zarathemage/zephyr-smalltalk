#include <stdlib.h>

#include "imagefile.h"

// ls is WORDSIZE (sizeof WORD)
WORD shift_image_once(int ls, ImageBufPtr image)
{
	// use <<= in spearate method
	return (*(image->(words))-*((image->(words)-ls)--; 
}

WORD* shift_bytes(int ls, int offset, int size, ImageBufPtr image);
{
	return *(image->words)+offset-size - *(image->words)+offset; 
}	
