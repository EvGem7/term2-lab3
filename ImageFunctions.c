#define _CRT_SECURE_NO_WARNINGS
#include "ImageFunctions.h"
#include <stdio.h>
#include <string.h>

Image readImage(const char* fileName, Error error) {
	FILE * imageFile = fopen(fileName, "r");
	if (imageFile == NULL) {
		error.code = FILE_OPEN_ERROR;
		strcpy(error.message, "Cannot open file ");
		strcat(error.message, fileName);
		return;
	}
	Image image = {0};
	int readResult = fread(&image.bitmapFileHeader, sizeof(BitmapFileHeader), 1, imageFile);
	if (readResult != 1) {
		error.code = FILE_READ_ERROR;
		strcpy(error.message, "BitmapFileHeader reading error");
		return;
	}
	if (image.bitmapFileHeader.bfType != 0x4D42) { //0x4D42 - "BM" in hex
		error.code = BMP_FORMAT_ERROR;
		return;
	}
	readResult = fread(&image.bitmapInfoHeader, sizeof(BitmapInfoHeader), 1, imageFile);
	if (readResult != 1) {
		error.code = FILE_READ_ERROR;
		strcpy(error.message, "BitmapInfoHeader reading error");
		return;
	}
	if (image.bitmapInfoHeader.biBitCount != 24) {

	}
}