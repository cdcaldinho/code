#include<stdio.h>

int main(){
    float fat, n, x;

    printf("Digite um numero: ");
    scanf("%f", &x);

    fat=1;
    for(n=x; n>=1; n--){
      fat  = fat * n;
      }

    printf("%.0f \n", fat);

  return 0;
}
