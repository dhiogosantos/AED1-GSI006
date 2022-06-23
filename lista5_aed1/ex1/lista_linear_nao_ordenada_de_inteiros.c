#include <stdlib.h>
#include <stdio.h>
#include "lista_linear_nao_ordenada_de_inteiros.h"

struct lista{
    int no[max];
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

int insere_elem_final(Lista l, int elem){
    if(l == NULL || lista_cheia(l) == 0){
        return -1;
    }else {
        l->no[l->fim] = elem;
        l->fim++;
        return 0;
    }
}

int remove_elem(Lista l, int elem){
    int i, aux = 0;
    if(l == NULL || lista_vazia(l) == 0){
        return -1;
    } else {
        while(aux < l->fim && l->no[aux] != elem)
        aux++;
        if(aux == l->fim){ //elemento nao encontrado
            return -2;
        } else {
            for(i = aux; i < l->fim; i++){
                l->no[i] = l->no[i+1];                
            }
            l->fim--;
            return 0;
        }
    }
}

int imprime_lista(Lista l){
    if(l == NULL || lista_vazia(l) == 0){
        return -1;
    }else{             
        for(int i = 0; i < l->fim; i++){
            printf("Lista[%d] = %d\n", i, l->no[i]);
        }
        return 0;      
    }
}