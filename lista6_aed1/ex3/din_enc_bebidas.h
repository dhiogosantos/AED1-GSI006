/*

TAD: din_enc_bebidas

- Dados: Estrutura bebida (nome, volume, preço)

- Lista de operações: criar_lista, lista_vazia, insere_elem_inicio, remove_elem e obtem_valor_elem

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

    insere_elem_inicio:
        Entrada: endereço de uma lista e o elemento (nro inteiro) a ser inserido
        Pré-condição: lista ser válida
        Processo: inserir novo nó no início da lista
        Saída: 0 (sucesso - elemento removido) ou -1 (falha - elemento não inserido)
        Pós-condição: lista de entrada com um elemento a mais

    remove_elem:
        Entrada: endereço de uma lista e o elemento (nro inteiro) a ser removido
        Pré-condição: lista ser válida e não estar vazia
        Processo: percorrer a lista até encontrar o elemento desejado ou chegar ao chegar ao seu final. Se o elemento existe, remova-o da lista
        Saída: 0 (sucesso - elemento removido) ou -1 (falha - elemento não removido)
        Pós-condição: lista de entrada com um elemento a menos

    obtem_valor_elem:
        Entrada: endereço de uma lista
        Pré-condição: lista ser válida e não estar vazia
        Processo: inserir o elemento que deseja verificar, entao percorre a lista até obter o seu valor
        Saída: o valor contido dentro do índice
        Pós-condição: nenhuma
*/

typedef struct bebida{
    char nome[20];
    int volume;
    float preco;
} Bebida;

typedef struct no *Lista;

Lista criar_lista();

int lista_vazia(Lista *l);

int insere_elem_inicio(Lista *l, int elem);

int remove_elem(Lista *l, int elem);

int obtem_valor (Lista *l, int elem);

void imprime_lista(Lista l);

