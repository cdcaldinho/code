#include <stdio.h>
int main(){
    float valor_i,valor_f;
    int meses, i;

    printf("investimento inicial em bitcoin: ");
    scanf("%f", &valor_i);
    printf("quantidades de meses de investimento: ");
    scanf("%d", &meses);

    valor_f = valor_i;
    for (i = 1; i <= meses; i++){
    valor_f *= 1.10;
    }
    printf("valor final de seu investimento apos %d meses: %.2f\n", meses, valor_f);
    return 0;
}
