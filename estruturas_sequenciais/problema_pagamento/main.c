#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void ler_texto(char *buffer, int length) {
fgets(buffer, length, stdin);
strtok(buffer, "\n");
}

void limpar_entrada() {
char c;
while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {

    char nome[50];
    double pagamento, valorHora, horasTrabalhadas;

    printf("Nome: ");
    ler_texto(nome, 50);

    printf("Valor por hora: ");
    scanf("%lf", &valorHora);

    printf("Horas trabalhadas: ");
    scanf("%lf", &horasTrabalhadas);
    pagamento = valorHora * horasTrabalhadas;

    printf("O pagamento para %s deve ser %.2lf", nome, pagamento);

    return 0;
}
