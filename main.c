#include <stdio.h>

int menuProduto();

void menu(int *op)
{
    // exibir menu
    printf("=-=-=-=-=-=MERCADO=-=-=-=-=-=\n");
    printf("(1) Venda\n");
    printf("(2) Produtos\n");
    printf("(3) Clientes\n");
    printf("(4) Sair\n");
    scanf("%d", &*op);
    switch (*op)
    {
    case 1:
        // funcao venda
        break;
    case 2:
        menuProduto();
        break;
    case 3:
        // funcao de clientes
        break;
    case 4:
        break;
    default:
        printf("Essa opcao nao existe\n");
        break;
    }
}

int main()
{
    // criar ponteio de opcao, se opcao for igual a 4, fechar o programa
    int opcao;
    // chamar menu
    do
    {
        menu(&opcao);
    } while (opcao != 4);
}
