#include <stdio.h>
#include <stdlib.h>

int main(){

    double vet[10] = {1,2,3,4,5,6,7,8,9,10};

    for(int i = 0; i < 10; i++){
        printf("Imprimindo o conteudo de vet[%d]: %lf\n", i, *(vet+i));
    }

    return 0;
}