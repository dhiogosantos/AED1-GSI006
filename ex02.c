#include <stdio.h>

int main(){

    int x, y;
    float distancia;

    printf("Entre com a coordenada x: ");
    scanf("%d", &x);

    printf("Entre com a coordenada y: ");
    scanf("%d", &y);

    distancia = sqrt(pow((x-0), 2) + pow((y-0), 2));

    printf("\nA distancia entre os pontos (%d, %d) e (0, 0) eh %.1f \n", x, y, distancia);

    return 0;
}