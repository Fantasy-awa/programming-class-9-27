#include <stdio.h>

int main()
{
  char ch;
  scanf("%c", &ch);
  (ch >= 'A' && ch <= 'Z') ? printf("�j�g") : (ch >= 'a' && ch <= 'z') ? printf("�p�g") : 0;
  
}