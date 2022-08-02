#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "fila_est_seq_desperdicio_pos.h"

int main(){

    Fila fila;
    int op;

    do{
        system("CLS || clear");

        do{
            printf(" --- FILA ESTATICA SEQUENCIAL COM DESPERDICIO DE POSICAO --- \n\n");
            printf(" Escolha uma opcao:\n");
            printf(" 1. Criar fila\n");
            printf(" 2. Verificar fila vazia\n");
            printf(" 3. Verificar fila cheia\n");
            printf(" 4. Inserir elemento no fim\n");
            printf(" 5. Remover elemento no inicio\n");
            printf(" 6. Ler o final\n");
            printf(" 7. Imprimir fila\n");
            printf(" 8. SAIR\n");
            printf(" Opcao: ");
            scanf("%d", &op);
            if ((op < 1) || (op > 8))
                printf("\n\n Opcao Invalida! Tente novamente...\n\n");
        }while ((op < 1) || (op > 8));

        switch (op){

        case 1:
            printf("\n1. Criar fila\n\n");
                fila = cria_fila();
                printf("Fila criada com sucesso. Aperte qualquer tecla para continuar...\n\n");

            getch();
            break;

        case 2:
            printf("\n2. Verificar fila vazia\n\n");

            if (fila_vazia(fila) == 0)
                printf("A fila esta vazia. Aperte qualquer tecla para continuar...\n\n");
            else
                printf("A fila nao esta vazia. Aperte qualquer tecla para continuar...\n\n");
            
            getch();
            break;

        case 3:
            printf("\n3. Verificar fila cheia\n\n");

            if (fila_cheia(fila) == 0)
                printf("A fila esta cheia. Aperte qualquer tecla para continuar...\n\n");
            else
                printf("A fila nao esta cheia. Aperte qualquer tecla para continuar...\n\n");
            
            getch();
            break;

        case 4:
            printf("\n4. Inserir elemento no fim\n\n");
            int x;

            printf("Digite o elemento a ser inserido: ");            
            scanf("%d", &x);

            if (insere_fim(fila, x) == -1)
                printf("\nFalha ao inserir elemento %d pois a fila esta cheia. Aperte qualquer tecla para continuar...\n\n", x);  
            else
               printf("\nElemento %d inserido com sucesso. Aperte qualquer tecla para continuar...\n\n", x); 
            
            getch();
            break;

        case 5:
            printf("\n5. Remover elemento no inicio\n\n");
            int y;

            if (remove_ini(fila, &y) == -1)
                printf("Falha ao remover no inicio pois a fila esta vazia. Aperte qualquer tecla para continuar...\n\n");
            else
                printf("Elemento %d removido com sucesso. Aperte qualquer tecla para continuar...\n\n", y);

            getch();
            break;

        case 6:
            printf("\n6. Ler o fim\n\n");
            int z;

            if(ler_final(fila, &z) == -1)
                printf("Falha pois a fila esta vazia. Aperte qualquer tecla para continuar...\n\n");
            else
                printf("Elemento que esta no fim eh: %d. Aperte qualquer tecla para continuar...\n\n",z);

            getch();
            break;

        case 7:
            printf("\n7. Imprimir Fila\n\n");

            if(fila_vazia(fila) == 0)
                printf("\nFila: { }\n\nFila impressa com sucesso. Aperte qualquer tecla para continuar...\n\n");
            else if(imprime_fila(fila) == -1)
                printf("\nFila nao foi criada. Aperte qualquer tecla para continuar...\n\n");
            else
                printf("\nFila impressa com sucesso. Aperte qualquer tecla para continuar...\n\n");
            getch();
            break;

        default:
            printf("\n\nPressione qualquer tecla para FINALIZAR...\n\n");
            getch();
        }
    } while (op != 8);

    return 0;
}