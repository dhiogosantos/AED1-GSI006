#include <stdio.h>
#include <stdlib.h>

int main (){

    int *v;
    int tam, par, impar, qtdPar = 0, qtdImpar = 0;

    printf("Quantos inteiros serao lidos: ");
    scanf ("%d", &tam);

    v = (int*) malloc(tam * sizeof(int));

    if(v == NULL){
        printf("Erro ao alocar memoria \n");
        return 1;
    }

    for(int i = 1; i <= tam; i++){
        printf("%do inteiro: ", i);
        scanf("%d", &v[i]);
    }

    for(int i = 1; i <= tam; i++){
        if (v[i] % 2 == 0){
            qtdPar += 1;
        }
        else{
            qtdImpar += 1;
        }
    }

    printf("\nSao pares:  %d dos %d inteiros lidos.\n", qtdPar, tam);
    printf("Sao impares: %d dos %d inteiros lidos.\n", qtdImpar, tam);

    return 0;
}