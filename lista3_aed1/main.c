#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//#include <conio.h>

struct Individuo {
    int codigo_genetico[10]; // valores binarios aleatorios
    float aptidao_abs; // pontencial de cada individuo (0.0 <= aptidao <= 10.0)
    float aptidao_relativa; // deve ser calculada em tempo de execução...
};

struct Populacao {
    struct Individuo *pop; // um vetor de N individuos
    int tamanho; // tamanho N da população (N = 100)
};

int main(){
  
    struct Populacao p;
    double soma_aptdao_absoluta = 0, sorteio;
    int s1, s2;

    printf("Digite o tamanho da populacao (inteiro positivo entre 1 e 100): ");
    scanf("%d", &p.tamanho);

    p.pop = (struct Individuo*) malloc(p.tamanho * sizeof(struct Individuo));

    if(p.pop == NULL){
        printf("Erro ao alocar memoria!!\n");
        return -1;
    }

    //codigo genetico de cada individuo
    for(int i = 0; i < p.tamanho; i++){
        for(int j = 0; j < 10; j++){
         p.pop[i].codigo_genetico[j] = ((rand() % 2) == 0) ? 1 : 0;
        }
    }

    //aptidao_abs e somatorio de aptidao_abs
     for(int i = 0; i < p.tamanho; i++){
        p.pop[i].aptidao_abs = (10.0 / RAND_MAX) * rand();
        soma_aptdao_absoluta += p.pop[i].aptidao_abs;
    }

    //aptidao_relativa
    for(int i = 0; i < p.tamanho; i++){
        p.pop[i].aptidao_relativa = (p.pop[i].aptidao_abs / soma_aptdao_absoluta);
    }             
    
    double sum_aptdRelativa = 0;

    for (int i = 0; i < 100; i++){                     
        for(int j = 0; j < p.pop[j].aptidao_relativa; j++){
            sorteio = ((double) rand()) / ((double) RAND_MAX);
           sum_aptdRelativa += p.pop[j].aptidao_relativa;
            if(sum_aptdRelativa >= sorteio){
                s1 = j;
                
            }
       }
       
        for(int j = 0; j < p.pop[j].aptidao_relativa; j++){
            sorteio = ((double) rand()) / ((double) RAND_MAX);
           sum_aptdRelativa += p.pop[j].aptidao_relativa;
            if(sum_aptdRelativa >= sorteio){
                s2 = j;
                printf("sou s2=%d\n", s2);
                          
            }
       }
        
       printf("par_%d = (%d, %d)\n", i, s1, s2);
       sum_aptdRelativa = 0;       
       s1 = 0;
       s2 = 0;       
    }

    return 0;
}
