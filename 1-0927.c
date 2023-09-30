#include<stdio.h>
int main()
{
  char ch;
  scanf("%c", &ch);
  if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
    printf("%c 是字母\n", ch);
  else if(ch >= '0' && ch <= '9')
    printf("%c 是數字\n", ch);
  else
    printf("%c 其他\n", ch);
}