#include <stdio.h>
int main() {
  int operador;
  float valor, kilo, custo;
  char escolha, continuar;
   do {
  printf("Batata: 1|\n Cenoura 2|\n Couve: 3|\n Cesta completa: 4|\n qual voce esta procurando: ");
  scanf(" %i", &operador);

  switch (operador) {
      case 1:

      printf("valor da batata 6.50 por kilo");

      valor = 6.50;

      break;
      case 2:

      printf("valor da cenoura 3.25 por kilo");

      valor = 5.00;

      break;
      case 3:

      printf("valor do couve 5.00 por kilo ");

      valor = 7.00;

      break;
      case 4:
      printf("Cesta completa: 10 kilos de batata, 10 kilos de cenoura, 10 kilos de couve: ");

      valor = 180;

}

  printf("\n o que voce levou?(1/2/3/4): ");

   scanf(" %c", &escolha);

   switch (escolha){

        case '1':

      printf("quantos kilos vc levou? ");

      scanf("%f", &kilo);

      custo = valor * kilo;
       break;
       case '2':

      printf("quantos kilos vc levou? ");

      scanf("%f", &kilo);

      custo = valor * kilo;
        break;
        case '3':

      printf("quantos kilos vc levou? ");

      scanf("%f", &kilo);

       custo = valor * kilo;

       break;
       case '4':

      printf("quantas voce levou? ");

      scanf("%f", &kilo);

      custo = valor * kilo;
      break;
   }

       printf("O custo é %.2f: ", custo);


        printf("\n quer voltar? (s/n): ");

        scanf (" %c", &continuar);

        }while (continuar == 'S' || continuar == 's');

        printf("\n fim do programa");

  return 0;
}
