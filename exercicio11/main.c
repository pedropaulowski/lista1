#include <stdio.h>
#include <stdlib.h>
//exercicio11
int main() {
    int x;
    float resto3, resto5;

    scanf("%d", &x);

    resto3 = x%3;
    resto5 = x%5;

    if(resto3 == 0) {
        if(resto5 == 0) {
            printf("O NUMERO E DIVISIVEL\n");
        } else {
            printf("O NUMERO NAO E DIVISIVEL\n");
        }
    } else {
        printf("O NUMERO NAO E DIVISIVEL\n");
    }
    return 0;
}
