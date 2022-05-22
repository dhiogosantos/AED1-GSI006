#include <stdio.h>
#include <stdlib.h>

int* aloca_inteiro(int n){
    int *p;
    p = (int *) calloc(n, sizeof(int));
    if(p == NULL){
        printf("Erro ao alocar memoria!!\n");
        system("pause");
    } else {
        return p;
    }            
}

void imprime_vet(int *p, int n){
    int j = 1;
    for(int i = 0; i < n; i++){
        printf("vet[%d] = %d\n", j, *(p + i));
        j++;
    }
}

int main(){

    int n, *p;

    printf("Digite o tamanho do vetor: ");

    scanf("%d", &n);

    p = aloca_inteiro(n);

    imprime_vet(p, n);

    free(p);

    return 0;
}