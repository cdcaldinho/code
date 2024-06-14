#include <math.h>
 int main (){

    float nota1, nota2, media;
    printf ("nota1: ");
    scanf ("%f", &nota1);
    printf ("nota2: ");
    scanf ("%f", &nota2);
    media = (nota1 + nota2)/2;
    if ( media >= 7 ){
    printf("Aprovado");
    }
    else if( media <= 5 ){printf ("Reprovado");
    }
    else if (media > 5, media < 7) {printf ("Recuperaçao");
    }

  return 0;
}
