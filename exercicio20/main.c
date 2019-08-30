#include <stdio.h>
#include <stdlib.h>
//exercicio 20
int main() {
    int horas, minutos, segundos, segundosTotais;

    scanf("%d", &horas);
    scanf("%d", &minutos);
    scanf("%d", &segundos);

    segundosTotais = (horas * 3600) + (minutos * 60) + segundos;

    printf("O TEMPO EM SEGUNDOS E = %d\n", segundosTotais);

    return 0;
}
