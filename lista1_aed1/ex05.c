#include <stdio.h>

int main(){

    int n, i, j, aux = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    printf("Triangulo de Floyd: \n");

    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            aux++;
            printf("%d ", aux);
        }        
        
        printf("\n");        
    }

    return 0;
}