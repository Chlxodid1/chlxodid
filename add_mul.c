#include <stdio.h>

void add_mul(int a, int b, int c[], int d[]);

int main(void)
{
  int a, b, sum, mul;
  printf("���� �� a�� �Է��Ͻÿ� : ");
  scanf("%d", &a);
  printf("���� �� b�� �Է��Ͻÿ� : ");
  scanf("%d", &b);

  add_mul(a, b, &sum, &mul);

  printf("�� ���� �� : %d\n", sum);
  printf("�� ���� �� : %d\n", mul);

  return 0;
}

void add_mul(int a, int b, int c[], int d[])
{
  *c = a + b;
  *d = a * b;
}
