int main() {
    float valor_t, valor_f ;
    char pagamento[10];
    int parcelas;

        printf("Digite o valor total da compra: ");
        scanf("%f", &valor_t);

        printf("forma de pagamento: (vista ou parcelado): ");
        scanf(" %s", &pagamento);
        if (strcmp(pagamento, "vista") == 0) {
        printf("O valor final a ser pago é: %.2f\n", valor_t * 0.90);
        }
        else if (strcmp(pagamento, "parcelado") == 0) {
        printf("Digite o numero de parcelas (2 a 5): ");
        scanf("%d", &parcelas);
        if (parcelas >= 2 && parcelas <= 5) {
        valor_f = valor_t * (1 + 0.05 * parcelas);
        printf("O valor final a ser pago é de aproximadamente R$ %.2f\n", valor_f);
        }
        else {
        printf("Número de parcelas inválido. Escolha entre 2 e 5.\n");
        }
        }
        else {
        printf("Opção de pagamento inválida. Escolha entre 'à vista' ou 'parcelado'.\n");
        }

        return 0;
}
