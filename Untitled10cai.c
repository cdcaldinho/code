int main() {
    float valor_t, valor_f ;
    char pagamento[10];
    int parcelas;

        printf("Digite o valor total da compra: ");
        scanf("%f", &valor_t);

        printf("forma de pagamento: (vista ou parcelado): ");
        scanf(" %s", &pagamento);
        if (strcmp(pagamento, "vista") == 0) {
        printf("O valor final a ser pago �: %.2f\n", valor_t * 0.90);
        }
        else if (strcmp(pagamento, "parcelado") == 0) {
        printf("Digite o numero de parcelas (2 a 5): ");
        scanf("%d", &parcelas);
        if (parcelas >= 2 && parcelas <= 5) {
        valor_f = valor_t * (1 + 0.05 * parcelas);
        printf("O valor final a ser pago � de aproximadamente R$ %.2f\n", valor_f);
        }
        else {
        printf("N�mero de parcelas inv�lido. Escolha entre 2 e 5.\n");
        }
        }
        else {
        printf("Op��o de pagamento inv�lida. Escolha entre '� vista' ou 'parcelado'.\n");
        }

        return 0;
}
