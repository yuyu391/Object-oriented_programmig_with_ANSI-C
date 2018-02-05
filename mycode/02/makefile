CC=gcc
STD=-std=c89
WALL=-Wall -g
SrcFiles=$(wildcard *.c)
#DestFiles=$(patsubst %.c,%.o,$(SrcFiles))
Tag=excute

all:$(Tag)

$(Tag):$(SrcFiles)
	$(CC) $(STD) $(WALL) $^ -o $@

clean:
	-rm $(Tag)

test:
	-@echo $(SrcFiles)
	-@echo $(Tag)

.PHONY:all clean test
