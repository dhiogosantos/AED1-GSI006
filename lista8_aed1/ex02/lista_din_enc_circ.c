#include <stdio.h>
#include <stdlib.h>
#include "lista_din_enc_circ.h"

struct node{
    int info;
    struct node* next;
};

List create_list(){
    return NULL;
}

int empty_list(List lst){
    if (lst == NULL)
    return 0;   
    else
    return -1;   
}

int insert_elem_end(List *lst, int elem){
    List N = (List) malloc(sizeof(struct node));
    if(N == NULL)
        return -1;

    N->info = elem; 

    if(empty_list(*lst) == 0){
        N->next = N;        
        *lst = N; 
    }else{
        N->next = (*lst)->next;         
        (*lst)->next = N;
        *lst = N;
    }      
    return 0;
}

int remove_elem_begin(List *lst, int *elem){
    if(empty_list(*lst) == 0)
        return -1;
    
    List aux = (*lst)->next;
    *elem = aux->info; //retorna o valor a ser removido
    if(size_list(*lst) == 1)
        *lst = NULL;   //1 nó na lista
    else{
        (*lst)->next = aux->next;
        free(aux);
    }
    return 0;
}

void print_list(List lst){
    List last = lst;
    if(empty_list(lst) == 0){
        printf("Lista: {}");
    }
    else{
        printf("Lista: {");    
        do{
            printf((lst->next != last ) ? "%d, " : "%d", lst->next->info);
            lst = lst->next;
        }while(lst != last);
        printf("}");
    }
}

int obtem_valor_elem(List lst, int elem){
    if(empty_list(lst) == 0)
        return -1; //falha pois a lista está vazia
    
    if(lst->info == elem)
        return 0;
    
    if(lst->next->info == elem)
        return 0;

    List aux = lst->next->next;

    for(aux->next; aux != lst; aux = aux->next){
        if(elem == aux->info){
            return 0;
        }
    }

    return -2; //elemento nao esta na lista
}

int size_list(List lst){
    if(lst == NULL)
        return -1;
    if(empty_list(lst) == 0)
        return 0;
    List aux = lst->next;
    List last = lst;
    int j = 1; 
    while(aux != last){
        aux = aux->next;
        j++;
    }
    return j;
}

int insert_elem_begin(List *lst, int elem){
    List N;
    N = (List) malloc (sizeof (struct node));

    if(N == NULL)
        return -1;

    N->info = elem;

    if(empty_list(*lst) == 0){
        N->next = N;
        *lst = N;        
        return 0;
    }else{
        N->next = (*lst)->next;
        (*lst)->next = N;
    }

    return 0;
}


int remove_elem_end(List *lst, int *elem){
     if(empty_list(*lst) == 0)
        return -1;

    if((*lst)->next == *lst){
        *elem = (*lst)->info;
        free(*lst);
        *lst = NULL;
        return 0;
    }

    List aux = (*lst)->next;
    List last = *lst;
    
    *elem = (*lst)->info;

    while(aux->next != *lst)
        aux = aux->next;

    *lst = aux;
    (*lst)->next = last->next;
    free(last);
    return 0;
}

