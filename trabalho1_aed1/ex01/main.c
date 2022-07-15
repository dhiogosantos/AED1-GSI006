#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "lista_est_nao_ord.h"

int main(){

   List list1, list2, list3;    
    int op;

    do{              
        system("CLS || CLEAR"); 
        do{
            printf(" --- LISTAS ESTATICAS SEQUENCIAIS NAO ORDENADA --- \n\n");
            printf(" Escolha uma opcao:\n");
            printf(" 1. Inicializar uma lista\n");
            printf(" 2. Verificar se a lista esta vazia\n");
            printf(" 3. Verificar se a lista esta cheia\n");
            printf(" 4. Inserir elemento\n");
            printf(" 5. Remover elemento\n");
            printf(" 6. Remover impares\n");
            printf(" 7. Menor elemento\n");
            printf(" 8. Ordenar lista\n");
            printf(" 9. Tamanho da lista\n");
            printf(" 10. Concatenar listas\n");
            printf(" 11. Imprimir lista\n");
            printf(" 12. SAIR\n");
            printf(" Opcao: ");
            scanf("%d", &op);
            if ((op < 1) || (op > 12))     
                printf("\n\n Opcao Invalida! Tente novamente...\n\n");            
        } while ((op < 1) || (op > 12));

        switch(op){

            case 1:
                printf("\n\n1. Inicializar uma lista\n\n");

                list1 = create_list();
                list2 = create_list();
                list3 = create_list();

                if(list1 == NULL || list2 == NULL || list3 == NULL){
                    printf("\nErro ao criar listas!\n");
                    printf("\n\nAperte qualquer tecla para continuar...");
                }else{
                    printf("\nLista 1, Lista 2 e Lista 3 criadas com sucesso!\n");
                    printf("\n\nAperte qualquer tecla para continuar...");
                }
                getch();
                break;

            case 2:
                printf("\n\n2. Verificar se a lista esta vazia\n\n");
                    int option;

                do{
                    printf("Digite qual lista gostaria de verificar:\n");
                    printf("1 - Lista 1\n2 - Lista 2\n3 - Lista 3\n");
                    printf("Opcao: ");
                    scanf("%d", &option);
                    if((option < 1) || (option > 3))
                        printf("\n\nOpcao invalida! Tente novamente...\n\n");
                } while((option < 1) || (option > 3));
            
                if(option == 1){
                    if(empty_list(list1) == 0){
                        printf("\nLista 1 esta vazia. Aperte qualquer tecla para continuar...\n\n");
                    }else{
                        printf("\nLista 1 nao esta vazia. Aperte qualquer tecla para continuar...\n\n");
                    }
                    getch();
                    break;
                }

                if(option == 2){
                    if(empty_list(list2) == 0){
                        printf("\nLista 2 esta vazia. Aperte qualquer tecla para continuar...\n\n");
                    }else{
                        printf("\nLista 2 nao esta vazia. Aperte qualquer tecla para continuar...\n\n");
                    }
                    getch();
                    break;
                }

                if(option == 3){
                    if(empty_list(list3) == 0){
                        printf("\nLista 3 esta vazia. Aperte qualquer tecla para continuar...\n\n");
                    }else{
                        printf("\nLista 3 nao esta vazia. Aperte qualquer tecla para continuar...\n\n");
                    }
                    getch();
                    break;
                }

            case 3:
                printf("\n\n3. Verificar se a lista esta cheia\n\n");
                    int option12;

                do{
                    printf("Digite qual lista gostaria de verificar:\n");
                    printf("1 - Lista 1\n2 - Lista 2\n3 - Lista 3\n");
                    printf("Opcao: ");
                    scanf("%d", &option12);
                    if((option12 < 1) || (option12 > 3))
                        printf("\n\nOpcao invalida! Tente novamente...\n\n");
                } while((option12 < 1) || (option12 > 3));
            
                if(option12 == 1){
                    if(full_list(list1) == 0){
                        printf("\nLista 1 esta cheia. Aperte qualquer tecla para continuar...\n\n");
                    }else{
                        printf("\nLista 1 nao esta cheia. Aperte qualquer tecla para continuar...\n\n");
                    }
                    getch();
                    break;
                }

                if(option12 == 2){
                    if(full_list(list2) == 0){
                        printf("\nLista 2 esta cheia. Aperte qualquer tecla para continuar...\n\n");
                    }else{
                        printf("\nLista 2 nao esta cheia. Aperte qualquer tecla para continuar...\n\n");
                    }
                    getch();
                    break;
                }

                if(option12 == 3){
                    if(full_list(list3) == 0){
                        printf("\nLista 3 esta cheia. Aperte qualquer tecla para continuar...\n\n");
                    }else{
                        printf("\nLista 3 nao esta cheia. Aperte qualquer tecla para continuar...\n\n");
                    }
                    getch();
                    break;
                }


            case 4:
                printf("\n\n4. Inserir elemento\n\n");
                int opcao2;

                do{
                    printf("Digite em qual lista gostaria de inserir:\n");
                    printf("1 - Lista 1\n2 - Lista 2\n");
                    printf("Opcao: ");
                    scanf("%d", &opcao2);
                    if((opcao2 < 1) || (opcao2 > 2))
                        printf("\n\nOpcao invalida! Tente novamente...\n\n");
                } while((opcao2 < 1) || (opcao2 > 3));

                printf("\nDigite o nro a ser inserido: ");
                    int z;           
                    scanf("%d", &z);

                if(opcao2 == 1){                
                    if(insert_elem(list1, z) == 0){
                        printf("\nElemento inserido com sucesso!\n");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }else{
                        printf("\nErro ao inserir elemento! Lista cheia ou nao foi criada.\n");
                        printf("\n\nAperte qualquer tecla para continuar...");                    
                    }
                    getch();
                    break;
                }

                if(opcao2 == 2){                
                    if(insert_elem(list2, z) == 0){
                        printf("\nElemento inserido com sucesso!\n");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }else{
                        printf("\nErro ao inserir elemento! Lista cheia ou nao foi criada.\n");
                        printf("\n\nAperte qualquer tecla para continuar...");                    
                    }
                    getch();
                    break;
                }

                if(opcao2 == 3){                
                    if(insert_elem(list3, z) == 0){
                        printf("\nElemento inserido com sucesso!\n");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }else{
                        printf("\nErro ao inserir elemento! Lista cheia ou nao foi criada.\n");
                        printf("\n\nAperte qualquer tecla para continuar...");                    
                    }
                    getch();
                    break;
                }

            case 5:
                printf("\n\n5. Remover elemento\n\n");
                
                int elem, option3;

                do{
                    printf("Digite de qual lista gostaria de remover:\n");
                    printf("1 - Lista 1\n2 - Lista 2\n3 - Lista 3\n");
                    printf("Opcao: ");
                    scanf("%d", &option3);
                    if((option3 < 1) || (option3 > 3))
                        printf("\n\nOpcao invalida! Tente novamente...\n\n");                    
                } while((option3 < 1) || (option3 > 3));

                printf("\nDigite o elemento a ser removido: ");                
                scanf("%d", &elem);

                if(option3 == 1){
                    int r = remove_elem(list1, elem);
                    if(r == -1){
                        printf("\nErro ao remover! Lista 1 nao foi criada ou esta vazia.");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }else if(r == -2){
                        printf("\nErro ao remover! Elemento nao existe na lista 1.\n");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }else
                        printf("\nElemento removido com sucesso!\n");
                        printf("\n\nAperte qualquer tecla para continuar...");
                getch();
                break;
                } 
        

                if(option3 == 2){
                    int r1 = remove_elem(list2, elem);
                    if(r1 == -1){
                        printf("\nErro ao remover! Lista 2 nao foi criada ou esta vazia.");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }else if(r1 == -2){
                        printf("\nErro ao remover! Elemento nao existe na lista 2.\n");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }else{
                        printf("\nElemento removido com sucesso!\n");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }
                getch();
                break; 
                }    

                if(option3 == 3){
                    int r2 = remove_elem(list3, elem);
                    if(r2 == -1){
                        printf("\nErro ao remover! Lista 3 nao foi criada ou esta vazia.");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }else if(r2 == -2){
                        printf("\nErro ao remover! Elemento nao existe na lista 3.\n");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }else{
                        printf("\nElemento removido com sucesso!\n");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }
                getch();
                break; 
                }


            case 6:
                printf("\n\n6. Remover impares\n\n");
                int option4;

                do{
                    printf("Digite de qual lista gostaria de remover os impares:\n");
                    printf("1 - Lista 1\n2 - Lista 2\n3 - Lista 3\n");
                    printf("Opcao: ");
                    scanf("%d", &option4);
                    if((option4 < 1) || (option4 > 3))
                        printf("\n\nOpcao invalida! Tente novamente...\n\n");
                } while((option4 < 1) || (option4 > 3));

                if(option4 == 1){
                    int ro = remove_odd(list1);
                    if(ro == -1){
                        printf("\nErro ao remover! Lista 1 nao foi criada ou esta vazia.");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }else if(ro == -2){
                        printf("Erro ao remover! Nao existe impares na lista 1.\n");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }else{
                        printf("\nElemento(s) removido com sucesso!\n");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }
                    getch();
                    break; 
                }

                 if(option4 == 2){
                    int ro1 = remove_odd(list2);
                    if(ro1 == -1){
                        printf("\nErro ao remover! Lista 2 nao foi criada ou esta vazia.");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }else if(ro1 == -2){
                        printf("Erro ao remover! Nao existe impares na lista 2.\n");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }else{
                        printf("\nElemento(s) removido com sucesso!\n");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }
                    getch();
                    break; 
                }

                if(option4 == 3){
                    int ro2 = remove_odd(list3);
                    if(ro2 == -1){
                        printf("\nErro ao remover! Lista 3 nao foi criada ou esta vazia.");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }else if(ro2 == -2){
                        printf("Erro ao remover! Nao existe impares na lista 3.\n");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }else{
                        printf("\nElemento(s) removido com sucesso!\n");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }
                    getch();
                    break; 
                }

            case 7:
                printf("\n\n7. Menor elemento\n\n");
                int option5;

                do{
                    printf("Digite qual lista gostaria de verificar:\n");
                    printf("1 - Lista 1\n2 - Lista 2\n3 - Lista 3\n");
                    printf("Opcao: ");
                    scanf("%d", &option5);
                    if((option5 < 1) || (option5 > 3))
                        printf("\n\nOpcao invalida! Tente novamente...\n\n");
                } while((option5 < 1) || (option5 > 3));

                if(option5 == 1){
                    int me = smallest_elem(list1);
                    if(me == -1){
                        printf("\nErro ao retornar o menor elemento! Lista 1 nao foi criada ou esta vazia.");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }else{
                        printf("\nMenor elemento da lista 1 eh: %d.\n", me);
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }                   
                    getch();
                    break; 
                }

                if(option5 == 2){
                    int me1 = smallest_elem(list2);
                    if(me1 == -1){
                        printf("\nErro ao retornar o menor elemento! Lista 2 nao foi criada ou esta vazia.");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }else{
                        printf("\nMenor elemento da lista 2 eh: %d.\n", me1);
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }                   
                    getch();
                    break; 
                }

                if(option5 == 3){
                    int me2 = smallest_elem(list3);
                    if(me2 == -1){
                        printf("\nErro ao retornar o menor elemento! Lista 3 nao foi criada ou esta vazia.");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }else{
                        printf("\nMenor elemento da lista 3 eh: %d.\n", me2);
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }                   
                    getch();
                    break; 
                }
            
            case 8:
                printf("\n\n8. Ordenar lista\n\n");
                int option6;

                do{
                    printf("Digite qual lista gostaria de ordenar:\n");
                    printf("1 - Lista 1\n2 - Lista 2\n3 - Lista 3\n");
                    printf("Opcao: ");
                    scanf("%d", &option6);
                    if((option6 < 1) || (option6 > 3))
                        printf("\n\nOpcao invalida! Tente novamente...\n\n");
                } while((option6 < 1) || (option6 > 3));
            
                if(option6 == 1){
                    if(order_list(list1) == 0){
                        printf("\nLista 1 ordenada com sucesso!\n");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }else{
                        printf("\nErro ao ordenar! Lista 1 nao foi criada ou esta vazia!\n");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }
                    getch();
                    break;
                }

                if(option6 == 2){
                    if(order_list(list2) == 0){
                        printf("\nLista 2 ordenada com sucesso!\n");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }else{
                        printf("\nErro ao ordenar! Lista 2 nao foi criada ou esta vazia!\n");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }
                    getch();
                    break;
                }

                if(option6 == 3){
                    if(order_list(list3) == 0){
                        printf("\nLista 3 ordenada com sucesso!\n");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }else{
                        printf("\nErro ao ordenar! Lista 3 nao foi criada ou esta vazia!\n");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }
                    getch();
                    break;
                }

            case 9:
                printf("\n\n9. Tamanho da lista\n\n");
                    int option7;

                do{
                    printf("Digite qual lista gostaria de verificar o tamanho:\n");
                    printf("1 - Lista 1\n2 - Lista 2\n3 - Lista 3\n");
                    printf("Opcao: ");
                    scanf("%d", &option7);
                    if((option7 < 1) || (option7 > 3))
                        printf("\n\nOpcao invalida! Tente novamente...\n\n");
                } while((option7 < 1) || (option7 > 3));
        
                if(option7 == 1){
                    int tam = list_size(list1);
                    if(tam == -1){
                        printf("\nErro ao retornar tamanho! Lista 1 nao foi criada ou esta vazia!\n");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }else {
                        printf("\nTamanho da lista 1 eh: %d.\n", tam);
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }
                    getch();
                    break;     
                }

                if(option7 == 2){
                    int tam1 = list_size(list2);
                    if(tam1 == -1){
                        printf("\nErro ao retornar tamanho! Lista 2 nao foi criada ou esta vazia!\n");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }else {
                        printf("\nTamanho da lista 2 eh: %d.\n", tam1);
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }
                    getch();
                    break;     
                }

                if(option7 == 3){
                    int tam3 = list_size(list3);
                    if(tam3 == -1){
                        printf("\nErro ao retornar tamanho! Lista 3 nao foi criada ou esta vazia!\n");
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }else {
                        printf("\nTamanho da lista 3 eh: %d.\n", tam3);
                        printf("\n\nAperte qualquer tecla para continuar...");
                    }
                    getch();
                    break;     
                }
            
            case 10:
                printf("\n\n10. Concatenar listas\n\n");
                int conc = concat_list(list1, list2, list3);

                if(conc == -1)
                    printf("\nErro ao concatenar listas. Espaco insuficiente.\n");
                else
                    printf("\nLista 1 e Lista 2 concatenadas com sucesso.\n");

                printf("\n\nAperte qualquer tecla para continuar...");
                getch();
                break;                

            case 11:
                printf("\n\n11. Imprimir lista\n\n");
                    int option10;

                do{
                    printf("Digite qual lista gostaria de imprimir:\n");
                    printf("1 - Lista 1\n2 - Lista 2\n3 - Lista 3\n");
                    printf("Opcao: ");
                    scanf("%d", &option10);
                    if((option10 < 1) || (option10 > 3))
                        printf("\n\nOpcao invalida! Tente novamente...\n\n");
                } while((option10 < 1) || (option10 > 3));

                if(option10 == 1){
                    printf("\nLista %d: ", option10);
                    print_list(list1);
                }                    
            
                if(option10 == 2){
                    printf("\nLista %d: ", option10);
                    print_list(list2);
                }                    

                if(option10 == 3){
                    printf("\nLista %d: ", option10);
                    print_list(list3);
                }                    

                printf("\nLista impressa com sucesso!\n");
                printf("\n\nAperte qualquer tecla para continuar...");

                getch();
                break;

            default:
				printf("\n\nPressione qualquer tecla para FINALIZAR... \n\n");
                getch();			
            
        }
    } while(op != 12);
    
    return 0;    
}