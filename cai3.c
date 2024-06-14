#include <stdio.h>
int main() {
    int operacao, limite, num;
    char continuar;
    do {
    printf("escolha qem sou 1-aluno| 2-professor| 3-pesquisador|4- visitante:  ");
    scanf(" %d", &operacao);
    switch (operacao) {
    case 1:
       printf("quantos livros quer pegar: ");
       scanf("%d", &limite);
        'limite' == 3;
        if (limite > 3 ){
            printf("so pode pegar 3 ou menos livros");
        }
        else printf("vc pode pegar o(os) livro(os)");

       break;
    case 2:
       printf("quantos livros quer pegar: ");
        scanf("%d", &limite);
        'limite' == 5;
        if (limite > 5 ){
            printf("so pode pegar 5 ou menos livros");
        }
        else printf("vc pode pegar o(os) livro(os)");

      break;
    case 3:

       printf("quantos livros quer pegar: ");
        scanf("%d", &limite);
        'limite' == 10;
        if (limite > 10 ){
            printf("so pode pegar 10 ou menos livros");
        }
        else printf("vc pode pegar o(os) livro(os)");

      break;
    case 4:

        printf("quantos livros quer pegar: ");
        scanf("%d", &limite);
        'limite' == 1;
        if (limite > 1 ){
            printf("so pode pegar 1 ou menos livros");
        }
        else printf("vc pode pegar o(os) livro(os)");


      break;
      default:
      printf("vc colocou algo de errado");
  }
           printf("\n quer voltar? (s/n): ");
        scanf (" %c", &continuar);
        }while (continuar == 'S' || continuar == 's');

    printf("\n fim do programa");

  return 0;
}
