#include <stdio.h>
#include <stdlib.h>

int main() {

    int duracao, horas, resto, minutos, segundos;

    printf("Duracao em segundos: ");
    scanf("%d", &duracao);

    horas = duracao / 3600;
    resto = duracao % 3600;

    minutos = resto / 60;
    segundos = resto % 60;

    printf("%d ; %d ; %d", horas, minutos, segundos);

    return 0;
}
