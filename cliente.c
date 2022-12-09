#include "loja.h"
#include <math.h>

typedef struct cliente
{
    int codigo_cliente, idade, gastos; //depois alterar o formato do codigo de count para data
    long int CPF;
    char nome[50], telefone[12]
} cliente;


/*---------------------------CLIENTE FUNCTIONS-------------------------*/
void cadastraCliente(void) //cadastrar cliente
{
    int count;
    cliente fulano;
    FILE * fp, *fpr;
    fp = fopen("clientes.txt", "a+b"); //abre o arquivo como log binário

    //INSERIDOS: NOME, CPF, IDADE, TELEFONE
    limpaBuffer();
    puts("NOME:");  //lê os dados
    scanf("%[^\n]s", fulano.nome);
    puts("CPF:");
    do      //necessario validar cpf
    {
        scanf("%ld", &fulano.CPF);
    }while(!validaCPF(fulano.CPF));
    puts("IDADE:");
    scanf("%d", &fulano.idade);
    limpaBuffer();
    puts("TELEFONE:");
    scanf("%[^\n]s", fulano.telefone);


    //AUTOGERADOS: CODIGO_CLIENTE, GASTOS
    if(fpr = fopen("clientes.txt", "rb"))
    {
        fseek(fpr, -sizeof(cliente), SEEK_END);
        fread(&count, sizeof(int), 1, fpr);
        fclose(fpr);
        fulano.codigo_cliente = count++;
    }
    else
    {
        fulano.codigo_cliente = 0;
    }
    fulano.gastos = 0;
    fwrite(&fulano, sizeof(cliente), 1, fp); //escreve no arquivo
    fclose(fp);
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
void menuCliente(void)
{
    int opcao;

    while(opcao != 5)
    {
        puts("(1) CADASTRAR CLIENTE");
        puts("(2) CONSULTAR CLIENTE");
        puts("(3) ALTERAR CLIENTE");
        puts("(4) REMOVER CLIENTE");
        puts("(5) SAIR");
        scanf("%d", &opcao);

        switch(opcao)
        {
            case 1:
                cadastraCliente();
                getchar(); //fazer uma funcao melhor de limpa buffer
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
int validaCPF(long int CPF)
{
    int soma, resto;

    soma = 0;   //verifica digito verificador 1
    for(int i=2; i<=10; i++)
    {
        soma += ((CPF/(long int)pow(10, i))%10)*i;
    }
    resto = (soma * 10)%11;
    resto == 10 ? 0 : resto; //se o resto for 10, considera-se 0
    if(resto != (CPF/10)%10)
    {
        puts("O CPF NAO E VALIDO, DIGITE NOVAMENTE!!");
        return 0;
    }
    
    soma = 0; //verifica digito verificador 2
    for(int i=1; i<=10; i++)
    {  
        soma += ((CPF/(long int)pow(10, i))%10)*(i+1);
    }
    resto = soma * 10 % 11;
    if(resto != CPF%10)
    {
        puts("O CPF NAO E VALIDO, DIGITE NOVAMENTE!!");
        return 0;
    }
    else
        return 1;
}
/*----------------------------------------------------------------------*/