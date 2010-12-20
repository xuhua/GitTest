#Oct Phone bill Generator makefile
#Author: Alexander Xu

TARGET = Dec
CFLAGS = -Wall

default : Dec

Dec : Dec.c
	gcc $(CFLAGS) -o $(TARGET) $<
clean:
	rm -f $(TARGET) *.o

run : 	${TARGET}
	./${TARGET}

.PHONY: clean