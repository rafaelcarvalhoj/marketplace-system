#ifndef LOJA_H
#define LOJA_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*------------------------------DATA TYPES------------------------------*/
typedef enum boolean{true, false}boolean;
/*----------------------------------------------------------------------*/

//prototipos funcoes
/*----------------------------MAIN FUNCTIONS----------------------------*/
void menu(int *op);
void limpaBuffer(void); //ESSA FUNCAO SEMPRE SERA USADA ANTES DE LER TEXTOS
/*----------------------------------------------------------------------*/

/*---------------------------CLIENTE FUNCTIONS--------------------------*/
void cadastraCliente(void);
void menuCliente(void);
int validaCPF(long int CPF);
/*----------------------------------------------------------------------*/

/*----------------------------PRODUTO FUNCTIONS-------------------------*/
/*----------------------------------------------------------------------*/

/*-----------------------------VENDA FUNCTIONS--------------------------*/
/*----------------------------------------------------------------------*/

#endif
