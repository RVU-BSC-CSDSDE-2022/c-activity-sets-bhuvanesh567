#include <stdio.h>
int sum_func(int *x, int *y , int *sum);

int main() {
  int x, y,sum;
  printf("Enter the first number");
  scanf("%d", &x);
  printf("Enter the second number");
  scanf("%d", &y);
  sum_func(&x, &y,&sum);
  printf("%d", sum);
  return 0;
}


sum_func(int *x, int *y, int *sum)

{
  
  *sum=*x+*y;
  
  
}
