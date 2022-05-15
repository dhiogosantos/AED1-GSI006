#include <stdio.h>

int main(){

    double fat = 1, n;

    printf(" << Fatorial >> \n");

    printf("Digite um numero inteiro positivo: ");
    scanf("%lf", &n);

    for(int i = 1; i <= n; i++){
        fat = fat * i;
        printf("%d! = %.0lf\n", i, fat);
    }

    return 0;
}

// Resposta: O erro ocorre pois o tipo primitivo int tem capacidade de representação limitada ate 32767 (16 bits).