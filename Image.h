#ifndef LAB3_IMAGE_H
#define LAB3_IMAGE_H

#include "BmpFileHeaders.h"

typedef struct {
	unsigned char blue;
	unsigned char green;
	unsigned char red;
} Pixel;

typedef struct {
	BitmapFileHeader bitmapFileHeader;
	BitmapInfoHeader bitmapInfoHeader;
	Pixel* raster;
} Image;

#endif // !LAB3_IMAGE_H
