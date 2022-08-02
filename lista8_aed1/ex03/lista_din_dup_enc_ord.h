/*
TAD: lista_din_dup_enc_ord
- Dados: Números inteiros
- Lista de operações: create_list, empty_list, insert_elem_ord, remove_elem, print_list, obtem_valor_elem
Operações:
    create_list:
        Entrada: nenhuma
        Pré-condição: nenhuma
        Processo: cria uma lista e deixa ela no estado de vazia
        Saída: endereço da lista criada
        Pós-condição: Nenhuma

    empty_list:
        Entrada: entrada de uma lista
        Pré-condição: lista ser válida
        Processo: verifica se a lista está na condição de vazia
        Saída: 0 (sucesso - lista está vazia) ou -1 (falha - lista não está vazia)
        Pós-condição: nenhuma  

    insert_elem_ord:
        Entrada: endereço de uma lista e o elemento (nro inteiro) a ser inserido
        Pré-condição: lista ser válida
        Processo: inserir novo nó em sua posição ordenada da lista
        Saída: 0 (sucesso - elemento inserido) ou -1 (falha - elemento não inserido)
        Pós-condição: lista ordenada de entrada com um elemento a mais   

    remove_elem:
        Entrada: endereço de uma lista e o elemento (nro inteiro) a ser removido
        Pré-condição: lista ser válida e não estar vazia
        Processo: percorrer a lista até encontrar o elemento desejado ou até chegar ao seu final. Se o elemento existe, remova-o da lista
        Saída: 0 (sucesso - elemento removido) ou -1 (falha - elemento não removido)
        Pós-condição: lista ordenada de entrada com um elemento a menos

    print_list:
        Entrada: endereço de uma lista 
        Pré-condição: lista ser válida
        Processo: percorrer a lista imprimindo o conteúdo do campo info de cada nó 
        Saída: nenhuma
        Pós-condição: nenhuma

    obtem_valor_elem:
        Entrada: endereço de uma lista 
        Pré-condição: lista ser válida
        Processo: percorrer a lista e verifica se o elemento pertence a lista 
        Saída: 0 (sucesso - elemento pertence a lista), -1 (falha - lista vazia) ou -2 (falha - elemento não pertence a lista)
        Pós-condição: nenhuma
*/

typedef struct node *List;

List create_list();

void print_list(List lst);

int empty_list(List lst);

int insert_elem_ord(List *lst, int elem);

int remove_elem(List *lst, int elem);

int obtem_valor_elem(List lst, int elem);