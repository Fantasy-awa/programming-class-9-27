#include <stdio.h>

int main()
{
  int number1, number2, m;
  scanf("%d%d", &number1, &number2);
  m = (number1 >= number2) ? number1 : number2;
  printf("%d", m);
}