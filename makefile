CC = g++
TARGET = hw08
SRC_FILES = hw08f.cpp hw08.cpp
OBJ_FILES = hw08f.o hw08.o

all: $(TARGET)

$(TARGET): $(OBJ_FILES)
	$(CC) -o $(TARGET) $(OBJ_FILES)

hw08.o: hw08.cpp hw08.h
	$(CC) -c hw08.cpp

hw08f.o: hw08f.cpp hw08.h
	$(CC) -c hw08f.cpp


