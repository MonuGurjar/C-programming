#include<stdio.h>

int sum(int k);

int main() 
{
    int i;
    printf ("enter number ");
    scanf("%d",&i);
    int result = sum(i);
    printf("%d", result);
    return 0;
}

int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}