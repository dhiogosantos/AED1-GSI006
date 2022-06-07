/*
***********************************************************************************************************************************************
TAD ponto:

    - Dados: O programa aplicativo deve ler as coordenadas de 2 pontos, digitadas pelo usuário e
             imprimir na tela a distância entre esses pontos. Nesse processo, o programa deve criar
             os 2 pontos, calcular a distância entre esses pontos e, após apresentar o resultado,
             liberar os dois pontos.
    - Lista de operações: gera_pto, set_pto, get_pto, libera_pto, distancia_pto.

Operações:

    gera_pto:
        Entrada: Nenhuma
        Pré-condição: Nenhuma
        Processo: cria uma instância de um ponto sem valores
        Saída: Endereço do Ponto criado
        Pós-condição: Nenhuma

    set_pto:
        Entrada: Dois números, sendo eles representando (x,y) respectivamente
        Pré-condição: Coordenadas do ponto serem válidas
        Processo: atribui os valores das coordenadas x e y de um ponto
        Saída: 0 (sucesso) ou -1 (falha)
        Pós-condição: Variáveis x e y alteradas

    get_pto:
        Entrada: Endereço de um ponto p e endereço de duas coordenadas (x,y)
        Pré-condição: Ponto ser válido
        Processo: retorna os valores das coordenadas x e y de um ponto, se existentes
        Saída: 0 (sucesso) ou -1 (falha)
        Pós-condição: As coordenadas com o valor de (x,y)

    libera_pto:
        Entrada: Endereço de um ponto
        Pré-condição: Espaço ter sido alocado com sucesso anteriormente
        Processo: Liberar a memória usada pelo ponto e limpar o seu endereço
        Saída: Nenhuma
        Pós-condição: Ponto liberado

    distancia_pto:
        Entrada: Dois pontos
        Pré-condição: Os pontos serem válidos
        Processo: Calcula a distância entre dois pontos
        Saída: Retorna o resultado da distância entre dois pontos
        Pós-condição: Nenhuma
        
***********************************************************************************************************************************************
*/

typedef struct ponto Ponto;

Ponto* gera_pto();

int set_pto(Ponto* p, int x, int y);

int get_pto(Ponto *p, int *x, int *y);

void libera_pto(Ponto *p);

float distancia_pto(Ponto *p1, Ponto *p2);