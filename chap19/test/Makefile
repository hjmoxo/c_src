app.out : a.o b.o main.o
	gcc a.o b.o main.o -o app.out 

a.o : a.c
	gcc -c a.c -o a.o

b.o : b.c
	gcc -c b.c -o b.o

main.o: main.c
	gcc -c main.c -o main.o 

clean: 
	rm -rf *.o app.out