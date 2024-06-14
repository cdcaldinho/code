#include <stdio.h>
int main(){
    float valor_m, c_parcela, totalpago;
    int parcela;

    printf("Custo da moto: ");
    scanf ("%f", &valor_m);
    printf ("quantidades de parcelas: ");
    scanf("%d", &parcela);

    c_parcela = (valor_m / parcela) * 0.15;

    totalpago = c_parcela * parcela;

    printf("custo de cada parcela: %.2f\n", c_parcela);
    printf("valor final do consorcio: %.2f\n", totalpago);
    return 0;
}
