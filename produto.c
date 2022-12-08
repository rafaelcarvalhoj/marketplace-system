#include "loja.h"

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
    FILE *estoque;

    printf("Insira o nome do novo produto: ");
    scanf("%[^\n]s", produtos.nome);
    printf("Insira o valor do novo produto: ");
    scanf("%d", &produtos.preco);
    printf("Insira o estoque do novo produto: ");
    scanf("%d", &produtos.estoque);
    estoque = fopen("estoque.txr", "a+b");
    if(!estoque) //caso haja erro ao abrir o arquivo, exibe a mensagem e fecha o programa.
    {
        fprintf(stderr, "Erro, nao foi possível abrir o arquivo!\n")
        exit(1);
    }
    fwrite(produtos, sizeof(struct produto), listaProdutos, estoque); //por que o contador lista de produtos em fwrite, se vamos escrever um arquivo por vez? o ideal não seria contar para a leitura?




    fclose(estoque);
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
    printf("(3) Alterar produto\n");
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
        menuProduto(&opcao);
    } while (opcao != 4);
    return 0;
}