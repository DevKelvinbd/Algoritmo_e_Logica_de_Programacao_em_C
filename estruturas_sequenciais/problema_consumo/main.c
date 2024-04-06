#include <stdio.h>
#include <stdlib.h>

int main() {

    double distancia, combustivel, consumoMedio;

    printf("Distancia percorrida: ");
    scanf("%lf", &distancia);

    printf("Combustível gasto: ");
    scanf("%lf", &combustivel);

    consumoMedio = distancia / combustivel;

    printf("CONSUMO MEDIO DE: %.3lf", consumoMedio);

    return 0;
}
