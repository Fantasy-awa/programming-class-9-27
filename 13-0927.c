#include <stdio.h>

int main()
{
  int o1, o2, temp;
  char op;
  temp = scanf("%d %c %d", &o1, &op, &o2);
  temp = (op == '+')?o1 + o2:(op == '-')?o1 - o2:(op == '*')?o1 * o2:o1 / o2;
  printf("%d", temp);
}