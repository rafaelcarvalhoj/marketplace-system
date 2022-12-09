all:	run

run:	compile
	./exec-sis

compile: cliente_o produto_o main_o
	gcc -Wall main.o cliente.o produto.o -lm -o exec-sis

main_o:	main.c loja.h
	gcc -c main.c

produto_o:	loja.h
	gcc -c produto.c

cliente_o: loja.h
	gcc -c cliente.c

clean:
	rm *.o
	rm exec-sis

