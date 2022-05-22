#include <stdio.h>
#include <stdlib.h>

int main(){

    int a = 40;
    int p;

    p = &a;

    printf("Endereco da variavel a: %d\n", &a);

    printf("Endereco da variavel a: %d\n", &p);

    printf("\nAlterando o valor da variavel a. Digite seu novo valor: ");

    scanf("%d", p);

    printf("\nNovo valor da variavel a: %d\n", a);

    return 0;
}