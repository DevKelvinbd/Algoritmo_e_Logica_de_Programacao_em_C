#include <stdio.h>
#include <stdlib.h>

int main() {

    double x, n;
    int i;

    x = 0;
    i = 0;
    n = 0;

    printf("Digite o valor de X: ");
    scanf("%lf", &x);

    for (i = 1; i <= x; i++){
        if (i % 2 != 0){
            printf("%d\n", i);
        }
    }



    return 0;
}
