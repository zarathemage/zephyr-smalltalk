#ifndef __IMAGE_BUFFER_H_
#define __IMAGE_BUFFER_H_

#include "image_types.h"

typedef struct imagebuf {
	char *filename;
	long int length;
	WORD *words; // read in backwards (le)
} ImageBuf;

typedef ImageBuf *ImageBufPtr;

#endif
