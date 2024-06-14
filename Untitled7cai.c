# include <stdio.h>
int main (){
    float rendimento, imposto;

    printf("Valor Redimento: ");
    scanf("%f", &rendimento);
    imposto = rendimento* 0.15;
    printf("imposto: %.2f\n", imposto);
return 0;
}
