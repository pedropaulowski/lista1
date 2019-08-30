#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//exercicio 14
int main() {
    float altura, aresta, area, volume;

    scanf("%f %f", &altura, &aresta);

    area = (3 * (aresta * aresta) * sqrt(3)) / 2;

    volume = (area * altura) / 3;


    printf("O VOLUME DA PIRAMIDE E = %.2f METROS CUBICOS\n", volume);
}
