#include <stdio.h>
#include <stdlib.h>
#include "pilha_est_seq.h"
#include <conio.h>
#include <stdio.h>

int main(){

    Pilha pilha;
    int op;

    do{
        system("CLS || clear");

        do{
            printf(" --- PILHA ESTATICA SEQUENCIAL NAO ORDENADA --- \n\n");
            printf(" Escolha uma opcao:\n");
            printf(" 1. Criar pilha\n");
            printf(" 2. Verificar pilha vazia\n");
            printf(" 3. Verificar pilha cheia\n");
            printf(" 4. Inserir elemento\n");
            printf(" 5. Excluir elemento do topo\n");
            printf(" 6. Ler o topo\n");
            printf(" 7. Imprimir pilha\n");
            printf(" 8. SAIR\n");
            printf(" Opcao: ");
            scanf("%d", &op);
            if ((op < 1) || (op > 8))
                printf("\n\n Opcao Invalida! Tente novamente...\n\n");
        }while ((op < 1) || (op > 8));

        switch (op){

        case 1:
            printf("\n1. Criar pilha\n\n");
            pilha = cria_pilha();

            if (pilha == NULL)
                printf("Erro ao criar Pilha. Aperte qualquer tecla para continuar...\n\n");
            else
                printf("Pilha criada com sucesso. Aperte qualquer tecla para continuar...\n\n");
            
            getch();
            break;

        case 2:
            printf("\n2. Verificar pilha vazia\n\n");

            if (pilha_vazia(pilha) == 0)
                printf("Pilha esta vazia. Aperte qualquer tecla para continuar...\n\n");
            else
                printf("A Pilha nao esta vazia. Aperte qualquer tecla para continuar...\n\n");
            
            getch();
            break;

        case 3:
            printf("\n3. Verificar pilha cheia\n\n");

            if (pilha_cheia(pilha) == 0)
                printf("Pilha esta cheia. Aperte qualquer tecla para continuar...\n\n");
            else
                printf("Pilha nao esta cheia. Aperte qualquer tecla para continuar...\n\n");
            
            getch();
            break;

        case 4:
            printf("\n4. Inserir elemento\n\n");
            int elem;
            printf("Digite o elemento a ser inserido: ");
            
            scanf("%d", &elem);

            if (push(pilha, elem) == -1)
                printf("\n\nFalha ao inserir elemento! Pilha nao criada ou esta cheia. Aperte qualquer tecla para continuar...\n\n"); 
            else
                printf("\n\nElemento %d inserido com sucesso. Aperte qualquer tecla para continuar...\n\n", elem);

            getch();
            break;

        case 5:
            printf("\n5. Excluir elemento\n\n");
            int x;

            if(pop(pilha, &x) == -1)
                printf("Falha ao remover o elemento! Pilha nao criada ou esta vazia. Aperte qualquer tecla para continuar...\n\n");  
            else
                printf("Elemento %d removido com sucesso. Aperte qualquer tecla para continuar...\n\n", x);
            
            getch();
            break;

        case 6:
            printf("\n6. Ler o topo\n\n");
            int topo;

            if(le_topo(pilha, &topo) == -1)
                printf("Falha ao ler topo! Pilha nao criada ou esta vazia. Aperte qualquer tecla para continuar...\n\n");
            else
                printf("Elemento do topo eh: %d. Aperte qualquer tecla para continuar...\n\n", topo);

            getch();
            break;

        case 7:
            printf("\n7. Imprimir pilha\n\n");

            if(imprime_pilha(pilha) == -1)
                printf("\nFalha ao imprimir! Pilha nao criada ou esta vazia. Aperte qualquer tecla para continuar...\n\n");
            else
                printf("\nPilha impressa com sucesso. Aperte qualquer tecla para continuar...\n\n");
            
            getch();
            break;

        default:
            printf("\n\nPressione qualquer tecla para FINALIZAR...\n\n");
            getch();
        }
    } while (op != 8);

    return 0;
}