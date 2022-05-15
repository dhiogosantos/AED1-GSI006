#include <stdio.h>
#include <math.h>

int main(){

    float n1, n2, n3, n4, n5, soma, media, desvioPadrao;   

    printf(" << Media e desvio-padrao >> \n");
    printf("Digite o valor 1: ");
    scanf("%f", &n1);
    printf("Digite o valor 2: ");
    scanf("%f", &n2);
    printf("Digite o valor 3: ");
    scanf("%f", &n3);
    printf("Digite o valor 4: ");
    scanf("%f", &n4);
    printf("Digite o valor 5: ");
    scanf("%f", &n5);

    soma = n1 + n2 + n3 + n4 + n5;

    media = soma / 5;

    desvioPadrao = sqrt ((pow(n1 - media, 2) + pow(n2 - media, 2) + pow(n3 - media, 2) + pow(n4 - media, 2) + pow(n5 - media, 2)) / 5);

    printf("A media eh %.0f e o desvio-padrao eh %f \n", media, desvioPadrao);    

    return 0;
}
