#include<stdio.h>
int main()
{
  char ch;
  scanf("%c", &ch);
  (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z') ? printf("%c �O�r��\n", ch) : (ch >= '0' && ch <= '9') ? printf("%c �O�Ʀr\n", ch) : printf("%c ��L\n", ch);
}