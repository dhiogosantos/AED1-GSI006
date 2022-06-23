#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "lista_linear_nao_ordenada_de_inteiros.h"

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
            printf(" 4. Inserir elemento\n");          
            printf(" 5. Excluir elemento\n");            
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
                if(lista1 == NULL){
                    printf("\nErro ao criar lista!\n");
                    printf("\n\nPressione qualquer tecla para continuar ...");
                }else{
                    printf("\nLista criada com sucesso!\n");
                    printf("\n\nPressione qualquer tecla para continuar ...");
                }
                getch();
                break;

            case 2:
                printf("\n\n 2. Verificar lista vazia\n");
                if(lista_vazia(lista1) == 0){
                    printf("\nLista esta vazia!\n");
                    printf("\n\nPressione qualquer tecla para continuar ...");
                }else{
                    printf("\nLista esta cheia!\n");
                    printf("\n\nPressione qualquer tecla para continuar ...");
                }
                getch();
                break;

            case 3:
                printf("\n\n 3. Verificar lista cheia\n");
                if(lista_cheia(lista1) == 0){
                    printf("\nLista esta cheia!\n");
                    printf("\n\nPressione qualquer tecla para continuar ...");
                }else{
                    printf("\nLista nao esta cheia!\n");
                    printf("\n\nPressione qualquer tecla para continuar ...");
                }
                getch();                
                break;

            case 4:
                printf("\n\n 4. Inserir elemento\n");
                printf("\nDigite o nro a ser inserido na lista: ");
                int x;
                scanf("%d", &x);             
                if(insere_elem_final(lista1, x) == -1){
                    printf("\nErro ao incluir elemento! Lista cheia ou nao foi criada.\n");
                    printf("\n\nPressione qualquer tecla para continuar ...");
                }else{                    
                    printf("\nElemento inserido com sucesso!\n");
                    printf("\n\nPressione qualquer tecla para continuar ...");
                }
                getch();                         
                break;            

            case 5:
                printf("\n\n 5. Excluir elemento\n");
                int y;
                printf("Digite o nro a ser removido da lista: ");
                scanf("%d", &y);
                int r = remove_elem(lista1, y);
                if(r == -1){
                    printf("\nErro ao excluir elemento! Lista vazia ou nao foi criada.\n");
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

            case 6:
                printf("\n\n 8. Imprimir lista\n");
                if(imprime_lista(lista1) == 0){
                    printf("\nLista impressa com sucesso!\n");
                    printf("\n\nPressione qualquer tecla para continuar ...");
                }else{                    
                    printf("\nErro ao imprimir! Lista vazia ou nao foi criada.\n");
                    printf("\n\nPressione qualquer tecla para continuar ...");       
                }
                getch();
                break;

            default:
				printf("\n\nPressione qualquer tecla para FINALIZAR...");
                getch();		
            
        }
    } while(op != 7);
   
    return 0;
}
    
