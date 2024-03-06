CC= clang 
CFLAGS= -Wall
TARGET = p1
LIBS =-lm

$(TARGET): main.o functii.o
	$(CC) $(CFLAGS) main.o functii.o $(LIBS) -o $(TARGET)

main.o: main.c functii.h
	$(CC) -c -Wall main.c

functii.o: functii.c functii.h
	$(CC) -c -Wall functii.c

.PHONY: clean
clean:
	rm -f *.o
	rm $(TARGET)
