#include <stdio.h>

int main() {
    int soma = 0;

    for (int i = 2; i <= 100; i += 2) {
        soma += i;
    }

    printf("A soma dos n�meros pares de 1 a 100 �: %d\n", soma);

    return 0;
}
