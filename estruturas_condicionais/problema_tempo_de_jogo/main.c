#include <stdio.h>
#include <stdlib.h>

int main() {

    float duracao, h1, h2;

    printf("Hora Inicial: ");
    scanf("%f", &h1);
    printf("Hora Final: ");
    scanf("%f", &h2);

    if (h1 > h2){
        duracao = (24 - h1) + h2;
    } else if(h1 < h2){
        duracao = h2 - h1;
    } else {
        duracao = 24;
    }

    printf("\nO JOGO DUROU %.2f HORA(S)", duracao);

    return 0;
}
