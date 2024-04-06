#include <stdio.h>
#include <stdlib.h>

int main() {

    int num, count, soma;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    while(num != 0){
    count = 1;
    soma = num;

    if (num % 2 != 0){
        num = num + 1;
    }

    soma = num;

    while (count <= 4 && num % 2 == 0){
       num = num + 2;
       soma = num + soma;
       count = count + 1;
    }
    printf("%d\n", soma);

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
}

    return 0;

}
