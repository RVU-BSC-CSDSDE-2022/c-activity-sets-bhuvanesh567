#include <stdio.h>
#include<math.h>

int calcDis(int x1, int x2, int y1, int y2)
{   
    return sqrt((pow((x2- x1), 2)) + (pow((y2- y1), 2)));
}
int main()
{   
    int x1, x2, y1, y2;
    
    printf("Enter the First Coordinates   = ");
    scanf("%d %d",&x1, &y1);

    printf("Enter the Second Coordinates  = ");
    scanf("%d %d",&x2, &y2);

    printf("\nThe Distance = %d\n", calcDis(x1, x2, y1, y2)); 
}
