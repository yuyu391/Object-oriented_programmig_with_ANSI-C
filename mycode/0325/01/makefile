CC=gcc
STD=-std=c89
WALL=-Wall -g
LIB=

Target=main
Depend=main.c Set.c

all:$(Target)

$(Target):$(Depend)
	$(CC) $(STD) $(WALL) $^ -o $@ $(LIB)

clean:
	-rm $(Target)

test:
	-@echo $(Target)
	-@echo $(Depend)

.PHONY:all clean test
