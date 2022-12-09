#include "loja.h"
#include <math.h>

typedef struct cliente
{
    int codigo_cliente, idade, CPF, gastos;
    char nome[50], telefone[12]
}cliente;


/*---------------------------CLIENTE FUNCTIONS-------------------------*/
void cadastraCliente() //cadastrar cliente
{
    cliente fulano;
    FILE * fp;
    fp = fopen("clientes.txt", a+b); //abre o arquivo como log binário
    puts("NOME:");  //lê os dados
    scanf("%[^\n]s", fulano.nome);

    puts("CPF:");
    //necessario validar cpf
    do
    {
        scanf("%d", &fulano.CPF);
    }while(while(!validaCPF(fulano.CPF));
    
    puts("IDADE:");
    scanf("%d", &fulano.idade);
    puts("TELEFONE:");
    scanf("%[^\n]s", fulano.telefone);

    fwrite(&fulano, sizeof(cliente), 1, fp); //escreve no arquivo

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

void consultaCliente()
{

}

//alterar cliente
void alteraCliente()
{

}
//remover cliente
void removeCliente()
{

}
/*----------------------------------------------------------------------*/


/*-------------------------ADICTIONAL FUNCTIONS-------------------------*/
void menuCliente()
{
    int opcao;

    while(opcao != 5)
    {
        puts("1 - CADASTRAR CLIENTE");
        puts("2 - CONSULTAR CLIENTE");
        puts("3 - ALTERAR CLIENTE");
        puts("4 - REMOVER CLIENTE");
        puts("5 - SAIR");
        scanf("%d", &opcao);

        switch(opcao)
        {
            case 1:
                cadastraCliente();
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            default:
                puts("INVALIDO");
                break;
        }
    }
}
int validaCPF(int CPF)
{
    int soma = 0;
    for(int i=2; i<=10; i++)
    {
        soma += ((CPF/pow(10, 2))%10) * i;
    }
}
/*----------------------------------------------------------------------*/