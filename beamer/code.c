#include<stdio.h>

/**
 * @brief faz a media entre números positivos introduzidos pelo
 * utilizador
 */
int main() {
  float c, num;
  int count = 0;
  do {
    printf("Introduza um número positivo (-1 sair): ");
    scanf("%f", &c);
    if (c >= 0) {
      num += c;
      count++;
    }
  } while(c >= 0);
  printf("Media dos números %f\n", (num / count));
}
