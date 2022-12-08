#include "loja.h"

FILE *estoque;

typedef struct produto
{
    char nome[20];
    int estoque, preco, validade[3];
} produto;
produto produtos;
int listaProdutos = 0;

void consultarEstoque()
{
}


void adicionarEstoque()
{
    printf("Insira o nome do novo produto: ");
    scanf("%s", produtos.nome);
    printf("Insira o valor do novo produto: ");
    scanf("%d", &produtos.preco);
    printf("Insira o estoque do novo produto: ");
    scanf("%d", &produtos.estoque);
    estoque = fopen("estoque.txr", "w");
    fwrite(produtos, sizeof(struct produto), listaProdutos, estoque);
}


void atualizarValor()
{
}


void mainMenuProduto(int *opcao)
{
    // int op;
    printf("\n=-=-=-=-=Produtos=-=-=-=-=\n");
    printf("(1) Consultar estoque\n");
    printf("(2) Adicionar produtos ao estoque\n");
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