/*

TAD: prob_josephus

Dados: nome do soldado (vetor de char)

Lista de Operações: creat_list, empty_list, insert_soldier_end, sort_number, list_size, remove_soldier, print_list, insert_mortos

Operações:
    create_list:
        Entrada: nenhuma
        Pré-condição: nenhuma
        Processo: cria uma lista e um nó cabeçalho e faz as atribuições
        Saída: endereço da lista criada
        Pós-condição: Nenhuma

    empty_list:
        Entrada: endereço de uma lista
        Pré-condição: lista ser válida
        Processo: verifica o campo prox do nó, se ele for NULL a lista é vazia
        Saída: 0 (sucesso - lista está vazia) ou -1 (falha - lista não está vazia)
        Pós-condição: nenhuma    

    insert_elem_end:
        Entrada: endereço de uma lista e o elemento (nome soldado) a ser inserido
        Pré-condição: lista ser válida
        Processo: inserir novo nó na última posição da lista 
        Saída: 0 (sucesso - elemento inserido) ou -1 (falha - elemento não inserido)
        Pós-condição: lista de entrada com um elemento a mais

    sort_number:
        Entrada: endereço de uma lista e o elemento (nome soldado) a ser inserido
        Pré-condição: lista ser válida
        Processo: inserir novo nó na última posição da lista 
        Saída: 0 (sucesso - elemento inserido) ou -1 (falha - elemento não inserido)
        Pós-condição: lista de entrada com um elemento a mais

    list_size:
        Entrada: endereço de uma lista
        Pré-condição: lista ser válida
        Processo: contar quantos nós tem na lista
        Saída: tam (sucesso - tamanho da lista)
        Pós-condição: nenhuma

    remove_soldier:
        Entrada: endereço de duas listas
        Pré-condição: listas serem válidas
        Processo: remover nó sorteado na primeira lista e adicionar o excluido na outra lista 
        Saída: 0 (sucesso - elemento inserido) ou -1 (falha - elemento não inserido)
        Pós-condição: lista de entrada com um elemento a menos e a segunda lista com um elemento a mais

    print_list:
        Entrada: endereço de uma lista
        Pré-condição: lista ser válida
        Processo: imprimir o campo name de todos os nós da lista
        Saída: nenhuma
        Pós-condição: nenhuma 

    insert_mortos:
        Entrada: endereço de uma lista e o nome do soldado
        Pré-condição: lista ser válida
        Processo: adicionar o nome do soldado na lista dos soldados mortos
        Saída: 0 (sucesso - elemento inserido) ou -1 (falha - elemento não inserido)
        Pós-condição: lista de entrada com um elemento a mais

    

*/

typedef struct node *List;

List creat_list();

int empty_list(List lst);

int insert_soldier_end(List *lst, char *name);

int insert_mortos(List *lst, char *name);

int sort_number(List lst);

int list_size(List lst);

int remove_soldier(List *soldados, List *mortos);

void print_list(List lst);