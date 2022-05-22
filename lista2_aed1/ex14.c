#include <stdio.h>
#include <stdlib.h>

void to_double(int *vet){
    double res = 0;
    printf("\nVetor convertido para double:\n");
    for(int i = 0; i < 5; i++){
         printf("vet[%d]: %.2lf\n", i, (double)vet[i]);
    }  
}

int main(){

    int vet[5];

    printf("\n");
    for(int i = 0; i < 5; i++){
        printf("Digite vet[%d]: ", i);
        scanf("%d", &vet[i]);
    }

    to_double(vet);

    return 0;
}