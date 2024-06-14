#include <math.h>
 int main (){
    char  senha1[20], senha2[20];
    printf ("Digite sua senha: ");
    scanf ("%s", &senha1);
    printf ("Confirma sua senha: ");
    scanf ("%s", &senha2);
    if (stricmp(senha1, senha2)==0){
    printf("Sua senha esta igual");
    }
     else if (senha1 != senha2){
    printf("a senha são diferentes");
  return 0;
    }
 }
