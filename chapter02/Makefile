
IFLAGS = -I../utils
OUT = ./out

all: insertsort mergesort

include ../utils/utils.mk

insertsort: insert_sort.c utils.o
	$(CC) -o $(OUT)/insert_sort insert_sort.c utils.o $(IFLAGS)

mergesort: merge_sort.c utils.o
	$(CC) -o $(OUT)/merge_sort merge_sort.c utils.o $(IFLAGS)

clean:
	rm $(OUT)/* utils.o 
