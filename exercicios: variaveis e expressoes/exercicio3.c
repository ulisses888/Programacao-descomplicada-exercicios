#include <stdio.h>

//Peca ao usuario para digitar tres valores inteiros e imprima a soma deles.

int main(){
    int numeroInteiro1;
    int numeroInteiro2;
    int numeroInteiro3;
    int somaNumeros;
    printf("\nDigite o primeiro numero:");
    scanf("%d",&numeroInteiro1);

    printf("\nDigite o segundo numero:");
    scanf("%d",&numeroInteiro2);

    printf("\nDigite o terceiro numero:");
    scanf("%d",&numeroInteiro3);

    somaNumeros = numeroInteiro1 + numeroInteiro2 + numeroInteiro3;

    printf("\nSoma dos numeros:%d\n",somaNumeros);

    return 0;
}