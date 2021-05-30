#ifndef __IMAGEFILE_H_
#define __IMAGEFILE_H_

#include "imagebuffer.h"

WORD shift_image_once(int ls, ImageBufPtr image);
WORD *shift_bytes(int offset, int size, ImageBufferPtr image);

#endif
