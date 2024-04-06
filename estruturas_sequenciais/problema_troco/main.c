#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    double precoUni, recebido, troco;
    int quant;

    printf("Preco unitario do produto: ");
    scanf("%lf", &precoUni);
    printf("Quantidade comprada: ");
    scanf("%d", &quant);
    printf("Dinheiro recebido: ");
    scanf("%lf", &recebido);

    troco = recebido - (precoUni * quant);

    printf("TROCO: %.2lf", troco);

    return 0;
}
