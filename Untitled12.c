#include <math.h>
int main () {
    float peso, altura, imc;
    printf ("sua altura: ");
    scanf ("%f", & altura);
    printf ("seu peso");
    scanf ("%f", & peso);

    imc = peso / (altura*altura);
    if (imc <= 16.9 ){
        printf ("muito abaixo do peso");
    }
    else if (imc >= 17 && imc <= 18.4){
        printf("abaixo do peso %f\n", imc);
    }
   else if (imc >= 18.5 && imc <= 24.9){
        printf("peso normal %f\n", imc);
    }
    else if (imc >= 25 &&imc <= 29.9){
        printf("acima do peso %f\n", imc);
    }
    else if (imc >= 30 &&imc <= 34.9){
        printf("obsidade grau 1 %f\n", imc);
    }
    else if (imc >= 35 && imc <= 40){
        printf("obsidade grau 2 %f\n",imc);
    }
    else if (imc > 40){
        printf("obsidade grau 3");
    }

    return 0;
}
