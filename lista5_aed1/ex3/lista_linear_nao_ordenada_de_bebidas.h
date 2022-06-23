/*

TAD lista_linear_nao_ordenada_de_bebidas

    - Dados: números inteiros

    - Lista de operações: insere_registro, apaga_ultimo_registro, imprime_tabela

Operações:

    insere_registro:
        Entrada: nenhuma
        Pré-condição: nenhuma
        Processo: cria uma lista e deixa ela no estado de vazia
        Saída: endereço da lista criada
        Pós-condição: Nenhuma    

    apaga_ultimo_registro:
        Entrada: endereço de uma lista e o elemento (nro inteiro) a ser inserido
        Pré-condição: lista ser válida e não estar cheia
        Processo: inserir o elemento no final da lista 
        Saída: 0 (sucesso - elemento inserido) ou -1 (falha - elemento não inserido) 
        Pós-condição: a lista de entrada com um número a mais

    imprime_tabela:
        Entrada: endereço de uma lista e o elemento (nro inteiro) a ser removido
        Pré-condição: lista ser válida e não estar vazia
        Processo: percorrer a lista até encontrar o elemento desejado ou chegar ao chegar ao seu final. Se o elemento existe, remova-o da lista
        Saída: 0 (sucesso - elemento removido) ou -1 (falha - elemento não removido)
        Pós-condição: lista de entrada com um elemento a menos    

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