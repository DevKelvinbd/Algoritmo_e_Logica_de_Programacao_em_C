#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    double precoUni, recebido, troco, faltam, quantComprada;

    printf("Preco unitario do produto: ");
    scanf("%lf", &precoUni);
    printf("Quantidade comprada: ");
    scanf("%lf", &quantComprada);
    printf("Dinheiro Recebido: ");
    scanf("%lf", &recebido);

    troco = recebido - (precoUni * quantComprada);
    faltam = precoUni * quantComprada - recebido;

    if (troco >= 0){
        printf("Troco: %lf reais", troco);
    } else if(troco < 0){
        printf("faltam %.2lf", faltam);
    }



    return 0;
}
