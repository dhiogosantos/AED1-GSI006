#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "lista_linear_ordenada_de_inteiros.h"

int main(){

    Lista lista1;    
    int op;

    do{              
        system("CLS || clear"); 
        do{
            printf(" --- LISTAS ESTATICAS SEQUENCIAIS --- \n\n");
            printf(" Escolha uma opcao:\n");
            printf(" 1. Criar lista\n");
            printf(" 2. Verificar lista vazia\n");
            printf(" 3. Verificar lista cheia\n");            
            printf(" 4. Inserir elemento ordenado\n");            
            printf(" 5. Excluir elemento\n");
            printf(" 6. Imprimir lista\n");
            printf(" 7. SAIR\n");
            printf("Opcao: ");
            scanf("%d", &op);
            if((op < 1) || (op > 7)) {
                printf("\n\nOpcao invalida! Tente novamente...\n\n");               
            }
            } while((op < 1) || (op > 7));

        switch(op){

            case 1:
                printf("\n\n1. Criar lista\n");
                lista1 = criar_lista();
                if(lista1 == NULL){
                    printf("\nErro ao criar lista!\n");
                    printf("\n\nAperte qualquer tecla para continuar ... ");
                }else{
                    printf("\nLista criada com sucesso!\n");
                    printf("\n\nAperte qualquer tecla para continuar ... ");
                }
                getch();
                break;

            case 2:
                printf("\n\n2. Verificar lista vazia\n");
                if(lista_vazia(lista1) == 0){
                    printf("\nLista esta vazia!\n");
                    printf("\n\nAperte qualquer tecla para continuar ... ");
                }else{
                    printf("\nLista nao esta vazia!\n");
                    printf("\n\nAperte qualquer tecla para continuar ... ");
                }
                getch();
                break;

            case 3:
                printf("\n\n3. Verificar lista cheia\n");
                if(lista_cheia(lista1) == 0){
                    printf("\nLista esta cheia!\n");
                    printf("\n\nAperte qualquer tecla para continuar ... ");
                }else{
                    printf("\nLista nao esta cheia!\n");
                    printf("\n\nAperte qualquer tecla para continuar ... ");
                }
                getch();         
                break;
            
            case 4:
                printf("\n\n4. Inserir elemento ordenado\n");
                printf("Digite o nro a ser inserido: ");
                int z;           
                scanf("%d", &z);
                if(insere_elem_ordenado(lista1, z) == 0){
                    printf("\nElemento inserido na ordem correta!\n");
                    printf("\n\nAperte qualquer tecla para continuar ... ");
                }else{
                    printf("\nErro ao incluir elemento na ordem correta! Lista cheia ou nao foi criada.\n");
                    printf("\n\nAperte qualquer tecla para continuar ... ");                    
                }
                getch();
                break;

            case 5:
                printf("\n\n5. Excluir elemento\n");
                int elem;
                printf("Digite o nro a ser removido: ");                
                scanf("%d", &elem);
                int r = remove_elem(lista1, elem);
                if(r == -1){
                    printf("\nErro ao excluir! Lista nao foi criada ou esta vazia.");
                    printf("\n\nAperte qualquer tecla para continuar ... ");
                }else if(r == -2){
                    printf("Erro ao excluir! Elemento nao existe na lista.\n");
                    printf("\n\nAperte qualquer tecla para continuar ... ");
                }else{
                    printf("\nElemento excluido com sucesso!\n");
                    printf("\n\nAperte qualquer tecla para continuar ... ");
                }
                getch();
                break;

            case 6:
                printf("\n\n6. Imprimir lista\n");
                if(imprime_lista(lista1) == -1){
                    printf("\nErro ao imprimir! Lista vazia ou nao foi criada.\n");
                    printf("\n\nAperte qualquer tecla para continuar ... ");
                }else{
                    printf("\nLista impressa com sucesso!\n");
                    printf("\n\nAperte qualquer tecla para continuar ... ");
                }
                getch();
                break;

            default:
				printf("\n\nPressione qualquer tecla para FINALIZAR... \n\n");
                getch();			
            
        }
    } while(op != 7);
   
    return 0;
}
    
