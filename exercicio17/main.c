#include <stdio.h>

//exercicio 17
int main() {
    int n1, n2, vezes;
    float resto;

    scanf("%d %d", &n1, &n2);

    resto = n1%2;
    vezes = n2;

    if(resto == 0) {
        for (vezes = n2; vezes > 1; vezes --) {
            n1 += 2;
            printf("%d ", n1);

        }
        printf("\n");

    } else {
        printf("O PRIMEIRO NUMERO NAO E PAR\n");
    }

    return 0;
}
