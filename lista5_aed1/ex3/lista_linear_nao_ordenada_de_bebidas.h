/*

TAD lista_linear_nao_ordenada_de_bebidas

    - Dados: struct Bebida (nome, volume, valor)

    - Lista de operações: insere_registro, apaga_ultimo_registro, imprime_tabela, lista_vazia, lista_cheia, criar_lista

Operações:

    criar_lista:
        Entrada: nenhuma
        Pré-condição: nenhuma
        Processo: cria uma lista e deixa ela no estado de vazia
        Saída: endereço da lista criada
        Pós-condição: Nenhuma

    insere_registro:
        Entrada: nenhuma
        Pré-condição: nenhuma
        Processo: cria uma lista e deixa ela no estado de vazia
        Saída: endereço da lista criada
        Pós-condição: Nenhuma    

    apaga_ultimo_registro:
        Entrada: endereço de uma lista e o elemento (nome) a ser apagado
        Pré-condição: lista ser válida e não estar vazia
        Processo: excluir o elemento da lista 
        Saída: 0 (sucesso - elemento inserido) ou -1 (falha - elemento não inserido) 
        Pós-condição: a lista de entrada com um elemento a menos

    imprime_tabela:
        Entrada: endereço de uma lista
        Pré-condição: lista ser válida e não estar vazia
        Processo: percorrer a lista e imprimir cada posição
        Saída: 0 (sucesso - elemento removido) ou -1 (falha - elemento não removido)
        Pós-condição: nenhuma

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
     

*/

#define max 10

typedef struct lista *Lista;

typedef struct bebida Bebida;

Lista criar_lista();

int lista_vazia(Lista l);

int lista_cheia(Lista l);

int insere_elem(Lista l, char *nome, int volume, float preco);

int remove_elem(Lista l, char *nome);

int imprime_lista(Lista l);