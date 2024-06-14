#include <stdio.h>

int main () {
    float cont, nota, soma=0, media;

    for(cont=0; cont<4; cont++){
    printf("informe a nota:");
    scanf("%f", &nota);
    }

    media = soma /4;
    if(nota>6,5){
    printf("aprovado");
    }

    else if(nota<6,4){
        printf("reprovado");
    }

    printf("a media do aluno foi: %f\n", media);

    return 0;
}
