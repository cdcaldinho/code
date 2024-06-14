#include <stdio.h>
int main(){
    int idade, aposentadoria, restante;
    printf("idade: ");
    scanf ("%d", &idade);

    printf("qual a idade de aposentadoria:");
    scanf("%d", &aposentadoria);

    if (aposentadoria <= idade){
    printf ("vode pode se aposentar. ");
    }
    else {
    restante = aposentadoria - idade;
    printf("faltam %d anos para a aposentadoria. \n", restante);
    }
    return 0;
}
