ABC.exe:main.o biggest2.o factorial.o biggest3.o 
	gcc -o ABC.exe main.o biggest2.o factorial.o biggest3.o
main.o:main.c
	gcc -c main.c
biggest2.o:biggest2.c
	gcc -c biggest2.c
factorial.o:factorial.c
	gcc -c factorial.c
biggest3.o:biggest3.c
	gcc -c biggest3.c
