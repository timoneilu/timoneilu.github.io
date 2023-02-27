#our first makefile
hello: hello.o main.o
	g++ -g -o hello hello.o main.o
hello.o: hello.C hello.h
	g++ -g -c hello.C
main.o: main.C hello.h
	g++ -g -c main.C
clean:
	rm -f hello main.o hello.o

