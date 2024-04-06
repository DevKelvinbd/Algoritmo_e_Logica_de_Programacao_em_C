#include <stdio.h>
#include <stdlib.h>

int main() {

    double v1, v2, v3, menor;

    printf("Primeiro Valor: ");
    scanf("%lf", &v1);
    printf("Segundo Valor: ");
    scanf("%lf", &v2);
    printf("Terceiro Valor: ");
    scanf("%lf", &v3);

    menor = v1;

    if (menor > v2) {
        menor = v2;
    }

    if(menor > v3) {
        menor = v3;
    }
    printf("Menor: %.2lf", menor);

    return 0;
}
