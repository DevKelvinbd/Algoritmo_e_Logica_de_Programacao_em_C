#include <stdio.h>
#include <stdlib.h>

int main() {

    double resultadoC, resultadoF, tempC, tempF;
    char C, F, escolha;

    printf("Voce vai digitar a temperatura em qual escala(C/F)? ");
    scanf("%s", &escolha);

    if (escolha == 'C'){
        printf("Digite a temperatura em Celsius: ");
        scanf("%lf", &tempC);

        resultadoF = tempC * 1.8 + 32;
        printf("Resultado em Celsius: %lf", resultadoF);

    } else if(escolha == 'F'){
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%lf", &tempF);

       resultadoC = (tempF - 32) * 5/9;
       printf("Resultado em Celsius: %lf", resultadoC);

    } else{
        printf("Digite uma letra certa");
    }

    return 0;
}
