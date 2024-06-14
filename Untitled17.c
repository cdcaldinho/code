#include <math.h>
int main (){
    int numero1, numero2;
    printf("Digite um numero: ");
    scanf ("%d", &numero1);
    printf ("Digite o 2 numero: ");
    scanf ("%d", &numero2);
    if(numero1 != numero2){printf ("Numeros sao diferentes");
    }
    else if (numero1 == numero2){
    printf("Os numeros sao iguais");
    }
  return 0;
}
