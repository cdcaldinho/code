#include <stdio.h>

int main() {

    float investido, r, ValorF;
    int t;
    printf("Digite o valor inicial do investimento: ");
    scanf("%f", &investido);
    printf("Digite o numero de anos: ");
    scanf("%d", &t);
    r = 0.05;
    ValorF = investido + (investido * r * t);
    printf("O valor futuro do investimento apos %d anos sera de %.2f\n", t, ValorF);
    return 0;
}
