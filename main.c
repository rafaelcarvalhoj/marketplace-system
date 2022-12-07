#include <stdio.h>

void menu(){
    int op;
    //exibir menu
    printf("=-=-=-=-=-=MERCADO=-=-=-=-=-=\n");
    printf("(1) Venda\n");
    printf("(2) Produtos\n");
    printf("(3) Clientes\n");
    scanf("%d",&op);
    switch (op)
    {
    case 1:
        //funcao venda
        break;
    case 2:
        //funcao de produtos
        break;
    case 3:
        //funcao de clientes
        break;
    default:
        printf("Essa opcao nao existe\n");
        break;
    }
}

int main()
{
    //chamar menu
    do{
        menu();
    }while(1);
}
