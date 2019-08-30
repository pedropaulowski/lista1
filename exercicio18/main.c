#include <stdio.h>
#include <stdlib.h>
//exercicio 18

int main() {
    int primeiro, razao, soma, ultimo, qtdeTermos;

    scanf("%d %d %d", &primeiro, &razao, &qtdeTermos);

    ultimo = primeiro + (qtdeTermos - 1) * razao;
    //qtdeTermos = (- primeiro - ultimo / - razao) +1;
    soma = ((primeiro + ultimo) * qtdeTermos) / 2;

    printf("%d", soma);
    return 0;
}
