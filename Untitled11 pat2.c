#include <stdio.h>
int main (){
    float salariob, salariol;
    printf("Qual seu salario: ");
    scanf("%f", & salariob);
    if (salariob <= 1412.00){
            salariol = salariob - (salariob* 0.075);
            }
            else if (salariob >= 1412.01 & salariob <= 2666.68){
             salariol = salariob - (salariob* 0.09);
            }
            else if (salariob >= 2666.69 & salariob <= 4000.03){
             salariol = salariob - (salariob* 0.12);
            }

            else if (salariob >= 4000.04){
             salariol = salariob - (salariob* 0.14);
            }
         printf ("Salario: %f", salariol);

         return 0;
}
