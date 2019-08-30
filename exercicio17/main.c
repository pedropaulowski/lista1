#include <stdio.h>

//exercicio 17
int main() {
    int x, y, vezes;
    float resto;

    scanf("%d %d", &x, &y);
    printf("\n");

    resto = x%2;
    vezes = y;

    if(resto == 0) {

        printf("%d ", x);

        for (vezes = y; vezes > 1; vezes --) {
            x += 2;
            printf("%d ", x);

        }

        printf("\n");

    } else {

        printf("O PRIMEIRO NUMERO NAO E PAR.\n");

    }

    return 0;
}
