#include <stdio.h>
#include <stdlib.h>

struct Ponto{
    int x;
    int y;
};

void inc_dir(struct Ponto ponto, char movimento){
    if(movimento == 'l'){
        ponto.x += 1;
    } else if(movimento == 'o'){
        ponto.x -= 1;
    } else if(movimento == 'n'){
        ponto.y += 1;
    } else if(movimento == 's'){
        ponto.y -= 1;
    } else 
        printf("\nDigite uma letra valida que represente uma direcao!\n");
        system("exit");
    
    printf("\nNova coordenada do ponto eh: (%d,%d)\n\n", ponto.x, ponto.y);
}

int main(){

    struct Ponto ponto;
    char movimento;  

    printf("\nDigite um ponto -> x,y: ");
    scanf("%d,%d", &ponto.x, &ponto.y);

    printf("\nDigite o para Oeste, l para Leste, n para Norte e s para Sul: ");
    fflush(stdin);
    scanf("%c", &movimento);

    inc_dir(ponto, movimento);    

    return 0;
}