#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "lista_linear_nao_ordenada_de_bebidas.h"

struct bebida{
    char nome[20];
    int volume;
    float preco;
};

struct lista{
    Bebida no[max];
    int fim;
};

Lista criar_lista(){
    Lista l;    
    l = (Lista) malloc (sizeof(struct lista));
    if( l != NULL){
        (*l).fim = 0;
        return l;
    }
}

int lista_vazia(Lista l){
    if(l->fim == 0){
        return 0;
    }else {
        return -1;
    }
}

int lista_cheia(Lista l){
    if(l->fim == max){
        return 0;
    }else {
        return -1;
    }
}

int insere_elem(Lista l, char *nome, int volume, float preco){

    if(l == NULL || lista_cheia(l) == 0){
        return -1;
    }

    Bebida item;
    strcpy(item.nome, nome);
    item.volume = volume;
    item.preco = preco;        

    l->no[l->fim] = item;
    l->fim++;

    return 0;
}

int remove_elem(Lista l, char *nome){
    if(l == NULL || lista_vazia(l) == 0)
        return -1;

    int i, aux = 0;

    while(aux < l->fim && strcmp(l->no[aux].nome, nome) < 0)
        aux++;

    if(aux == l->fim)
        return -1;

    for(i = aux + 1; i < l->fim; i++){
        l->no[i - 1] = l->no[i];
    }        

    l->fim--;

    return 0;
}

int imprime_lista(Lista l){
    if(l == NULL || lista_vazia(l) == 0){
        return -1;
    }else {       
        for(int i = 0; i < l->fim; i++){
            printf("Nome: %s || Volume: %d ml || Preco: R$ %.2f \n", (*l).no[i].nome, (*l).no[i].volume, (*l).no[i].preco);
        }
        return 0;
    }
}