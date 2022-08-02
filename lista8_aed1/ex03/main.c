#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "lista_din_dup_enc_ord.h"

int main(){

    List lst1;
    int op;

    do{
        system("CLS || clear");
        do{
            printf(" --- LISTA DINAMICA DUPLAMENTE ENCADEADA ORDENADA --- \n\n");
            printf(" Escolha uma opcao:\n");
            printf(" 1. Inicializar lista\n");
            printf(" 2. Verificar lista vazia\n");
            printf(" 3. Inserir elemento ordenado\n");
            printf(" 4. Remover elemento\n");
            printf(" 5. Obter valor do elemento\n");
            printf(" 6. Imprimir Lista\n");
            printf(" 7. SAIR\n");
            printf(" Opcao: ");
            scanf("%d", &op);
            if ((op < 1) || (op > 7))
                printf("\n\n Opcao Invalida! Tente novamente...\n\n");
            
        } while ((op < 1) || (op > 7));

        switch (op){

            case 1:
                printf("\n1. Inicializar uma lista\n\n");
                lst1 = create_list();
                
                printf("Lista criada com sucesso. Aperte qualquer tecla para continuar...\n\n");
                
                getch();
                break;

            case 2:
                printf("\n2. Verificar lista vazia\n\n");
            
                if(empty_list(lst1) == 0)
                    printf("Lista esta vazia! Aperte qualquer tecla para continuar...\n\n");
                else
                    printf("Lista nao esta vazia! Aperte qualquer tecla para continuar...\n\n");

                getch();
                break;          

            case 3:
                printf("\n3. Inserir elemento ordenado\n\n");

                int z, res3;

                printf("Digite o elemento a ser inserido: ");
                scanf("%d", &z);

                res3 = insert_elem_ord(&lst1, z);

                if(res3 == -1)
                    printf("\nErro ao inserir elemento! Aperte qualquer tecla para continuar...\n\n");
                else
                    printf("\nElemento inserido com sucesso! Aperte qualquer tecla para continuar...\n\n");
                    
                getch();
                break;

            case 4:
                printf("\n4. Remover elemento\n\n");
                int y, res4;

                printf("Digite o elemento a ser removido: ");
                scanf("%d", &y);

                res4 = remove_elem(&lst1, y);

                if(res4 == -1)
                    printf("\nFalha ao remover elemento pois a lista esta vazia. Aperte qualquer tecla para continuar...\n\n");                    
                else if(res4 == -2)
                    printf("\nFalha ao remover elemento pois nao pertence a lista. Aperte qualquer tecla para continuar...\n\n");
                else
                    printf("\nElemento removido com sucesso. Aperte qualquer tecla para continuar...\n\n");
                    
                getch();
                break;
            
            case 5:
                printf("\n5. Obter valor do elemento\n\n");
                int p, res5;

                printf("Digite o elemento a ser verificado: ");
                scanf("%d", &p);

                res5 = obtem_valor_elem(lst1, p);

                if(res5 == -1)
                    printf("\nFalha pois a lista esta vazia! Aperte qualquer tecla para continuar...\n\n");                    
                else if(res5 == -2)
                    printf("\nElemento nao pertence a lista! Aperte qualquer tecla para continuar...\n\n");
                else
                    printf("\nElemento pertence a lista! Aperte qualquer tecla para continuar...\n\n");
                    
                getch();
                break;

            case 6:
                printf("\n6. Imprime Lista\n\n");
                                  
                printf("\nLista : {");
                print_list(lst1);
                printf("}\n");

                printf("\nLista impressa com sucesso. Aperte qualquer tecla para continuar...\n\n");
                
                getch();
                break;

            default:
                printf("\n\n Pressione qualquer tecla para FINALIZAR...\n\n");
                getch();
        }
    } while (op != 7);

    return 0;
}