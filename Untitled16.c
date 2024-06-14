#include <math.h>
 int main (){

    int idade;
    printf ("Qual sua idade: ");
    scanf ("%d", &idade);

    if (idade >= 18){
    printf("maior de idade");
    }
    else if(idade <= 18){printf ("menor de idade");
    }
  return 0;
}
