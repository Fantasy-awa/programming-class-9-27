#include<stdio.h>
int main()
{
  char ch;
  scanf("%c", &ch);
  (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z') ? printf("%c 是字母\n", ch) : (ch >= '0' && ch <= '9') ? printf("%c 是數字\n", ch) : printf("%c 其他\n", ch);
}