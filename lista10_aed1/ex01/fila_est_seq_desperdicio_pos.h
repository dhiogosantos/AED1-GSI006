/*
TAD FILA

Cabeçalho:

- Tipo de dado: números inteiros

- Lista de operações: cria_fila, fila_vazia, fila_cheia, insere_fim, remove_ini, ler_final, imprime_fila

Operações:
    - cria_fila:
        Entrada: nenhuma
        Pré-condição: nenhuma
        Processo: cria a fila e a colcoa em estado de fila vazia
        Saída: endereço da fila criada
        Pós-condição: nenhuma

    - fila_vazia:
        Entrada: endereço da fila
        Pré-condição: nenhuma
        Processo: verifica se a fila está vazia
        Saída: 0 (sucesso - fila vazia) ou -1 (falha - fila não está vazia)
        Pós-condição: nenhuma

    - fila_cheia:
        Entrada: endereço da fila
        Pré-condição: nenhuma
        Processo: verifica se a fila está cheia
        Saída: 0 (sucesso - fila cheia) ou -1 (falha - fila não está cheia)
        Pós-condição: nenhuma

    - insere_fim:
        Entrada: endereço da fila e o elemento a ser inserido
        Pré-condição: fila não estar cheia
        Processo: inserir o elemento informado no final da fila
        Saída: 0 (sucesso - elemento inserido) ou -1 (falha - elemento não inserido)
        Pós-condição: a fila de entrada com um elemento a mais

    - remove_ini:
        Entrada: endereço da fila e o endereço de retorno do elemento removido
        Pré-condição: fila não estar vazia
        Processo: remover o elemento que está no início da fila e retornar seu valor
        Saída: 0 (sucesso - elemento removido) ou -1 (falha - elemento não removido)
        Pós-condição: a fila de entrada com um elemento a menos

      - ler_final:
        Entrada: endereço da fila e o endereço de retorno do elemento que está no fim da fila
        Pré-condição: fila não estar vazia
        Processo: retornar o valor do elemento que está na última posição da fila
        Saída: 0 (sucesso - último elemento retornado) ou -1 (falha - fila vazia ou não foi criada)
        Pós-condição: nenhuma

    - imprime_fila:
        Entrada: endereço da fila
        Pré-condição: fila não estar vazia
        Processo: percorrer a fila e imprimir todo o seu conteúdo
        Saída: 0 (sucesso - fila impressa) ou -1 (falha - fila não impressa)
        Pós-condição: nenhuma
*/

typedef struct fila *Fila;

Fila cria_fila();

int fila_vazia(Fila f);

int fila_cheia(Fila f);

int insere_fim(Fila f, int elem);

int remove_ini(Fila f, int *elem);

int ler_final(Fila f, int *elem);

int imprime_fila(Fila f);