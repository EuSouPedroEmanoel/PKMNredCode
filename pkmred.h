#ifndef PKMRED_H_DEFINED
#define PKMRED_H_DEFINED
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#pragma region  //variaveis globais
    char nome[11];
#pragma endregion
#pragma region // Funções de auxilio
    void clear() {
        getchar();
        system("clear");
    }
#pragma endregion

void open();
void professorOpen();
void querContinuar();

void open(void)
{
    int save = 0;
    switch (save)
    {
    case 0: 
        professorOpen();
        break;
    default:
        querContinuar();
    break;
        }
}

void professorOpen() {
    system("clear");
    printf("Olá meu camarada!\nSeja bem vindo ao mundo pokemon!!\n");
    clear();
    printf("Meu nome é Carvalho,\nMas as pessoas me chamam de PROFESSOR POKEMON!!\n");
    clear();
    printf("Esse mundo é habitado por criaturas INCRIVEIS!!\n");
    clear();
    printf("Para algumas pessoas, pokemons são pets,\nJá outras os usam em batalhas\n");
    clear();
    printf("Já para pessoas como eu,\nGostam do estudo dos pokemons, como uma profissão!\n");
    clear();
    printf("Primeiro, qual é seu nome?\n");
    
    for(;;){
    int concluir = 0;

    scanf("%10s", nome);
    printf("Seu nome é: %s?\n(1) SIM\n(2) NÃO\n", nome);

    scanf("%d", &concluir);
    if(concluir == 1)
        break;
    else {
        clear();
        printf("qual seu nome?\n");
    }
    }
}

void querContinuar(){

}

#endif