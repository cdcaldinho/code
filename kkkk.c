#include<stdio.h>

int main() {
  char alfabeto[26];
  int i;


  for (i = 0; i < 26; i++) {
       alfabeto[i] = 'A' + i;
  }
  for (i = 0; i < 26; i++) {
     printf("%c ", alfabeto[i]);
  }

}
