#include <stdio.h>

int main(void) {
  char str[50];
  char ch;
  int i, contador=0;
  printf("digite a string desejada:");
  scanf(" %s", &str);

  printf("digite o caracter para buscar:");
  scanf(" %c", &ch);

  for(i=0; str[i]!='\0';i++){
    if (str[i] == ch){
      contador++;
    }
  }
  printf("o caractere [%c] aparece %i",ch,contador);
  return 0;
}