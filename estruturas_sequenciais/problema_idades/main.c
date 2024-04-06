#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

    void ler_texto(char *buffer, int length) {
        fgets(buffer, length, stdin);
        strtok(buffer, "\n");
    }

    void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
    }

int main() {
    double mediaIdades, idade1, idade2;
    char nome1[50], nome2[50];

    printf("DADOS DA PRIMEIRA PESSOA:\n");
    printf("NOME: ");
    ler_texto(nome1, 50);
    printf("IDADE: ");
    scanf("%lf", &idade1);

    limpar_entrada();

    printf("\nDADOS DA SEGUNDA PESSOA:\n");
    printf("NOME: ");
    ler_texto(nome2, 50);
    printf("IDADE: ");
    scanf("%lf", &idade2);

    mediaIdades = (double)(idade1 + idade2) / 2;

    printf("A idade media de %s e %s eh de %.1lf anos", nome1, nome2, mediaIdades);

    return 0;
}
