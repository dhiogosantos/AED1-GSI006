#include <stdio.h>
#include <math.h>

int main(){

    float altura, peso, imc;

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    imc = peso / pow(altura, 2);

    printf("Seu IMC = %f\n", imc);

    if (imc < 18.5){
        printf("Classificacao: Magreza.\n");
    }

    else if(imc >= 18.5 && imc <= 24.9){
        printf("Classificacao: Saudavel.\n");
        }

    else if (imc >= 25 && imc <= 29.9){
        printf("Classificacao: Sobrepeso.\n");    
        }

    else if(imc >= 30 && imc <= 34.9){
        printf("Classificacao: Obesidade Grau I.\n");
    }

    else if(imc >= 35 && imc <= 39.9){
        printf("Classificacao: Obesidade Grau II (severa).\n");
    }

    else
        printf("Classificacao: Obesidade Grau III (morbida).\n");

    return 0;
}