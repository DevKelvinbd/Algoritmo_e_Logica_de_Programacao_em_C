#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    double a, b, c, delta, x1, x2;

    printf("Coeficiente A: ");
    scanf("%lf", &a);

    printf("Coeficiente B: ");
    scanf("%lf", &b);

    printf("Coeficiente C: ");
    scanf("%lf", &c);

    delta = b * b - 4 * a * c;

    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);

    if (delta < 0){
        printf("\nNAO POSSUI RAIZES REAIS.");
    }
    else {
        printf("X1: %.2lf\n", x1);
        printf("X2: %.2lf", x2);

    }


    return 0;
}
