#include <stdio.h>

void multi3(int *enderecox);

int main(void) {
  int x = 5;
  printf("X antes: %d\n", x);

multi3(&x);
  printf("Resultado: %d\n", x);

  printf("X depois: %d\n", x);
  return 0;
}

void multi3(int *enderecox) {
  *enderecox = 3 * *enderecox;
}