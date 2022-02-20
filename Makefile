all : politesse

politesse.o : politesse.c
	gcc -o politesse.o -c politesse.c

politesse : politesse.o
	gcc -o politesse politesse.o