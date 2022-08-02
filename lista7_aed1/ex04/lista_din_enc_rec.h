/*
TAD: lista dinamica encadeada recursiva

- Dados = Números inteiros

- Lista de operações: criar_lista, lista_vazia, insere_elem_ord, remove_elem, obtem_valor_elem, imprime_lista

Operações:
    criar_lista:
        Entrada: endereço de uma lista
        Pré-condição: lista ser válida
        Processo: fazer o ponteiro principal apontar para NULL
        Saída: endereço NULL
        Pós-condição: Nenhuma

    lista_vazia:
        Entrada: endereço de uma lista
        Pré-condição: lista ser válida
        Processo: verifica se a lista contém algum nó
        Saída: 0 (sucesso - lista está vazia) ou -1 (falha - lista não está vazia)
        Pós-condição: nenhuma    

    insere_elem_ord:
        Entrada: endereço de uma lista e o elemento (nro inteiro) a ser inserido
        Pré-condição: lista ser válida
        Processo: inserir novo nó na posição correta 
        Saída: 0 (sucesso - elemento inserido) ou -1 (falha - elemento não inserido)
        Pós-condição: lista de entrada com um elemento a mais

    remove_elem:
        Entrada: endereço de uma lista
        Pré-condição: lista ser válida
        Processo: verifica se a lista é vazia, caso não, percorre a lista até o conteúdo do nó ser menor que o elemento
        Saída: 0 (sucesso - elemento removido), -1 (falha - lista está vazia) ou -2 (falha - elemento não existe na lista)
        Pós-condição: lista de entrada com um elemento a menos

    obtem_valor_elem:
        Entrada: endereço de uma lista
        Pré-condição: lista ser válida
        Processo: percorre a lista e verifica se o elemento pertence a lista
        Saída: 0 (sucesso - elemento pertençe a lista), -1 (falha - lista vazia) ou -2 (falha - elemento não pertence a lista)
        Pós-condição: nenhuma

    imprime_lista:
        Entrada: endereço de uma lista
        Pré-condição: lista ser válida
        Processo: percorre a lista e imprime o campo info de cada nó
        Saída: nenhuma
        Pós-condição: nenhuma
*/

typedef struct no *Lista;

Lista criar_lista();

int lista_vazia(Lista lst);

int insere_elem_ord(Lista *lst, int elem);

int remove_elem(Lista *lst, int elem);

int obtem_valor_elem(Lista *lst, int elem);

int imprime_lista(Lista lst);

