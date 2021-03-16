CC= gcc
FLAGS = -g -Wall 
SOURCES = mainstack.c stack.c
OBJECTS = $(SOURCES:.c=.o)
TARGET = nums.exe

all: $(TARGET)

$(TARGET): $(OBJECTS)
		$(CC) $(SOURCES) -o $(TARGET)

clean:
		del $(TARGET) $(OBJECTS)