#include <stdio.h>
#include <stdlib.h>

int main() {

    double dardo1, dardo2, dardo3, maiorDistancia;

    printf("Digite as tres distancias: \n");
    scanf("%lf", &dardo1);
    scanf("%lf", &dardo2);
    scanf("%lf", &dardo3);

    maiorDistancia = 0;

    if (dardo1 > dardo2 && dardo1 > dardo3){
            maiorDistancia = dardo1;
    } else if(dardo2 > dardo1 && dardo2 > dardo3){
            maiorDistancia = dardo2;
    }
    else{
        maiorDistancia = dardo3;
    }

    printf("Maior distancia: %lf", maiorDistancia);

    return 0;
}
