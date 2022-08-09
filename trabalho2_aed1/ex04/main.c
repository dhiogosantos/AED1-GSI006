#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "fila_desperdicio.h"

int main(){

    Fila fila;
    int op;

    do{

        system("CLS || clear");
        do{

            printf(" --- FILA ESTATICA SEQUENCIAL --- \n\n");
            printf(" Escolha uma opcao:\n");
            printf(" 1. Criar fila\n");
            printf(" 2. Verificar fila vazia\n");
            printf(" 3. Verificar fila cheia\n");
            printf(" 4. Inserir elemento no fim\n");
            printf(" 5. Remover elemento no inicio\n");
            printf(" 6. Imprimir fila\n");
            printf(" 7. SAIR\n");
            printf(" Opcao: ");
            scanf("%d", &op);
            if ((op < 1) || (op > 7))
                printf("\n\n Opcao Invalida! Tente novamente...\n\n");
        }while ((op < 1) || (op > 7));

        switch (op){
            
        case 1:
            printf("\n1. Criar fila\n\n");
                fila = cria_fila();
                printf("Fila criada com sucesso. Aperte qualquer tecla para continuar\n\n");
            getch();
            break;

        case 2:
            printf("\n2. Verificar fila vazia\n\n");
            if (fila_vazia(fila) == 0){
                printf("A Fila esta vazia. Aperte qualquer tecla para continuar\n");
            }
            else{
                printf("A fila contem um ou mais elementos. Aperte qualquer tecla para continuar\n\n");
            }
            getch();
            break;

        case 3:
            printf("\n3. Verificar fila cheia\n\n");
            if (fila_cheia(fila) == 0){
                printf("A fila esta cheia. Aperte qualquer tecla para continuar\n");
            }
            else{
                printf("A fila nao esta cheia. Aperte qualquer tecla para continuar\n\n");
            }
            getch();
            break;

        case 4:
            printf("\n4. Inserir elemento no fim\n\n");
            printf("Digite o elemento a ser inserido: ");
            int j;
            scanf("%d", &j); 
            if (insere_fila(fila, j) == 0){ 
                printf("\nElemento %d inserido com sucesso. Aperte qualquer tecla para continuar\n", j);
            }
            else{
                printf("\nFalha ao inserir elemento %d: elemento nao alocado. Aperte qualquer tecla para continuar\n", j);
            }
            getch();
            break;

        case 5:
            printf("\n5. Remover elemento no inicio\n\n");
            int x;
            if (remove_fila(fila, &x) == 0)
                printf("\nElemento %d removido com sucesso. Aperte qualquer tecla para continuar\n", x);
            else
                printf("\nFalha ao remover no inicio: fila vazia. Aperte qualquer tecla para continuar\n");
            getch();
            break;

        case 6:
            printf("\n6. Imprimir Fila\n\n");
            if(imprime_fila(fila) == -1)
                printf("Fila nao inicializada. Aperte qualquer tecla para continuar\n\n");
            else
                printf("\nFila impressa com sucesso. Aperte qualquer tecla para continuar\n");
            getch();
            break;

        default:
            printf("\n\n Pressione qualquer tecla para FINALIZAR...");
            getch();
        }
    } while (op != 7);

    return 0;
}

