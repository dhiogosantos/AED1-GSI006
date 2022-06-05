#include <stdio.h>
#include <stdlib.h>

void calculo(int *x, int *y, int CONSTANTE){
    int x1 = *x;
    int y1 = *y;
    *x = (*x) * CONSTANTE;
    *y = (*y) * CONSTANTE;
    printf("\nResultado: (%d,%d) * %d = (%d,%d)\n\n", x1, y1, CONSTANTE, *x, *y);
}

int main(){

    const int CONSTANTE;
    int x, y;

    printf("\nDigite o ponto -> x,y: ");
    scanf("%d,%d", &x, &y);

    printf("Digite a constante: ");
    scanf("%d", &CONSTANTE);

    calculo(&x, &y, CONSTANTE);
    
    return 0;
}