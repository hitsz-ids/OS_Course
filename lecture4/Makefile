TARGET = badcnt

all: $(TARGET)

clean:
	rm -f $(TARGET) csapp.o

$(TARGET): badcnt.c csapp.o
	gcc -o $@ $^ -Wall

csapp.o: csapp.c
	gcc -c -o $@ $< -Wall
