TARGET = fork1 fork2 fork3 fork4 fork5 wait1 wait2 waitpid execve p1 p2 p3 p4

all: $(TARGET)

clean:
	rm -f $(TARGET)

$(TARGET): %: %.c
	gcc -o $@ $< -Wall

