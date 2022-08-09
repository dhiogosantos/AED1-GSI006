#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha_din_enc.h"

struct no{
    int info;
    struct no* prox;
};

Pilha cria_pilha(){
    return NULL;
}

int pilha_vazia(Pilha plh){
    if(plh == NULL)
        return 0;
    else
        return -1;
}

int push(Pilha *plh, int elem){    
    Pilha N = (Pilha) malloc(sizeof(struct no));
    if(N == NULL)
        return -1;

    N->info = elem;

    N->prox = *plh;
    *plh = N;

    return 0;
}

int pop(Pilha *plh, int *elem){
    if(pilha_vazia(*plh) == 0)
        return -1;

    Pilha aux = *plh;
    *elem = aux->info;
    *plh = aux->prox;      
    free(aux); 

    return 0;
}

int le_topo(Pilha plh, int *elem){
    if(pilha_vazia(plh) == 0)
        return -1;

    *elem = plh->info;

    return 0;
}

void imprime_pilha(Pilha plh){
    Pilha p2 = cria_pilha();
    int x,y;
    if(pilha_vazia(plh) != 0){
        while(plh != NULL){
            printf("    %d\n", plh->info);
            pop(&plh, &x);
            push(&p2, x);
        }
    }else{
        printf(" Pilha vazia");
    }

    while(p2 != NULL){
        pop(&p2, &y);
        push(&plh, y);
    }    
}

void imprime_reverso(Pilha plh){
    Pilha p1 = cria_pilha();
    int z,y;

    while(plh != NULL){
        pop(&plh, &z);
        push(&p1, z);
    }
    
    imprime_pilha(p1);

    while(p1 != NULL){
        pop(&p1, &y);
        push(&plh, y);
    }
}

int liberar_pilha(Pilha *plh){
    int x;

    if(pilha_vazia(*plh) == 0)
        return -1;

    while(*plh != NULL)
        pop(&(*plh), &x);
    
    return 0;
}

int exclui_ocorrencias_elem(Pilha *plh, int elem){
    if(pilha_vazia(*plh) == 0) 
        return -1;

    Pilha remove = cria_pilha();
    Pilha mantem = cria_pilha();
    
    while(*plh != NULL){
        if((*plh)->info == elem)              
            push(&remove, (*plh)->info);     
        else
            push(&mantem, (*plh)->info);                
        
        pop(&(*plh), &((*plh)->info));
    }
    
    while(mantem != NULL){
        push(&(*plh), mantem->info);
        pop(&mantem, &(mantem->info));
    }
     
    if(pilha_vazia(remove) == 0)
        return -2;

    return 0;
}

int verifica_palindromo(char *str){
    int tam = strlen(str);    
    Pilha p1 = cria_pilha();
    int metade = tam/2;
    int i,j, elem;

    for(i = 0; i < metade; i++){
        push(&p1, str[i]);
    }
    if(tam % 2 != 0)
        i++;     
        
    while(str[i] != '\0'){
        pop(&p1, &elem);
        if(elem != str[i])
            return -1;
        i++;
    }
    return 0;
}

int separa_par_e_impar(Pilha *plh){
    if(pilha_vazia(*plh) == 0)
        return -1; 
    
    Pilha par, impar, pfim, aux;

    par = cria_pilha();
    impar = cria_pilha();
    pfim = cria_pilha();
    
    while(*plh != NULL){
        if((*plh)->info % 2 == 0)
            push(&par, (*plh)->info);
        else
            push(&impar, (*plh)->info);
            
        push(&pfim, (*plh)->info);
        pop(&(*plh), &((*plh)->info)); 
    }           
    printf("\nPares: \n");
    imprime_pilha((par));

    printf("\nImpares: \n");
    imprime_pilha((impar));
    
    while(pfim != NULL){
        push(&(*plh), pfim->info);
        pop(&pfim, &(pfim->info));
    }

    return 0;    
}