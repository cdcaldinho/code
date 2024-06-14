#include <stdio.h>
int main() {
    float real, dolar, taxac = 0.19;
     char operacao;
  printf("Digite a operacao desejada 1- Real para Dolar| 2- Dolar para Real ");
  scanf(" %c", &operacao);
  switch (operacao) {
    case '1':

    printf("Digite o valor em reais: ");
    scanf("%f", &real);
    dolar = real * taxac;
    printf("valor em dolares: %.2f\n", dolar);
    break;
    case '2':

    printf("Digite o valor em Dolares: ");
    scanf("%f", &dolar);
    real = dolar / taxac;
    printf("valor em Reais: %.2f\n", real);
    break;
    default:
    printf("algo de errado. ");
  }
    return 0;

}
