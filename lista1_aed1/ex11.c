#include <stdio.h>
#include <stdlib.h>

struct agenda {
    char nome[30];
    char email[20];
    char rua[25];
    char nro[6];
    char complemento[14];
    char bairro[20];
    char cep[10];
    char cidade[20];
    char estado[20];
    char pais[20];
    char telefone[14];
    char dataAniversario[12];
    char observacaoEspecial[30];
};


int main(){

    int opcao, i;
    struct Agenda agenda[2];

    do{
       printf("-------------------------------------------------------\n"); 
       printf(" ------ Selecione a opcao desejada: ------\n\n");
       printf("1 - Busca contato por primeiro nome\n");
       printf("2 - Busca contato por mes de nascimento\n");
       printf("3 - Busca contato por dia e mes de nascimento\n");
       printf("4 - Insere contato\n");
       printf("5 - Retira contato\n");
       printf("6 - Imprime nome, telefone e email de todos os contatos a agenda\n");
       printf("7 - Imprime todos os contatos da agenda\n");
       printf("-------------------------------------------------------\n\n");

       scanf("%d", &opcao);

    } while (opcao < 1 || opcao > 7);

    if(opcao == 1){
        printf("\n1 - Busca contato por primeiro nome\n");

    }
     

     






    return 0;
}
