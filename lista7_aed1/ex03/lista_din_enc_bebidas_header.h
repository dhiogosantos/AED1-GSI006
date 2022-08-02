/*

TAD: lista dinâmica encadeada com nó cabeçalho

- Dados: números inteiros e vetores de char

- Lista de operações: criar_lista, lista_vazia, insere_elem, remove_elem, obtem_valor_elem, imprime_lista

Operações:
    criar_lista:
        Entrada: endereço de uma lista
        Pré-condição: lista ser válida
        Processo: cria uma lista e um nó cabeçalho e faz as atribuições
        Saída: 0 (sucesso - lista criada) ou -1 (falha - lista não criada)
        Pós-condição: Nenhuma

    lista_vazia:
        Entrada: cópia do endereço de uma lista
        Pré-condição: lista ser válida
        Processo: verifica o campo prox do nó cabeçalho, se ele for NULL a lista é vazia
        Saída: 0 (sucesso - lista está vazia) ou -1 (falha - lista não está vazia)
        Pós-condição: nenhuma    

    insere_elem:
        Entrada: cópia do endereço de uma lista e o elemento a ser inserido
        Pré-condição: lista ser válida
        Processo: inserir novo nó no início da lista 
        Saída: 0 (sucesso - elemento inserido) ou -1 (falha - elemento não inserido)
        Pós-condição: lista de entrada com um elemento a mais

    remove_elem:
        Entrada: cópia do endereço de uma lista
        Pré-condição: lista ser válida
        Processo: verifica se a lista é vazia, caso não, percorre a lista até o conteúdo do nó ser diferente do elemento
        Saída: 0 (sucesso - elemento removido), -1 (falha - lista está vazia) ou -2 (falha - elemento não existe na lista)
        Pós-condição: lista de entrada com um elemento a menos

    obtem_valor_elem:
        Entrada: cópia do endereço de uma lista
        Pré-condição: lista ser válida e não estar vazia
        Processo: percorre a lista e verifica se o elemento pertence a lista
        Saída: aux (sucesso - Pertençe a lista), -1 (falha - Lista vazia) ou -2 (falha - elemento não pertence a lista)
        Pós-condição: nenhuma

    imprime_lista:
        Entrada: cópia do endereço de uma lista
        Pré-condição: lista ser válida
        Processo: percorre a lista e imprime o campo info de cada nó
        Saída: nenhuma
        Pós-condição: nenhuma
*/



typedef struct no *Lista;

int criar_lista();

int lista_vazia(Lista lst);

int insere_elem(Lista lst, char *nome, int volume, float preco);

int remove_elem(Lista lst, char *nome);

int obtem_valor_elem(Lista lst, char *nome);

void imprime_lista(Lista lst);