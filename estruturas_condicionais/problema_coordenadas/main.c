#include <stdio.h>
#include <stdlib.h>

int main() {

    double x, y, quadrante;

    printf("Valor de X: ");
    scanf("%lf", &x);
    printf("Valor de Y: ");
    scanf("%lf", &y);

    if (x > 0 && y > 00){
        quadrante = 1;
        printf("Quadrante %.0lf", quadrante);
} else if (x < 0 && y > 0){
        quadrante = 2;
        printf("Quadrante %.0lf", quadrante);
} else if(x < 0 && y < 0){
        quadrante = 3;
        printf("Quadrante %.0lf", quadrante);
} else if(x > 0 && y < 0){
        quadrante = 4;
        printf("Quadrante %.0lf", quadrante);
} else if (x > 0 && y == 0){
        printf("Eixo X");
}else if (x == 0 && y > 0){
        printf("Eixo Y");
} else {
        printf("ORIGEM");
}

    return 0;
}
