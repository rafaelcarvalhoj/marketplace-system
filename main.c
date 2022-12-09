#include "loja.h"

int main()
{
    int opcao;

    do
    {
        menu(&opcao);
    } while (opcao != 4);
}

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
        // menuProduto(); 
        break;
    case 3:
        // funcao de clientes
        menuCliente();
        break;
    case 4:
        break;
    default:
        printf("Essa opcao nao existe\n");
        break;
    }
}

void limpaBuffer(void)
{
    char c;
    while((c = getchar()) != '\n' && c != EOF);
}
