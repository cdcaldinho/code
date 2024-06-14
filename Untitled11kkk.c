#include <stdio.h>

int main(){
  int nota[5] = {10,10,10,10,10};
  int i;
  int soma = 0;
  float media = 0;
  for (i = 0; i <= 5; i++) {
        soma = soma + nota[i];
}
    media = soma /5;
  printf("Media: %.2f",media);

}
