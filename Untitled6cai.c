#include <stdio.h>
int main() {
   float salario_b, salario_l, ir,inss;

    printf("Salario bruto: ");
    scanf("%f", &salario_b);
    if (salario_b <= 1100.00){
    inss = salario_b * 0.075;
    }
    else if (salario_b <= 2203.48) {
    inss = salario_b *0.09;
    }
    else if (salario_b <=3305.22){
    inss = salario_b*0.12;
    }
    else{
    inss > 3305.23 * 0.14;
    }
    salario_l = salario_b - inss;

    if (salario_l <= 1903.98) {
    ir = 0;
    }
    else if (salario_l <= 2826.65) {
    ir = (salario_l - 1903.98) * 0.075;
    }
    else if (salario_l <= 3751.05) {
    ir = (salario_l -2826.65) * 0.15 + 69.16;
    }
    else if (salario_l <= 4664.68){
    ir= (salario_l - 3751.05) * 0.225 + 69.16 + 314.22;
    }
    else {
    ir = (salario_l - 4664.68) * 0.275 +69.16 + 314.22 +692.78;
    }
    salario_l -= ir;

    printf("salario liquido: %.2f\n ", salario_l);
}
