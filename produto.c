#include <stdio.h>

void mainMenuProduto()
{
    int op;
    printf("\n=-=-=-=-=Produtos=-=-=-=-=\n");
    printf("(1) Consultar estoque\n");
    printf("(2) Adicionar estoque\n");
    printf("(3) Sair");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        // funcao 1
        break;
    case 2:
        // funcao 2
        break;
    case 3:
        // sair
        break;
    default:
        printf("Essa opcao nao existe\n");
        break;
    }
}

int menuProduto()
{
    do
    {
        mainMenuProduto();
    } while (1);
    return 0;
}