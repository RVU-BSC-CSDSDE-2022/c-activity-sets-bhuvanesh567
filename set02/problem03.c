#include <stdio.h>


struct  triangle
{
    float base;
    float height;
    float area;
}
typedef struct triangle Triangle;

int main()
{
   Triangle t;
   t=input_triangle();
   find_area(&t);
   output(t);
   return 0;
}
Triangle input_triangle();
void find_area(Triangle *t);
void output(Triangle t);

Triangle input_triangle()
{
    Triangle t;
    printf("Enter the base\n");
    scanf("%f", &t.base);
    printf("Enter the height\n");
    scanf("%f", &t.height);
    return t;
}

void find_area(Triangle *t)
{
       t->area=(t->base)*(t->height)*(0.5);
}

void output(Triangle t)
{
  printf("The area is %f", t.area);
}