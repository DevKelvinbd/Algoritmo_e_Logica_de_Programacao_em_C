#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    double x, y;

    printf("Digite os valores das coordenadas X e Y: \n");
    scanf("%lf", &x);
    scanf("%lf", &y);

    if (x != 0 && y != 0){
        while(x != 0 && y != 0){
            if (x > 0 && y > 0){
                printf("\nQuadrante 1\n");
            } else if(x < 0 && y > 0){
                printf("\nQuadrante 2\n");
            } else if(x < 0 && y < 0){
                printf("\nQuadrante 3\n");
            } else if(x > 0 && y < 0){
                printf("\nQuadrante 4\n");
            } else{
              printf("Fim");
            }

        printf("Digite os valores das coordenadas X e Y: \n");
        scanf("%lf", &x);
        scanf("%lf", &y);
        }
    } else{
    printf("FIM");
    }


    return 0;
}
