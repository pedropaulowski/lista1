#include <stdio.h>
#include <stdlib.h>

int main() {
    float nota1, nota2, nota3;
    float media;


    printf("Insira as 3 notas separadas por espa�o, se for nota quebrada, use ponto no lugar da v�rgula. \n");
    scanf("%f %f %f", &nota1,&nota2,&nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("MEDIA = %.2f\n", media);

    if(media >= 6) {

        printf("APROVADO");

    } else {

        printf("REPROVADO");

    }

    return 0;
}
