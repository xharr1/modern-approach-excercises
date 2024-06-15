//Calculate the volume of a sphere
#include <stdio.h>
#define SCALE ((4.0f / 3.0f) * 3.14159f)

int main(void)
{
  float radius;

  printf("Enter the radius of the sphere: ");
  scanf("%f", &radius);

  printf("The volume is: %.2f\n", (SCALE * radius * radius * radius));
}
