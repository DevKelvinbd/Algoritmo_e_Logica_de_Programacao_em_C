#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, n;

    printf("Quantos numeros quer escrever?? ");
    scanf("%d", &n);

    double vet[n];

    for (i = 0; i < n; i++){
        printf("Digite um numero: ");
        scanf("%lf", &  vet[i]);
    }

    printf("NUMEROS NEGATIVOS: \n");

    for (i = 0; i < n; i++){
        if(vet[i] < 0){
            printf("%.2lf\n", vet[i]);
        }
    }


    return 0;
}
