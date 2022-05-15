#include <stdio.h>
#include <math.h>

int main(){

    int b1, b2, b3, b4, res = 0; 
    int a, b, c, d;

     printf(" == Conversor de numeros binarios == \n");
     printf("Digite o 1o. bit: ");
     scanf("%d", &b1);
     printf("Digite o 2o. bit: ");
     scanf("%d", &b2);
     printf("Digite o 3o. bit: ");
     scanf("%d", &b3);
     printf("Digite o 4o. bit: ");
     scanf("%d", &b4);

     //b4 eh o bit mais significativo

     a = b1 * pow (2,3);
     b = b2 * pow (2,2); 
     c = b3 * pow (2,1); 
     d = b4 * pow (2,0); 
     res = a + b + c + d; 

     printf("O numero binario %d%d%d%d corresponde ao numero decimal %d. \n", b1, b2, b3, b4, res);

    return 0;
}