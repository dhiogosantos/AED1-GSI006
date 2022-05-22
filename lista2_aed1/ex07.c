#include <stdio.h>
#include <stdlib.h>

struct Ponto{
    int x;
    int y;
};

int main(){

    int *v;
    int tam, j = 1;   

    printf("Quantos pontos deseja digitar: ");
    scanf("%d", &tam);
    printf("\n");

    struct Ponto p[tam];  

    v = (int*) malloc (tam * sizeof(struct Ponto));

    if(v == NULL){
        printf("Erro ao alocar memoria!! \n");
        return -1;
    }

    for (int i = 0; i < tam; i++){
        printf("Entre com a coordenada de x do ponto %d: ", j);        
        scanf("%d", &p[i].x);

        printf("Entre com a coordenada de y do ponto %d: ", j);        
        scanf("%d", &p[i].y);

        j++;
    }

    printf("\nPontos digitados: ");

    int i = 0;
    for(i = 0; i < tam; i++){
        //imprimi o ultimo ponto digitado sem o final ter ponto e virgula
        if(i == tam - 1){
            printf("(%d,%d)\n", p[i].x, p[i].y);
        //imprime com a fortacao normal  
        } else {
        printf("(%d,%d); ", p[i].x, p[i].y);
        }
    }

    return 0;
}