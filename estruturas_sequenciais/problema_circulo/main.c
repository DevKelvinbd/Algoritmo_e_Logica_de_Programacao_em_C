#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    double raio, area;

    printf("Digite o valor do raio do circulo: ");
    scanf("%lf", &raio);

    area = 3.1415 * pow(raio, 2);

    printf("AREA: %.2lf", area);
    return 0;
}
