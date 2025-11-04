CC = g++
INCLUDE_FILES = Logic/
CFLAGS = -O2 -I $(INCLUDE_FILES)
CFLAGS_STATIC = -O2 -static -I $(INCLUDE_FILES)
INPUT_FILE = All-Calc.cpp
OUTPUT_FILE = -o build/Multi-Calculator

all: dir
	$(CC) $(CFLAGS) $(INPUT_FILE) $(OUTPUT_FILE)

static: dir
	$(CC) $(CFLAGS_STATIC) $(INPUT_FILE) $(OUTPUT_FILE)

dir:
	if [ ! -d "build" ]; then mkdir build; fi
