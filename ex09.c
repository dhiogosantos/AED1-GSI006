#include <stdio.h>

int main()
{
    char nome[100];

    printf("Digite um nome: ");
    
    fflush(stdin);
    gets(nome);

    for (int i = 0; nome[i] != '\0'; i++){
        if(nome[i] >= 97 && nome[i] <= 122){
            nome[i] = nome[i] - 32;
        }
    }

    printf("O nome digitado eh: %s", nome);
    
    return 0;
}