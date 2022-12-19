#include <stdio.h>

void input_camel_details(float *radius, float *height, float *length);
int find_mood(float radius, float height, float length);
void output(float radius, float height, float length, int mood);

int main(int argc, char *argv[])
{
  float radius, height, length;
  int mood;
  
  input_camel_details(&radius, &height, &length);
  mood = find_mood(radius, height, length);
  output(radius, height, length, mood);
  
  return 0;
}
void input_camel_details(float *radius, float *height, float *length)
{
  float radius_input, height_input, length_input;
  
  printf("Enter the radius of the camel: ");
  scanf("%f", &radius_input);
  
  printf("Enter the height of the camel: ");
  scanf("%f", &height_input);
  
  printf("Enter the length of the camel: ");
  scanf("%f", &length_input);
  
  *radius = radius_input;
  *height = height_input;
  *length = length_input;
}
int find_mood(float radius, float height, float length)
{
  int mood;
  
  if (height > radius)
    mood = 5;
  else if (height < radius)
    mood = 2;
  else
    mood = 4;
  
  return mood;
}
void output(float radius, float height, float length, int mood)
{
  if (mood == 5)
    printf("The camel is tall and skinny.\n");
  else if (mood == 2)
    printf("The camel is happy.\n");
  else if (mood == 4)
    printf("The camel is flat and skinny.\n");
  else
    printf("The camel is flat and skinny.\n");
}
  








  