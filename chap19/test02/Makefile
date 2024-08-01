app.out : a.o b.o main.o
	gcc a.o b.o main.o -o app.out 

main.o: main.c
	gcc -c main.c -o main.o 

clean: 
	rm -rf main.o app.out