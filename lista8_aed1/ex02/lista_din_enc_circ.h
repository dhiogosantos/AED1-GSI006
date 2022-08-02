/*

TAD: lista_din_enc_circ

- Dados: Números inteiros

- Lista de operações: create_list, empty_list, insert_elem_end, remove_elem_begin, print_list, size_list, insert_elem_begin, remove_elem_end

Operações:
    create_list:
        Entrada: nenhuma
        Pré-condição: nenhuma
        Processo: faz lista apontar para NULL
        Saída: endereço NULL
        Pós-condição: Nenhuma

    empty_list:
        Entrada: endereço de uma lista
        Pré-condição: lista ser válida
        Processo: verifica o campo prox do último nó, se ele for NULL a lista é vazia
        Saída: 0 (sucesso - lista está vazia) ou -1 (falha - lista não está vazia)
        Pós-condição: nenhuma    

    insert_elem_end:
        Entrada: endereço de uma lista e o elemento (nro inteiro) a ser inserido
        Pré-condição: lista ser válida
        Processo: inserir novo nó na última posição da lista 
        Saída: 0 (sucesso - elemento inserido) ou -1 (falha - elemento não inserido)
        Pós-condição: lista de entrada com um elemento a mais

    remove_elem_begin:
        Entrada: endereço de uma lista e um ponteiro para o elemento a remover
        Pré-condição: lista e endereço do elemento serem válidos e lista não vazia
        Processo: remove o primeiro elemento da lista e altera o valor da variável
        Saída: 0 (sucesso - elemento removido) ou -1 (falha - elemento não removido)
        Pós-condição: lista com um elemento a menos

    print_list:
        Entrada: endereço de uma lista 
        Pré-condição: lista ser válida
        Processo: percorrer a lista imprimindo o conteúdo do campo info de cada nó 
        Saída: nenhuma
        Pós-condição: nenhuma

    size_list:
        Entrada: endereço de uma lista 
        Pré-condição: lista ser válida
        Processo: percorrer a lista imprimindo o conteúdo do campo info de cada nó 
        Saída: 0 (se lista for vazia), -1 (falha - lista não foi inicializada) ou j (contém o tamanho da lista)
        Pós-condição: nenhuma

    insert_elem_begin:
        Entrada: endereço de uma lista 
        Pré-condição: lista ser válida
        Processo: inserir novo nó no começo da lista 
        Saída: 0 (sucesso - elemento inserido) ou -1 (falha - elemento não inserido)
        Pós-condição: lista de entrada com um elemento a mais

    remove_elem_end:
        Entrada: endereço de uma lista 
        Pré-condição: lista ser válida e não vazia
        Processo: remover o último da lista
        Saída: 0 (sucesso - elemento removido) ou -1 (falha - elemento não removido)
        Pós-condição: lista de entrada com um elemento a menos
*/

typedef struct node* List;

List create_list();

void print_list(List lst);

int empty_list(List lst);

int insert_elem_end(List *lst, int elem);

int remove_elem_begin(List *lst, int *elem);

int obtem_valor_elem(List lst, int elem);

int size_list(List lst);

int insert_elem_begin(List *lst, int elem);

int remove_elem_end(List *lst, int *elem);