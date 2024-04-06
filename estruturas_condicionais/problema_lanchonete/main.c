#include <stdio.h>
#include <stdlib.h>

int main() {

    double cod1, cod2, cod3, cod4, cod5;
    int codigo, quant;

    printf("Codigo do produto comprado: ");
    scanf("%d", &codigo);
    printf("Quantidade comprada: ");
    scanf("%d", &quant);

    cod1 = 5.00;
    cod2 = 3.50;
    cod3 = 4.80;
    cod4 = 8.90;
    cod5 = 7.32;

    if (codigo == 1){
        printf("Valor a pagar: %.2lf", cod1 * quant);
    } else if (codigo == 2){
        printf("Valor a pagar: %.2lf", cod2 * quant);
    } else if(codigo == 3){
        printf("Valor a pagar: %.2lf", cod3 * quant);
    } else if (codigo == 4){
        printf("Valor a pagar: %.2lf", cod4 * quant);
    } else if(codigo == 5){
        printf("Valor a pagar: %.2lf", cod5 * quant);
    } else {
        printf("Reinicie o programa e escreva um valor válido");
    }


    return 0;
}
