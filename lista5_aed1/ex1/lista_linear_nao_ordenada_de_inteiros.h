/*
TAD lista_linear_nao_ordenada_de_inteiros

    - Dados: números inteiros

    - Lista de operações: criar_lista, lista_vazia, lista_cheia, insere_elem_final, remove_elem e obtem_valor_elem

Operações:

    criar_lista:
        Entrada: nenhuma
        Pré-condição: nenhuma
        Processo: cria uma lista e deixa ela no estado de vazia
        Saída: endereço da lista criada
        Pós-condição: Nenhuma

    lista_vazia:
        Entrada: entrada de uma lista
        Pré-condição: lista ser válida
        Processo: verifica se a lista está na condição de vazia
        Saída: 0 (sucesso - lista está vazia) ou -1 (falha - lista não está vazia)
        Pós-condição: nenhuma

    lista_cheia:
        Entrada: endereço de uma lista
        Pré-condição: lista ser válida
        Processo: verifica se a lista está na condição de cheia
        Saída: 0 (sucesso - lista está cheia) ou -1 (falha - lista não está cheia)
        Pós-condição: nenhuma

    insere_elem_final:
        Entrada: endereço de uma lista e o elemento (nro inteiro) a ser inserido
        Pré-condição: lista ser válida e não estar cheia
        Processo: inserir o elemento no final da lista 
        Saída: 0 (sucesso - elemento inserido) ou -1 (falha - elemento não inserido) 
        Pós-condição: a lista de entrada com um número a mais

    remove_elem:
        Entrada: endereço de uma lista e o elemento (nro inteiro) a ser removido
        Pré-condição: lista ser válida e não estar vazia
        Processo: percorrer a lista até encontrar o elemento desejado ou chegar ao chegar ao seu final. Se o elemento existe, remova-o da lista
        Saída: 0 (sucesso - elemento removido) ou -1 (falha - elemento não removido)
        Pós-condição: lista de entrada com um elemento a menos

    obtem_valor_elem:
        Entrada: endereço de uma lista
        Pré-condição: lista ser válida e não estar vazia
        Processo: percorrer o índice da lista até o desejado e obter o seu valor
        Saída: o valor contido dentro do índice
        Pós-condição: nenhuma

*/

#define max 20

typedef struct lista *Lista;

Lista criar_lista();

int lista_vazia(Lista l);

int lista_cheia(Lista l);

int insere_elem_final(Lista l, int elem);

int remove_elem(Lista l, int elem);

int imprime_lista(Lista l);