#include <stdio.h>

//Leia um numero real e imprima o resultado do quadrado desse numero

int main(){
    float numeroReal;
    printf("\nDigite o numero real:");
    scanf("%f",&numeroReal);

    printf("\nQuadrado do numero real:%f\n",(numeroReal*numeroReal));

    return 0;
}