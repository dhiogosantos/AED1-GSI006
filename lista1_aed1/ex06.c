#include <stdio.h>

int main(){

    int fat = 1, n;

    printf(" << Fatorial >> \n");

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        fat = fat * i;
        printf("%d! = %d\n", i, fat);
    }

    return 0;
}