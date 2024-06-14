#include <stdio.h>

int main(){
  float temperatura[] = {27.5,28,29.7,31.7,25.3};
    int i;
  int soma = 0;
  float media = 0;
  for (i = 0; i <= 5; i++) {
        soma = soma + temperatura[i];
}
    media = soma /5;
  printf("Media em graus: %.2f",media);

}
