#include "loja.h"

void mainMenuProduto(int *opcao)
{
    // int op;
    printf("\n=-=-=-=-=Produtos=-=-=-=-=\n");
    printf("(1) Consultar estoque\n");
    printf("(2) Adicionar estoque\n");
    printf("(3) Atualizar valor de produto\n");
    printf("(4) Sair\n");
    scanf("%d", &*opcao);
    switch (*opcao)
    {
    case 1:
        // funcao 1
        // precisa da integracao com o banco de dados
        break;
    case 2:
        // funcao de adicionar estoque
        // adicionar no codigo(quantidade)
        break;
    case 3:
        // funcao 3
        break;
    case 4:
        // sair
        break;
    default:
        printf("Essa opcao nao existe\n\n");
        break;
    }
}

int menuProduto()
{
    int opcao;
    do
    {
        mainMenuProduto(&opcao);
    } while (opcao != 4);
    return 0;
}