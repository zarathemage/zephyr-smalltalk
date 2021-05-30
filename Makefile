CC=cc

CFLAGS=

LIBS=

OBJS = imagefile.o \

all: src/main.o $(OBJS)
	$(CC) -o zephyr main.o $(OBJS)

.cc.o:
	$(CC) -c $<
