#include <stdio.h>
int main (){
    float montante, mesdopagamento, taxaj = 0.07;
    int meses;

    printf("Valor do emprestimo: ");
    scanf("%f", &montante);

    if (montante < 100 || montante > 10000){
    printf("Valor do emprestimo nao permitido.\n");
    return 1;
    }
    printf("Prazo de pagamento em meses: ");
    scanf("%d", &meses);

    if (meses <= 0 || meses > 36){
    printf("prazo fora do permitido");
    }
    mesdopagamento = montante* (1 + taxaj* meses)/meses;
    printf("Valor do pagamento mensal do emprestimo e: R$ %.2f\n", mesdopagamento);
    return 0;
}
