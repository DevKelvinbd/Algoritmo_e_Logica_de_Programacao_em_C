#include <stdio.h>
#include <stdlib.h>

int main() {

    int n1, n2;

    printf("Digite dois numeros inteiros: \n");
    scanf("%d", &n1);
    scanf("%d", &n2);

    if (n1 > n2){
        if(n1 % n2 == 0){
            printf("Sao Multiplos");
        } else {
            printf("Nao sao multiplos");
        }


    } else  {
        if (n2 % n1 == 0){
            printf("Sao Multiplos");
        } else {
            printf("Nao sao multiplos");
            }
    }



    return 0;
}
