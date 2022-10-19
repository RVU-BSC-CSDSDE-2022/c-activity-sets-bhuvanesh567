#include <stdio.h>
int sum_func(int *x, int *y , int *sum);

int main(void) {
  int x, y,sum;
  printf("Enter the first number");
  scanf("%d", &x);
  printf("Enter the second number");
  scanf("%d", &y);
  return 0;
}


int sum_func(int *x, int *y, int *sum);

{
  sum=x+y;
  return *sum;
  
}
