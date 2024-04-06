#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    double salario, novoSalario, percentual, aumento;

    printf("Digite o salario da pessoa: ");
    scanf("%lf", &salario);

    if (salario <= 1000) {
        novoSalario = salario * 0.2 + salario;
        percentual = 20;
        aumento = novoSalario - salario;

    } else if (salario > 1000 && salario <= 3000){
        novoSalario = salario * 0.15 + salario;
        percentual = 15;
        aumento = novoSalario - salario;

    } else if (salario > 3000 && salario <= 8000){
        novoSalario = salario * 0.1 + salario;
        percentual = 10;
        aumento = novoSalario - salario;

    } else if (salario > 8000){
        novoSalario = salario * 0.05 + salario;
        percentual = 5;
        aumento = novoSalario - salario;
    }

    printf("Novo salario = R$ %.2lf\n", novoSalario);
    printf("Aumento = R$ %.2lf\n", aumento);
    printf("Porcentagem = %.2lf", percentual);

    return 0;
}
