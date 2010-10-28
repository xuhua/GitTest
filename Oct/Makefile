#Oct Phone bill Generator makefile
#Author: Alexander Xu

TARGET = Oct
CFLAGS = -Wall

default : Oct

Oct : Oct.c
	gcc $(CFLAGS) -o $(TARGET) $<
clean:
	rm -f $(TARGET) *.o

run : 	${TARGET}
	./${TARGET}

.PHONY: clean