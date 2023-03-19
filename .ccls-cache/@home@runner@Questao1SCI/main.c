#include <stdio.h>

int main(void) {
  float media;
  int par, impar, somaMedia = 0;
  int numeros[5];

  printf("Digite 5 numeros: \n");
  // Laco para insercao de valores
  for (int i = 0; i < 5; i++) {
    scanf("%d", &numeros[i]);
  }
  // Impressao dos numeros pares
  printf("Numeros pares:\n");
  for (int i = 0; i < 5; i++) {
    if (numeros[i] % 2 == 0) {
      printf("%d ", numeros[i]);
    }
  }
  // Impressao dos numeros impares
  printf("Numeros impares:\n");
  for (int i = 0; i < 5; i++) {
    if (numeros[i] % 2 != 0) {
      printf("%d ", numeros[i]);
    }
  }
  // Calculo e impressao da media geral
  printf("\n");
  for (int i = 0; i < 5; i++) {
    somaMedia += numeros[i];
  }

  media = somaMedia / 5;

  printf("Valor da media dos 5 numeros: %.2f\n", media);

  return 0;
}