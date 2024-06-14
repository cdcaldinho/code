#include <stdio.h>
int main() {
  int operador,cpf, code;
  char escolha,continuar;
   do {
  printf("Livros: 1|\n Contato: 2|\n informações de acesso: 3|\n cadastro:4|\n ");
  scanf(" %i", &operador);

  switch (operador) {
      case 1:

      printf("code (1)- Livro me da 10.");

      printf("code (2)- Livro dos livros.");

      printf("code (3)- Livro i love Amy.");

      printf("code (4)- Livro a volta de quem foi.");

      printf("code (5)- O livro.");

      printf("code (6)- Livro de 200 dicas para ficar rico.");
        printf("Qual seu cpf: ");
      scanf("%i", &cpf);
      break;
      case 2:

      printf("Numero: (14)9989-854/n gmail: bibliotecaaquitemlivro@gmail.com\n Redes sociais: @biblioteca_aqui_tem_muitos_livros");


      break;
      case 3:

       printf("estamos aberto das 5:00 da manha ate a meia noite.\n funcionarios: \n parte da manha juninho \n parte de tarde maria \n parte de noite mario \n IMPORTANTE: nessesario informar seu cpf para retirado do livro");


      break;
      case 4:
      printf("Qual seu Cpf sera nessesario ");


      break;
}

    printf("Qual o codigo do seu livro: ");
    scanf("%i", &code);
    switch (code){

    case 1:

    printf("Livro me da 10 \n Foi escolhido \n devolver até 29 de julho \n");
    printf("Cpf dgitado %i", cpf);
     break;
    case 2:
    printf("Livro dos livros. \nFoi escolhido. \n devolver até 29 de julho \n");
    printf("Cpf dgitado %i", cpf);
     break;
    case 3:
    printf("Livro i love Amy. \nFoi escolhido. \n devolver até 29 de julho \n");
    printf("Cpf dgitado %i", cpf);
     break;
    case 4:
    printf(" Livro a volta de quem foi. \nFoi escolhido. \n devolver até 29 de julho \n");
    printf("Cpf dgitado %i", cpf);
    break;
    case 5:
    printf("O livro \nFoi escolhido. \n devolver até 29 de julho \n");
    printf("Cpf dgitado %i", cpf);
     break;
    case 6:
    printf("Livro de 200 dicas para ficar rico. \nFoi escolhido. \n devolver até 29 de julho \n");
    printf("Cpf dgitado %i", cpf);
    }


        printf("\n quer voltar? (s/n): ");

        scanf (" %c", &continuar);

        }while (continuar == 'S' || continuar == 's');

        printf("\n fim do programa");

  return 0;
}
