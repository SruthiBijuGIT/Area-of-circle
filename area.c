#include <stdio.h>
int main() {

  float r,area;
  printf("Enter radius of the circle");
  scanf("%f",&r);
  area=(float)3.14*r*r;
  printf("AREA =%.2f",area);
  return 0;
}
