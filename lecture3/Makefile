TARGET = main

all: $(TARGET)

clean:
	rm -f $(TARGET)

$(TARGET): %: %.c
	gcc -o $@ $< -Wall

