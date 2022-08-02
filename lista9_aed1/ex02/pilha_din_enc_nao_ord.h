/*
TAD: Pilha

Cabeçalho:

- Nome: Pilha

- Tipo de dado: número inteiro

- Lista de operações: cria_pilha, pilha_vazia, push, pop, le_topo, imprime_pilha

Operações:
    cria_pilha:
        Entrada: nenhuma
        Pré-condição: nenhuma
        Processo: cria uma pilha e a coloca no estado de vazia
        Saída: endereço da pilha criada
        Pós-condição: nenhuma

    pilha_vazia:
        Entrada: endereço da pilha
        Pré-condição: nenhuma
        Processo: verifica se a pilha está vazia
        Saída: 0 (sucesso - pilha vazia) ou -1 (falha - pilha não está vazia)
        Pós-condição: nenhuma

    push:
        Entrada: endereço da pilha e o elemento a ser inserido
        Pré-condição: pilha não estar cheia
        Processo: inserir o elemento informado no topo da pilha
        Saída: 0 (sucesso - elemento empilhado) ou -1 (falha - erro ao empilhar elemento)
        Pós-condição: a pilha de entrada com um elemento a mais

    pop:
        Entrada: endereço da pilha e o endereço de retorno do elemento do topo da pilha
        Pré-condição: pilha não estar vazia
        Processo: remover o elemento que está no topo da pilha e retorná-lo
        Saída: 0 (sucesso - elemento desempilhado) ou -1 (falha - erro ao desempilhar elemento)
        Pós-condição: a pilha de entrada com um elemento a menos e a variável de retorno com o elemento removido

    le_topo:
        Entrada: endereço da pilha e o endereço de retorno do elemento do topo da pilha
        Pré-condição: pilha não estar vazia
        Processo: retornar o valor do elemento que está no topo da pilha sem removê-lo
        Saída: 0 (sucesso - elemento retornado) ou -1 (falha - erro ao retornar elemento)
        Pós-condição: variável de retorno com o elemento do topo

    imprime_pilha:
        Entrada: endereço da pilha
        Pré-condição: pilha existir
        Processo: imprime o conteúdo de todos os nós da pilha
        Saída: nenhuma
        Pós-condição: nenhuma
*/

typedef struct no *Pilha;

Pilha cria_pilha();

int pilha_vazia(Pilha p);

int push(Pilha *p, int elem);

int pop(Pilha *p, int *elem);

int le_topo(Pilha p, int *elem);

void imprime_pilha(Pilha p);