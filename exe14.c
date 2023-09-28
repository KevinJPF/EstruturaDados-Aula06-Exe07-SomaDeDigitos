#include <stdio.h>

int sd(int n) {
  if (n <= 0)
    return 0;

  return (n % 10) + sd(n / 10);
}

int main(void) {
  int n;
  printf("Digite o valor de n: ");
  scanf("%d", &n);

  printf("A soma dos digitos de %d e: %d\n", n, sd(n));
  return 0;
}