#include <stdio.h>
int main() {
  int operacao;
  char continuar;
  do{
  printf("numero de lados da figura:  ");
  scanf(" %d", &operacao);
  switch (operacao) {
    case 1:
       printf("invalido");

    case 2:

      printf("invalido");


      break;
    case 3:

      printf("triangulo");

      break;
    case 4:

      printf("quadrado");

      break;
    case 5:
      printf("pentagono");

      break;
    case 6:
      printf("hexagono");

      break;

   default:
      printf("poligono qualquer");
  }
        printf("\n quer falar outra quantidade de lados? (s/n): ");
        scanf (" %c", &continuar);
        }while (continuar == 'S' || continuar == 's');

    printf("\n fim do programa");

  return 0;
}
