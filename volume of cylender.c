#include<stdio.h>

int main(){
	
	int radius;
	int height;
	
	
	printf("Take the value of radius:");
	scanf("%d",&radius);
	
	printf("Take the the value of height:"); 
	scanf("%d",&height);
	
	float Volume;
	
	Volume = (float)3.14 * radius * radius * height;
	
	printf("Volume of the cylender is:%f",Volume);
}
