#include "loja.h"

typedef struct cliente
{
    int codigo_cliente, idade, CPF, gastos;
    char nome[50], telefone[11]
}cliente;

void menuCliente()
{
    int opcao;
    puts("1 - CADASTRAR CLIENTE");
    puts("2 - ALTERAR CLIENTE");
    puts("3 - REMOVER CLIENTE");
    scanf("%d", &opcao);
}

//cadastrar cliente
void cadastraCliente()
{
    cliente fulano;
    FILE * fp;
    fp = fopen("clientes.txt", a+b)
    /*
    INSERIDOS:
    NOME
    CPF
    IDADE
    TELEFONE

    AUTOGERADOS:
    CODIGO_CLIENTE
    GASTOS
    
    */
    
}
//alterar cliente
void alteraCliente()
{

}
//remover cliente
void removeCliente()
{

}



/*-------------------------ADICTIONAL FUNCTIONS-------------------------*/

/*----------------------------------------------------------------------*/
//menu
//valida CPF