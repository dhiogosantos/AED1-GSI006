#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "lista_din_enc_rec.h"

int main(){

    int op;
    Lista lst1;

    do{
        system("CLS || clear");

        do{
            printf(" --- LISTA DINAMICA ENCADEADA ORDENADA RECURSIVA --- \n\n");
            printf(" Escolha uma opcao:\n");
            printf(" 1. Inicializar uma lista\n");
            printf(" 2. Verificar lista vazia\n");
            printf(" 3. Inserir elemento ordenado\n");
            printf(" 4. Remover elemento\n");
            printf(" 5. Verificar se elemento esta na lista\n");
            printf(" 6. Imprimir lista\n");
            printf(" 7. SAIR\n");
            printf(" Opcao: ");
            scanf("%d", &op);
            if ((op < 1) || (op > 7))
                printf("\n\n Opcao Invalida! Tente novamente...\n\n");            
        } while ((op < 1) || (op > 7));

        switch (op){

        case 1:
            printf("\n1. Inicializar uma lista\n\n");

            lst1 = criar_lista();                

            printf("Lista criada com sucesso. Aperte qualquer tecla para continuar...\n\n");

            getch();
            break;

        case 2:
            printf("\n2. Verificar lista vazia\n\n");
            
            if(lista_vazia(lst1) == 0)
                printf("\nA lista esta vazia. Aperte qualquer tecla para continuar...\n\n");
            else
                printf("\nA lista nao esta vazia. Aperte qualquer tecla para continuar...\n\n");

            getch();
            break;
                       
        case 3:
            printf("\n3. Inserir elemento ordenado\n\n");
            int j;

            printf("Digite o elemento a ser inserido: ");  
            scanf("%d", &j);
            
            if(insere_elem_ord(&lst1, j) == -1)
                printf("\nFalha ao inserir elemento %d na lista. Falha ao alocar memoria. Aperte qualquer tecla para continuar...\n\n", j);                
            else
                printf("\nElemento %d inserido na lista com sucesso. Aperte qualquer tecla para continuar...\n\n", j);

            getch();
            break;            

        case 4:
            printf("\n4. Remover elemento\n\n");
            int x, res4;

            printf("Digite o elemento a ser removido: ");                
            scanf("%d", &x);

            res4 = remove_elem(&lst1, x);
            
            if (res4 == -1)
                printf("\nFalha ao remover elemento pois lista esta vazia! Aperte qualquer tecla para continuar...\n\n");
            else if(res4 == -2)
                printf("\nFalha ao remover o elemento nao pertence a lista. Aperte qualquer tecla para continuar\n\n");
            else
                printf("\nElemento removido com sucesso. Aperte qualquer tecla para continuar...\n\n");

            getch();
            break;

        case 5:
            printf("\n5. Verificar se elemento esta na lista\n");
            int y, res5;

            printf("\nDigite o elemento a ser verificado: ");                
            scanf("%d", &y);

            res5 = obtem_valor_elem(&lst1, y);
            
            if (res5 == -1)
                printf("\nFalha pois a lista esta vazia! Aperte qualquer tecla para continuar...\n\n");
            else if(res5 == -2)
                printf("\nElemento %d nao pertence a lista. Aperte qualquer tecla para continuar...\n\n", y);
            else if(res5 == 0)
                printf("\nElemento %d pertence a lista. Aperte qualquer tecla para continuar...\n\n", y);
            else
                printf("\nElemento %d nao pertence a lista. Aperte qualquer tecla para continuar...\n\n", y);

            getch();
            break;           

        case 6:
            printf("\n6. Imprimir lista\n\n");
           
            printf("Lista: {");
            imprime_lista(lst1);
            printf("}");
            
            printf("\n\nLista impressa com sucesso. Aperte qualquer tecla para continuar...\n\n");       

            getch();
            break;

        default:
            printf("\n\n Pressione qualquer tecla para FINALIZAR...\n\n");
            getch();
        }
    } while (op != 7);





    return 0;
}