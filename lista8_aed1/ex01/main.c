#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "lista_din_enc_circ.h"

int main(){

    List list;
    int op;

    do{
        system("CLS || clear");
        do{
            printf(" --- LISTAS DINAMICA ENCADEADA CIRCULAR --- \n\n");
            printf(" Escolha uma opcao:\n");
            printf(" 1. Inicializar lista\n");
            printf(" 2. Verificar lista vazia\n");
            printf(" 3. Inserir elemento no fim da lista\n");
            printf(" 4. Remover no inicio da lista\n");
            printf(" 5. Obter valor do elemento\n");
            printf(" 6. Imprimir lista\n");
            printf(" 7. SAIR\n");
            printf(" Opcao: ");
            scanf("%d", &op);
            if ((op < 1) || (op > 7))
                printf("\n\n Opcao Invalida! Tente novamente...\n\n");
        } while ((op < 1) || (op > 7));

        switch (op){
        case 1:
            printf("\n1. Inicializar lista\n\n");
            list = create_list();
            printf("Lista criada com sucesso. Aperte qualquer tecla para continuar...\n\n");
            
            getch();
            break;

        case 2:
            printf("\n2. Verificar lista vazia\n\n");
            int op2 = empty_list(list);
            if(op2 == -1)
                printf("\nLista nao esta vazia! Aperte qualquer tecla para continuar...\n\n");
            else
                printf("\nLista vazia! Aperte qualquer tecla para continuar...\n\n");
            
            getch();
            break;

        case 3:
            printf("\n3. Inserir elemento no fim da lista\n\n");
            printf("Digite o elemento a ser inserido: ");
            int j;
            scanf("%d", &j);
            if(insert_elem_end(&list, j) == -1)
                printf("\nFalha ao inserir elemento! Lista nao criada ou vazia. Aperte qualquer tecla para continuar...\n\n");
            else
                printf("\nElemento inserido com sucesso. Aperte qualquer tecla para continuar...\n\n");

            getch();
            break;

        case 4:
            printf("\n4. Remover no inicio da lista\n\n");
            int c;
            if(remove_elem_begin(&list, &c) == -1)
                printf("Falha ao remover elemento! Lista nao criada ou vazia. Aperte qualquer tecla para continuar...\n\n");
            else
                printf("Elemento %d removido com sucesso! Aperte qualquer tecla para continuar...\n\n", c);

            getch();
            break;

        case 5:
            printf("\n5. Obter valor do elemento\n\n");
            printf("Digite o elemento a ser verificado: ");
            int p, res5;
            scanf("%d", &p);

            res5 = obtem_valor_elem(list, p);

            if(res5 == -1)
                printf("\nFalha! Lista nao criada ou vazia. Aperte qualquer tecla para continuar...\n\n");
            else if(res5 == -2)
                printf("\nFalha! Elemento nao pertence a lista. Aperte qualquer tecla para continuar...\n\n");
            else
                printf("\nElemento pertence a lista. Aperte qualquer tecla para continuar...\n\n");

            getch();
            break;

        case 6:
            printf("\n6. Imprime Lista\n\n");
            print_list(list);
            printf("\n\nLista impressa com sucesso. Aperte qualquer tecla para continuar...\n\n");

            getch();
            break;

        default:
            printf("\n\nPressione qualquer tecla para FINALIZAR...\n\n");

            getch();
        }
    }while (op != 7);
    return 0;
}