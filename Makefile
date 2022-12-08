all:	run

run:	compile
	./exec-sis

compile:	main.c produto_c cliente_c
	gcc -c main.c produto.o 
	gcc main.o cliente.o -o exec-sis

produto_c:
	gcc -c produto.c
cliente_c:
	gcc -c cliente.c
clean:
	rm *.o
	rm exec-sis

