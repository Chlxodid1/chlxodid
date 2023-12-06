#include <stdio.h>

void add_mul(int a, int b, int c[], int d[]);

int main(void)
{
  int a, b, sum, mul;
  printf("정수 값 a를 입력하시오 : ");
  scanf("%d", &a);
  printf("정수 값 b를 입력하시오 : ");
  scanf("%d", &b);

  add_mul(a, b, &sum, &mul);

  printf("두 수의 합 : %d\n", sum);
  printf("두 수의 곱 : %d\n", mul);

  return 0;
}

void add_mul(int a, int b, int c[], int d[])
{
  *c = a + b;
  *d = a * b;
}
