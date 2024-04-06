#include <stdio.h>
#include <stdlib.h>

int main() {

    double glicose;

    printf("Digite a medida da glicose: ");
    scanf("%lf", &glicose);

    if (glicose <= 100) {
        printf("Glicose Normal!");

    } else if (glicose > 100 && glicose <= 140){
        printf("Glicose Elevada!");
        }
        else {
        printf("Nivel de Diabetes");

    }





    return 0;
}
