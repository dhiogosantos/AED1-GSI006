#include <stdio.h>

int main(){

    float jogador1, jogador2, jogador3, valorPremio, premioJogador1, premioJogador2, premioJogador3;

    printf(" << Loteria >> \n");
    printf("Digite a aposta de cada jogador:\n");
    printf("Bolao jogador 1: \n" );
    scanf("%f", &jogador1);

    printf("Bolao jogador 2: \n");
    scanf("%f", &jogador2);

    printf("Bolao jogador 3: \n");
    scanf("%f", &jogador3);

    printf("Digite o valor da aposta:\n");
    scanf("%f", &valorPremio);

    premioJogador1 = (jogador1 /10) * valorPremio;

    premioJogador2 = (jogador2 /10) * valorPremio;

    premioJogador3 = (jogador3 /10) * valorPremio;

    printf("Cada jogador recebera:\n");
    printf("Jogador 1: R$ %.1f \n", premioJogador1);
    printf("Jogador 2: R$ %.1f \n", premioJogador2);
    printf("Jogador 3: R$ %.1f \n", premioJogador3);

    return 0;
}