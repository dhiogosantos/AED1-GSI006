#include <stdio.h>
#include <stdlib.h>

void imprimeVetor(double *vet){
    printf("\nImprimindo o vetor completo:\n\n");
    for(int i = 0; i < 10; i++){
        printf("vet[%d]: %.2lf\n", i, vet[i]);        
    }
}

void menorValor(double *vet){
    double menor = vet[0];    
    for(int i = 1; i < 10; i++){
        if(menor < vet[i]){
            menor = menor;            
        }else{
            menor = vet[i];
        }
    }
    printf("\nO menor valor do vetor eh: %.2lf\n", menor);
}

void maiorValor(double *vet){
    double maior = vet[0];    
    for(int i = 1; i < 10; i++){
        if(maior > vet[i]){
            maior = maior;            
        }else{
            maior = vet[i];
        }
    }
    printf("\nO maior valor do vetor eh: %.2lf\n\n", maior);
}

int main (){

    double vet[10];

    printf("\n");
    for(int i = 0; i < 10; i++){
        printf("Digite vet[%d]: ", i);
        scanf("%lf", &vet[i]);
    }

    imprimeVetor(vet);
    
    menorValor(vet);

    maiorValor(vet);

    return 0;
}