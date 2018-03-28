#ifndef LAB3_ERROR_H
#define LAB3_ERROR_H

typedef enum {
	NO_ERROR, FILE_OPEN_ERROR, FILE_READ_ERROR, BMP_FORMAT_ERROR, I
} ErrorCode;

typedef struct {
	ErrorCode code;
	char message[256];
} Error;

#endif // !ERROR_H
