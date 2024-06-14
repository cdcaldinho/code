#include <math.h>
 int main (){

    char data[50], gmail[50];
    printf ("Data de nasimento: ");
    scanf ("%s", &data);

    if (data >= 2006){
    printf("Digite seu gmail");
    scanf("%s", &gmail);
    printf("voce esta liberado para usar o sistema");
    }
    else if(data < 2006 ){printf ("Usuario bloqueado");
    }
  return 0;
}
