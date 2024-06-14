#include <math.h>

int main() {
    float reais, taxa_de_cambio, valor_convertido;
    printf("Quanto voce tem em reais: ");
    scanf("%f", &reais);
    printf("taxa de cambio para 1 real: ");
    scanf("%f", &taxa_de_cambio);
    valor_convertido = reais / taxa_de_cambio;
    printf("Sua conversão ficara em %.2f\n", valor_convertido);
    return 0;
}

