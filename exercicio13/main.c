#include <stdio.h>
#include <stdlib.h>
//exercicio 13
int main() {
    float nota;

    scanf("%f", &nota);

    if (nota >= 9 && nota <=10) {
        printf("NOTA = %.1f CONCEITO = A", nota);
    }
    if (nota >= 7.5 && nota < 9) {
        printf("NOTA = %.1f CONCEITO = B", nota);
    }
    if (nota >= 6 && nota < 7.5) {
        printf("NOTA = %.1f CONCEITO = C", nota);
    }
     if (nota >= 0 && nota < 6) {
        printf("NOTA = %.1f CONCEITO = D", nota);
    }

    return 0;
}
