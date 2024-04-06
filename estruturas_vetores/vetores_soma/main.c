#include <stdio.h>
#include <stdlib.h>

int main() {

    int n, i;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    double vet[n], somaVet;

    for (i = 0; i < n; i++){
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }

    somaVet = 0;

    printf("VALORES: ");
    for(i = 0; i < n; i++){
        somaVet = somaVet + vet[i];
        printf("%.1lf, ", vet[i]);
    }

    printf("\nSOMA VET: %.2lf", somaVet);
    printf("\nMEDIA: %.2lf", somaVet / n);


    return 0;
}
