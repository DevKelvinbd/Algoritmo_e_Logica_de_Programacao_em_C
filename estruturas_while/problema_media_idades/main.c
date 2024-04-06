#include <stdio.h>
#include <stdlib.h>

int main() {

    double idade, somaIdades, mediaIdades, count;

    printf("Digite as idades: \n");
    scanf("%lf", &idade);

    if (idade < 0) {
        printf("IMPOSSIVEL CALCULAR!");
    } else{

    count = 0;
    somaIdades = 0;

    while(idade >= 0){
        count = count + 1;
        somaIdades = idade + somaIdades;
        scanf("%lf", &idade);
    }

    mediaIdades = somaIdades / count;

    printf("A media das idades e %.2lf", mediaIdades);
    }


    return 0;
}
