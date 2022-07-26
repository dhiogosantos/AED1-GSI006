#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "din_enc_ord.h"

int main(){

    Lista lista1;  
    int op;

    do{
        system("cls || clear");
        do{
            printf(" --- LISTAS DINAMICAS ENCADEADAS --- \n\n");
            printf(" Escolha uma opcao:\n");
            printf(" 1. Criar lista\n");
            printf(" 2. Verificar lista vazia\n");            
            printf(" 3. Inserir elemento ordenado\n");          
            printf(" 4. Excluir elemento\n");
            printf(" 5. Obter valor\n");           
            printf(" 6. Imprimir lista\n");
            printf(" 7. SAIR\n");
            printf(" Opcao: ");
            scanf("%d", &op);
            if((op < 1) || (op > 7)) {
                printf("\n\n Opcao invalida! Tente novamente...\n\n");               
            }
        } while((op < 1) || (op > 7));

        switch(op){

            case 1:
                printf("\n\n 1. Criar lista\n");
                lista1 = criar_lista();                
                    printf("\nLista criada com sucesso!\n");
                    printf("\n\nPressione qualquer tecla para continuar ...");                
                getch();
                break;

            case 2:
                printf("\n\n 2. Verificar lista vazia\n");
                if(lista_vazia(&lista1) == 0){
                    printf("\nLista esta vazia!\n");
                    printf("\n\nPressione qualquer tecla para continuar ...");
                }else{
                    printf("\nLista nao esta vazia!\n");
                    printf("\n\nPressione qualquer tecla para continuar ...");
                }
                getch();
                break;
            
            case 3:
                printf("\n\n 3. Inserir elementoordenado\n");
                printf("\nDigite o nro a ser inserido na lista: ");
                int x;
                scanf("%d", &x);                
                if(insere_elem_ord(&lista1, x) == -1){
                    printf("\nErro ao incluir elemento! Falha ao alocar memoria.\n");
                    printf("\n\nPressione qualquer tecla para continuar ...");                
                } else{                    
                    printf("\nElemento inserido com sucesso!\n");
                    printf("\n\nPressione qualquer tecla para continuar ...");
                }
                getch();                         
                break;            

            case 4:
                printf("\n\n 4. Excluir elemento\n");
                int y;
                printf("Digite o nro a ser removido da lista: ");
                scanf("%d", &y);
                int r = remove_elem_ord(&lista1, y);
                if(r == -1){
                    printf("\nErro ao excluir elemento! Lista vazia.\n");
                    printf("\n\nPressione qualquer tecla para continuar ...");
                }else if(r == -2){
                    printf("\nErro ao excluir! Elemento nao existe na lista.\n");
                    printf("\n\nPressione qualquer tecla para continuar ...");
                }else{                    
                    printf("\nElemento removido com sucesso!\n");
                    printf("\n\nPressione qualquer tecla para continuar ...");
                }
                getch();
                break;            

            case 5:
                printf("\n\n 5. Obter valor\n");
                printf("Digite o valor a ser buscado na lista: ");
                int w;
                scanf("%d", &w);
                if(obtem_valor(&lista1, w) == -1){
                    printf("\nValor nao esta na lista!\n");
                    printf("\n\nPressione qualquer tecla para continuar ...");
                } else {
                    printf("\nO valor %d esta na lista!\n", w);
                    printf("\n\nPressione qualquer tecla para continuar ...");
                }
                getch();
                break;

            case 6:
                printf("\n\n 5. Imprimir lista\n");
                imprime_lista(lista1);
                    printf("\n\nLista impressa com sucesso!\n");
                    printf("\n\nPressione qualquer tecla para continuar ...");
                getch();
                break;

            default:
				printf("\n\nPressione qualquer tecla para FINALIZAR...");
                getch();		            
        }

    } while(op != 7);














    return 0;
}