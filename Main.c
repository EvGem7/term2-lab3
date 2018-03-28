#include "ImageFunctions.h"
#include <stdio.h>

int main(int argc, char** argv) {
	if (argc != 3) {
		puts("Use: \"program name\" \"source image\" \"processed image\"");
		return -1;
	}
	Error error = { NO_ERROR };
	Image sourceImage = readImage(argv[1], error);
	if (error.code != NO_ERROR) {
		puts(error.message);
		return error.code;
	}

	return 0;
}