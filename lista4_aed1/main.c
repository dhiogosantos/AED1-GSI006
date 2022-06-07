#include <stdio.h>
#include <stdlib.h>
#include "ponto.h"

int main(){

    float dist = 0;
    int a1, a2, b1, b2;

    Ponto *a, *b;

    printf("\nDigite o primeiro ponto -> x,y: ");
    scanf("%d,%d", &a1, &a2);

    a = gera_pto();

    if(set_pto(a, a1, a2) == 0){
        printf("Coordenadas atribuidas ao ponto com sucesso!\n");
    } else{
        printf("Erro ao atribuir coordenadas ao ponto!\n");
        return -1;
    }
    
    printf("\nDigite o segundo ponto -> x,y: ");
    scanf("%d,%d", &b1, &b2);

    b = gera_pto();

    if(set_pto(b, b1, b2) == 0){
        printf("Coordenadas atribuidas ao ponto com sucesso!\n");
    } else {
        printf("Erro ao atribuir coordenadas ao ponto com sucesso!\n");
        return -1;
    }

    dist = distancia_pto(a, b);

    printf("\nDistancia dos pontos = %.2lf\n\n", dist);

    libera_pto(a);
    libera_pto(b);

    return 0;
}