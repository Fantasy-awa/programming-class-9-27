#include <stdio.h>
int main()
{
  int n1, n2, n3, n4, s;
  scanf("%d%d%d%d", &n1, &n2, &n3, &n4);
  if(n1 <= n2 && n1 <= n3 && n1 <= n4) {
    printf("%d ", n1);
    if(n2 <= n3 && n2 <= n4) {
      printf("%d ", n2);
      if(n3 <= n4)
        printf("%d %d\n", n3, n4);
      else
        printf("%d %d\n", n4, n3);
    }
    else if(n3 <= n2 && n3 <= n4) {
      printf("%d ", n3);
      if(n2 <= n4)
        printf("%d %d\n", n2, n4);
      else
        printf("%d %d\n", n4, n2);
    }
    else {
      printf("%d ", n4);
      if(n2 <= n3)
        printf("%d %d\n", n2, n3);
      else
        printf("%d %d\n", n3, n2);
    }
  }
  else if(n2 <= n1 && n2 <= n3 && n2 <= n4) {
    printf("%d ", n2);
    if(n1 <= n3 && n1 <= n4) {
      printf("%d ", n1);
      if(n3 <= n4)
        printf("%d %d\n", n3, n4);
      else
        printf("%d %d\n", n4, n3);
    }
    else if(n3 <= n1 && n3 <= n4) {
      printf("%d ", n3);
      if(n1 <= n4)
        printf("%d %d\n", n1, n4);
      else
        printf("%d %d\n", n4, n1);
    }
    else {
      printf("%d ", n4);
      if(n1 <= n3)
        printf("%d %d\n", n1, n3);
      else
        printf("%d %d\n", n3, n1);
    }
  }
  else if(n3 <= n1 && n3 <= n2 && n3 <= n4) {
    printf("%d ", n3);
    if(n1 <= n2 && n1 <= n4) {
      printf("%d ", n1);
      if(n2 <= n4)
        printf("%d %d\n", n2, n4);
      else
        printf("%d %d\n", n4, n2);
    }
    else if(n2 <= n1 && n2 <= n4) {
      printf("%d ", n2);
      if(n1 <= n4)
        printf("%d %d\n", n1, n4);
      else
        printf("%d %d\n", n4, n1);
    }
    else {
      printf("%d ", n4);
      if(n1 <= n2)
        printf("%d %d\n", n1, n2);
      else
        printf("%d %d\n", n2, n1);
    }
  }
  else {
    printf("%d ", n4);
    if(n1 <= n2 && n1 <= n3) {
      printf("%d ", n1);
      if(n2 <= n3)
        printf("%d %d\n", n2, n3);
      else
        printf("%d %d\n", n3, n2);
    }
    else if(n2 <= n1 && n2 <= n3) {
      printf("%d ", n2);
      if(n1 <= n3)
        printf("%d %d\n", n1, n3);
      else
        printf("%d %d\n", n3, n1);
    }
    else {
      printf("%d ", n3);
      if(n1 <= n2)
        printf("%d %d\n", n1, n2);
      else
        printf("%d %d\n", n2, n1);
    }
  }
}