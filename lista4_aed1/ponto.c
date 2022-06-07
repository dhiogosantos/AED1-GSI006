#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ponto.h"


struct ponto{
    int x, y;
};

Ponto* gera_pto(){
    Ponto *p;
    p = (Ponto*) malloc (sizeof(Ponto));    
    return p;    
};

int set_pto(Ponto* p, int x, int y){
    if(p != NULL){
        p->x = x;
        p->y = y;
        return 0;    
    }else {
        return -1;  
    }
}

int get_pto(Ponto *p, int *x, int *y){
    if(p != 0){
        *x = p->x;
        *y = p->y;
        return 0;
     } else {
    return -1;
    }
}

void libera_pto(Ponto *p){
    free(p);
}

float distancia_pto(Ponto *p1, Ponto *p2){
    int dx = p1->x - p2->x;
    int dy = p1->y - p2->y;
    
    return sqrt(pow(dx,2) + pow(dy,2));
}

