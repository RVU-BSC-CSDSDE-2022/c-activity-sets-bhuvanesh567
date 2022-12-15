#include <stdio.h>
#include<math.h>
void input_camel_details(float *radius, float *height, float *length);
float find_weight(float radius, float height, float length);
void output(float radius, float height, float length, float weight);
int main()
{
  float radius, height, length, weight;
    
  input_camel_details(&radius, &height, &length);
  weight = find_weight(radius, height, length);
  output(radius, height, length, weight);
  
  return 0;
}
void input_camel_details(float *radius, float *height, float *length)
  {
    float input;
    
    printf("Enter the radius of the camel: ");
    scanf("%f", radius);
    
    printf("Enter the height of the camel: ");
    scanf("%f", height);
    
    printf("Enter the length of the camel: ");
    scanf("%f", length);
  }
float find_weight(float radius, float height, float length)
  {
    float weight;
    float pi = 3.14;
    
   weight = pi *pow(radius,3) * sqrt(height * length);
    
    return weight;
  }
void output(float radius, float height, float length, float weight)
  {
    printf("The weight of the camel is: %f kg\n", weight);
    printf("The radius of the camel is: %f m\n", radius);
    printf("The height of the camel is: %f m\n", height);
    printf("The length of the camel is: %f m\n", length);
  }
  // gcc problem02.c -lm -o problem02//
 //./problem02//
  

  

  