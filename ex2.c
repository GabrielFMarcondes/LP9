#include <stdio.h>

int subtrai3(int X);

int main(void) {
  int numero;
  
  printf("Digite um número: ");
  scanf("%d", &numero);
  printf("Recebido: %d\n", numero);

  int resultado = subtrai3(numero);
  printf("Resultado: %d\n", resultado);

  printf("Atual: %d\n", numero);
  return 0;
}

int subtrai3(int X) {
  return X - 3;
}