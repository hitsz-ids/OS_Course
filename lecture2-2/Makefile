TARGET1 = hello hello_arg1 hello_arg2
TARGET2 = join pthreads_test

all: $(TARGET1) $(TARGET2)

clean:
	rm -f $(TARGET1) $(TARGET2)

$(TARGET): %: %.c
	gcc -o $@ $< -Wall

$(TARGET2): %: %.c
	gcc -o $@ $< -lm -Wall
