#include <stdio.h>
int main()
{
  int var, a, b, c, d;
  scanf("%1d%1d%1d%1d", &a, &b, &c, &d);
  //a = var % 10;
  //b = (var / 10) % 10;
  //c = (var / 100) % 10;
  //d = var / 1000;
  if(a == b || a == c || a == d || b == c || b == d || c == d)
    printf("有重複");
  else
    printf("沒有重複");
}