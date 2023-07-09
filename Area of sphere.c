#include<stdio.h>
#include<conio.h>

int main(){

int radius;

printf("Enter the radius: ");
scanf("%d",&radius);

float Area;
Area = (float)4 * 3.14 * radius * radius;

printf("Area of the sphere is: %f ",Area);

return 0;

}
