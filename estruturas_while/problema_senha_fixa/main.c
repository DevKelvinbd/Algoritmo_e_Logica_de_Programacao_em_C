#include <stdio.h>
#include <stdlib.h>

int main() {

    double senha;

    printf("Digite a senha: ");
    scanf("%lf", &senha);

    while (senha != 2002){
        printf("SENHA INCORRETA. TENTE NOVAMENTE: ");
        scanf("%lf", &senha);
    }

    printf("ACESSO LIBERADO");


    return 0;
}
