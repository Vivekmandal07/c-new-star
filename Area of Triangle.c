#include<stdio.h>
#include<conio.h>

int main(){

int Base;
int Height;

printf("Put the value of Base of a Triangle:");
scanf("%d",&Base);

printf("Put the value of the Height of a Triangle:");
scanf("%d",&Height);

float Area;
Area =(float)1/2* Base*Height ;

printf("Area of Triangle:%f",Area);

return 0;

}
