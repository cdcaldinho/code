# include <stdio.h>
int main (){
    float valor_i, valor_t, lucro_preju;
    printf("Valor do investimento inicial: ");
    scanf("%f", & valor_i);
    printf("valor atual do investimento: ");
    scanf("%f", &valor_t);
    lucro_preju = valor_t - valor_i;
    if (lucro_preju > 0) {
    printf("Voce teve um lucro de %.2f.\n", lucro_preju);
    }
    else if (lucro_preju < 0){
    printf("Voce teve um prejuizo de %.2f\n", -lucro_preju);
    }
    else {
    printf("Sem lucro e prejuzo. \n");
    }
    return 0;
}
