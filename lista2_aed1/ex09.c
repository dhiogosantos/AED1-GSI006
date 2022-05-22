#include <stdio.h>
#include <stdlib.h>

void calculo(int *j, int *k, int CONSTANTE){
    int x1, y1;
    x1 = *j * CONSTANTE;      
    y1 = *k * CONSTANTE;
    printf("Resultado: (%d,%d) * %d = (%d,%d)\n", *j, *k, CONSTANTE, x1, y1);
}

int main(){

    const int CONSTANTE;
    int x, y;

    printf("Digite o ponto -> x,y: ");
    scanf("%d,%d", &x, &y);

    printf("Digite a constante: ");
    scanf("%d", &CONSTANTE);

    calculo(&x, &y, CONSTANTE);    
    
    return 0;
}