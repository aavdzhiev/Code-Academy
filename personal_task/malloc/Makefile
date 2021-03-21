CC = gcc
FLAGS = -g -Wall 
SOURCES = Main.c mymalloc.c 
OBJECTS = $(SOURCES:.c=.o)
TARGET = malloc.out 

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(SOURCES) -lm -o $(TARGET)

clean:
	rm $(TARGET) $(OBJECTS)