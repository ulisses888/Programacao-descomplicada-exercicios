#include <stdio.h>

//Faca um programa que receba dois numeros e mostre qual deles e o maior.

int main(){
    int numero1;
    int numero2;

    printf("\nDigite o 1 numero:");
    scanf("%d",&numero1);
    printf("\nDigite o 2 numero:");
    scanf("%d",&numero2);

    if (numero1>numero2){
        printf("%d é maior que: %d",numero1, numero2);
    } else if (numero1=numero2) {
        printf("\nOs numeros sao iguais\n");
    } else {
        printf("%d é maior que: %d",numero2, numero1);
    }

    return 0;
}