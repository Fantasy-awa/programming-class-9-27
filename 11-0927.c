#include <stdio.h>

int main()
{
  char ch;
  scanf("%c", &ch);
  (ch >= 'A' && ch <= 'Z') ? printf("¤j¼g") : (ch >= 'a' && ch <= 'z') ? printf("¤p¼g") : 0;
  
}