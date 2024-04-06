#include <stdio.h>
#include <stdlib.h>

int main() {

    double minutos, padrao, extra;

    printf("Digite a quantidade de minutos: ");
    scanf("%lf", &minutos);

    if (minutos > 100) {
        extra = (minutos - 100) * 2;
    }

    padrao = 50;

    if (minutos <= 100){
        printf("Valor a pagar igual a R$50,00.");
    } else {
        printf("Valor a pagar = %.2lf", extra + padrao);
    }



    return 0;
}
