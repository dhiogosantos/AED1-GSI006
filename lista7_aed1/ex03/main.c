#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "lista_din_enc_bebidas_header.h"

int main(){

    int op;
    Lista lst1;

    do{
        system("CLS || clear");

        do{
            printf(" --- LISTA DINAMICA ENCADEADA COM NO CABECALHO --- \n\n");
            printf(" Escolha uma opcao:\n");
            printf(" 1. Inicializar uma lista\n");
            printf(" 2. Verificar lista vazia\n");
            printf(" 3. Inserir bebida\n");
            printf(" 4. Remover bebida\n");
            printf(" 5. Verificar se bebida esta na lista\n");
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

            int res1;

            res1 = criar_lista(&lst1);                

            if(res1 == -1)
                printf("Falha ao criar lista. Aperte qualquer tecla para continuar...\n\n");
            else
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
            printf("\n3. Inserir bebida\n\n");
            char nome[20];
            int volume, res3;
            float preco;

            printf("Digite o nome da bebida a ser inserida: ");
            fflush(stdin);
            fgets(nome, 20, stdin);

            printf("\nDigite o volume (ml): ");
            scanf("%d", &volume);

            printf("\nDigite o preco: R$ ");
            scanf("%f", &preco);

            res3 = insere_elem(lst1, nome, volume, preco);
            
            if(res3 == -1)
                printf("\nFalha ao inserir bebida na lista. Falha ao alocar memoria. Aperte qualquer tecla para continuar...\n\n");                
            else
                printf("\nBebida inserida na lista com sucesso. Aperte qualquer tecla para continuar...\n\n");

            getch();
            break;

        case 4:
            printf("\n4. Remover bebida\n\n");
            int res4;
            char remover[20];

            printf("Digite a bebida a ser removida: ");                
            fflush(stdin);
            fgets(remover, 20, stdin);

            res4 = remove_elem(lst1, remover);
            
            if (res4 == -1)
                printf("\nFalha ao remover bebida pois lista esta vazia! Aperte qualquer tecla para continuar...\n\n");
            else if(res4 == -2)
                printf("\nFalha ao remover bebida pois nao pertence a lista. Aperte qualquer tecla para continuar\n\n");
            else
                printf("\nBebida removida com sucesso. Aperte qualquer tecla para continuar...\n\n");

            getch();
            break;

        case 5:
            printf("\n5. Verificar se elemento esta na lista\n\n");
            int res5;
            char consulta[20];

            printf("Digite o nome da bebida a ser consultada: ");
            fflush(stdin);
            fgets(consulta, 20, stdin);
        
            res5 = obtem_valor_elem(lst1, consulta);
            
            if (res5 == -1)
                printf("\nLista esta vazia! Aperte qualquer tecla para continuar...\n\n");
            else if(res5 == 0)
                printf("\nBebida pertence a lista. Aperte qualquer tecla para continuar\n\n");
            else
                printf("\nBebida nao pertence a lista. Aperte qualquer tecla para continuar...\n\n");

            getch();
            break;           

        case 6:
            printf("\n6. Imprime lista de bebidas\n\n");
            
            imprime_lista(lst1);            
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
