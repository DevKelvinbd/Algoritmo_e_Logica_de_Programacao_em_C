#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int i, n;

    printf("Deseja a tabuada para qual valor? ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", n, i, n*i);
    }

    return 0;
}
