#include <stdio.h>
int main()
{
  int days;
  scanf("%d", &days);
  if(days == 1)
    printf("星期一\n");
  else if(days == 2)
    printf("星期二\n");
  else if(days == 3)
    printf("星期三\n");
  else if(days == 4)
    printf("星期四\n");
  else if(days == 5)
    printf("星期五\n");
  else if(days == 6)
    printf("星期六\n");
  else if(days == 7)
    printf("星期日\n");
}