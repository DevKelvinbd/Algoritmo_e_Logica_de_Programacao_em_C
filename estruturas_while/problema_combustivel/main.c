#include <stdio.h>
#include <stdlib.h>

int main() {

    int escolha, countAlcool, countGasolina, countDiesel;

    printf("Informa um codigo(1, 2, 3) ou 4 para finalizar: ");
    scanf("%d", &escolha);

    countAlcool = 0;
    countGasolina = 0;
    countDiesel = 0;

    while (escolha != 4){
        if (escolha == 1){
        countAlcool = countAlcool + 1;
        } else if(escolha == 2){
        countGasolina = countGasolina + 1;
        } else if(escolha == 3){
        countDiesel = countDiesel + 1;
        }

        printf("Informa um codigo(1, 2, 3) ou 4 para finalizar: ");
        scanf("%d", &escolha);
    }

    printf("\nMUITO OBRIGADO\n");

    printf("\nAlcool: %d\n", countAlcool);
    printf("Gasolina: %d\n", countGasolina);
    printf("Diesel: %d\n", countDiesel);

    return 0;
}
