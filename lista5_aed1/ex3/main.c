#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "lista_linear_nao_ordenada_de_bebidas.h"

int main(){

    Lista lista1 = NULL;
    int op;

    do{
        system("clear || cls");

        do{
            printf(" \n--- REGISTRO BEBIDAS --- \n\n");
            printf(" Escolha uma opcao\n");
            printf(" 1. Criar lista\n");
            printf(" 2. Verificar lista vazia\n");
            printf(" 3. Verificar lista cheia\n");
            printf(" 4. Inserir registro \n");
            printf(" 5. Excluir registro \n");
            printf(" 6. Imprimir registro\n");
            printf(" 7. SAIR\n");
            printf(" Opcao: ");
            scanf("%d", &op);
            if((op < 1) || (op > 7)) {
                printf("\n\n Opcao Invalida! Tente novamente...\n\n");               
            }
        } while((op < 1) || (op > 7));

        switch(op){

            case 1:
                printf("\n\n 1. Criar lista\n");
                lista1 = criar_lista();
                if(lista1 == NULL){
                    printf("\nErro ao criar lista!");
                    printf("\n\nAperte qualquer tecla para continuar ... ");
                }else{
                    printf("\nLista criada com sucesso!");
                    printf("\n\nAperte qualquer tecla para continuar ... ");
                }
                getch();
                break;

            case 2:
                printf("\n\n 2. Verificar lista vazia\n");
                if(lista_vazia(lista1) == 0){
                    printf("\nLista esta vazia!");
                    printf("\n\nAperte qualquer tecla para continuar ... ");
                }else{
                    printf("\nLista esta cheia!");
                    printf("\n\nAperte qualquer tecla para continuar ... ");
                }
                getch();
                break;

            case 3:
                printf("\n\n 3. Verificar lista cheia\n");
                if(lista_cheia(lista1) == 0){
                    printf("\nLista esta cheia!");
                    printf("\n\nAperte qualquer tecla para continuar ... ");
                }else{
                    printf("\nLista nao esta cheia!");
                    printf("\n\nAperte qualquer tecla para continuar ... ");
                }
                getch();
                break;

            case 4:
                printf("\n\n4. Inserir registro\n");

                char nome[20];
                int volume;
                float preco;

                printf("\nDigite os dados do item a seguir para inseri-lo:\n");
                printf("Nome: ");
                fflush(stdin);
                fgets(nome, 20, stdin);

                printf("Volume em ml: ");
                scanf("%d", &volume);

                printf("Preco: R$ ");
                scanf("%f", &preco);

                if(insere_elem(lista1, nome, volume, preco) == 0){
                    printf("\nRegistro inserido com sucesso!");
                    printf("\n\nAperte qualquer tecla para continuar ... ");
                }else{
                    printf("\nFalha ao inserir registro! Lista nao foi criada ou esta cheia.");
                    printf("\n\nAperte qualquer tecla para continuar ... ");
                }

                getch();
                break;

            case 5:
                printf("\n\n5. Excluir registro\n");

                char nome1[20];
                printf("Digite o nome da bebida a ser excluida: ");                
                scanf("%s", nome1);

                if(remove_elem(lista1, nome1) == 0){
                    printf("\nRegistro excluido com sucesso!");
                    printf("\n\nAperte qualquer tecla para continuar ... ");
                }else{
                    printf("\nErro excluir registro!");
                    printf("\n\nAperte qualquer tecla para continuar ... ");
                }
                
                getch();
                break;

            case 6:
                printf("\n\n6. Imprimir registro\n");

                if(imprime_lista(lista1) == 0){
                    printf("\nRegistro impresso com sucesso!");
                    printf("\n\nAperte qualquer tecla para continuar ... ");
                } else{
                    printf("\nErro ao imprimir registro! Lista vazia ou nao foi criada.");
                    printf("\n\nAperte qualquer tecla para continuar ... ");
                }

                getch();
                break;                

            case 7:
                printf("\n\n 7. SAIR\n");
                break;

            default:
				printf("\n\n Pressione qualquer tecla para FINALIZAR...");				            
        }

    } while(op != 7); 

    return 0;
}
    
