#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void limpar_entrada() {
char c;
while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {

    double x, y, soma;

    soma = 0;
    x = 0;
    y = 0;

    printf("Digite o valor de X: ");
    scanf("%lf", &x);
    printf("\n");
    printf("Digite o valor de Y: ");
    scanf("%lf", &y);

    soma = x + y;
    printf("SOMA: %lf", soma);

    return 0;
}
