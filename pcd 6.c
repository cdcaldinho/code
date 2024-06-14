#include<stdio.h>

int main(){
    float fat, n;

    fat=1;
  for(n=20; n>=1; n--){
      fat  = fat * n;
      }

  printf("%f \n", fat);

  return 0;
}
