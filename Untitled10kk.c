#include <stdio.h>

int main () {
int numero[10] = {0, -10, -50, -4, -5, -6, -7, -8, -9, -10};
int i, menor = 0;

for(i = 0; i < 10; i++) {
   if(numero[i] < menor){
    menor = numero[i];
   }
}
   printf("numero menor é: %d", menor);

}
