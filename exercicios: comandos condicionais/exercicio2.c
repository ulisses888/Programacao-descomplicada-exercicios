#include <stdio.h>
#include <math.h>

// Leia um numero fornecido pelo usuario. Se esse numero for positivo, calcule a raiz
// quadrada do numero. Se o numero for negativo, mostre uma mensagem dizendo que o
// numero e invalido.

int main(){
    float calcularRaiz;
    float raiz;
    printf("\nDigite o valor a ser calculado:");
    scanf("%f",&calcularRaiz);

    if ( calcularRaiz >= 0){

        raiz = sqrt(calcularRaiz);
        printf("\nValor da raiz: %f",raiz);
        
    } else {

        printf("\nValor invalido");
        
    }

    return 0;
}