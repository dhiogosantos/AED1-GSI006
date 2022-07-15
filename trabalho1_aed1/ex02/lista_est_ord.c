#include <stdio.h>
#include <stdlib.h>
#include "lista_est_ord.h"

#define max 10

struct list{
    int node[max];
    int end;
};

List create_list(){
    List lst;

    lst = (List) malloc (sizeof(struct list));

    if(lst != NULL){
        lst->end = 0;
    }
    return lst;
}

int empty_list(List lst){ //lista_vazia
    if(lst->end == 0){
        return 0;
    }else {
        return -1;
    }
}

int full_list(List lst){
    if(lst->end == max){
        return 0;
    }else {
        return -1;
    }
}

int insert_elem(List lst, int elem){
    if(lst == NULL || full_list(lst) == 0)
        return -1;
    else
        lst->node[lst->end] = elem;
        lst->end++;
    return 0;
}

int insert_elem_ord(List lst, int elem){
    int aux = 0;

    if(full_list(lst) == 0 || lst == NULL)
        return -1; //lista cheia ou nao foi criada

    if(empty_list(lst) == 0 ){
        lst->node[0] = elem;
        
    }else if(elem >= lst->node[lst->end - 1]){
        lst->node[lst->end] = elem;

    }else{
            while(elem >= lst->node[aux])
                aux++;
                
            for(int i = lst->end; i > aux; i--)
                lst->node[i] = lst->node[i-1];
            
            lst->node[aux] = elem;      
        }      

    lst->end++;
    return 0;    
}

int remove_elem_ord(List lst, int elem){
    if(lst == NULL || empty_list(lst) == 0)
        return -1; //lista nao foi criada ou esta vazia 
    
    int i, aux = 0;

    if(elem < lst->node[0] || elem > lst->node[lst->end - 1])
        return -2; //elemento nao existe na lista

    while(aux < lst->end && lst->node[aux] < elem)
        aux++;

    if(aux == lst->end)
        return -2; //elemento nao existe na lista    

    for(i = aux + 1; i <lst->end; i++)
        lst->node[i - 1] = lst->node[i];

    lst->end--;

    return 0;
}

int remove_odd(List lst){
    int i = 0, aux = 0;

    if(lst == NULL || empty_list(lst) == 0)
        return -1; // lista nao foi criada ou esta vazia
    
    for(i; i < lst->end; i++){
        if(lst->node[i] % 2 != 0){
            remove_elem(lst, lst->node[i]);
            i = 0;
        }
    }

    return 0;
}

void print_list(List lst){
    int i;
    printf("{");
    for(i = 0; i < lst->end; i++)
        printf((i + 1 != lst->end) ? "%d, " : "%d", lst->node[i]);
    printf("}\n");
}

int smallest_elem(List lst){
    int aux;
    if(lst == NULL || empty_list(lst) == 0)
        return -1;

    aux = lst->node[0];
    for(int i = 0; i < lst->end; i++){
        if(lst->node[i] < aux)
            aux = lst->node[i];
    }
    return aux;
}

int list_size(List lst){
    if(lst == NULL) // lista nao foi criada
        return -1;

    return lst->end;
}

int concat_list(List lst1, List lst2, List l3){   
        
    int x = list_size(lst1);

    int y = list_size(lst2);

    int res = x + y;

    if(res > max || res == 0)
        return -1;

    for (int i = 0; i < lst1->end; i++)
        insert_elem(l3, lst1->node[i]);    

    for (int i = 0; i < lst2->end; i++)
        insert_elem(l3, lst2->node[i]); 

  return 0;

}

int order_list(List lst){
    int i, j, aux;
    if(lst == NULL || empty_list(lst) == 0)
        return -1;
    else
        for(j = 0; j < lst->end; j++){       //le a posicao
            for(i = 0; i < lst->end; i++){         //le o conteudo
                if(lst->node[i] > lst->node[i+1]){
                aux = lst->node[i];
                lst->node[i] = lst->node[i+1];
                lst->node[i+1] = aux;
                }
            }
        }
    return 0;
}