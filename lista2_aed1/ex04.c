#include <stdio.h>
#include <stdlib.h>

int main(){

    int vet[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    for(int i = 9; i >= 0; i--){
        printf("Conteudo de vet[%d]: %d\n", i, *(vet+i));
    }





    return 0;
}