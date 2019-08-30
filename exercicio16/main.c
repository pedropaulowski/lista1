#include <stdio.h>
#include <stdlib.h>
//exercicio 16

int main() {
    float salario, novoSalario;

    scanf("%f", &salario);

    if(salario <= 300) {
        novoSalario =salario + ((salario * 50) / 100);
    } else {
        novoSalario = salario + ((salario * 30) / 100);
    }

    printf("SALARIO COM REAJUSTE = %.2f", novoSalario);

    return 0;
}
