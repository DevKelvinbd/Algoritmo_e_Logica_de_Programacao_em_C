#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    double n1, n2, somaImpares;
    int i;

    printf("Digite dois numeros: \n");
    scanf("%lf", &n1);
    scanf("%lf", &n2);

    somaImpares = 0;

    for (i = n1 + 1; i <= n2 - 1; i++){
        if (i % 2 == 1){
            somaImpares = somaImpares + i;
        }
    }

    printf("%.2lf", somaImpares);

    return 0;
}
