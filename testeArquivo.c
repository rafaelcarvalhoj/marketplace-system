#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *arquivo;
    arquivo = fopen("estoque.txt", "a+");
    int i;
    if (arquivo == NULL){
        printf("Problema ao abrir o arquivo\n");
        exit(1);
    }

    char nome[50];
    scanf("%s", nome);
    fputs(nome, arquivo);
    fclose(arquivo);
    return 0;
}