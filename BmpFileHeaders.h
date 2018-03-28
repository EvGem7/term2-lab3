#ifndef LAB3_BMP_FILE_HEADERS_H
#define LAB3_BMP_FILE_HEADERS_H

typedef struct
 {
   unsigned short   bfType;
   unsigned long	bfSize;
   unsigned short   bfReserved1;
   unsigned short   bfReserved2;
   unsigned long	bfOffBits;
 } BitmapFileHeader;

 typedef struct
 {
	 unsigned long		biSize;
	 long				biWidth;
	 long				biHeight;
	 unsigned short		biPlanes;
	 unsigned short		biBitCount;
	 unsigned long		biCompression;
	 unsigned long		biSizeImage;
	 long				biXPelsPerMeter;
	 long				biYPelsPerMeter;
	 unsigned long		biClrUsed;
	 unsigned long		biClrImportant;
 } BitmapInfoHeader;

#endif // !LAB3_BMP_FILE_HEADERS_H