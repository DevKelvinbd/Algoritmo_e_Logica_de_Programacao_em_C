#include <stdio.h>
#include <stdlib.h>

int main() {

    double x, y;

    printf("Escreva dois numeros: \n");
    scanf("%lf", &x);
    scanf("%lf", &y);

    while(x != y){
    if(x > y){
    printf("Decrescente\n");
    } else{
    printf("Crescente\n");
    }
    printf("Escreva dois numeros: \n");
    scanf("%lf", &x);
    scanf("%lf", &y);
}

    return 0;
}
