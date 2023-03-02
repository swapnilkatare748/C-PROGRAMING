#include<stdio.h>
int main()
{
	float length, width, height;
	float surface_area, volume;
	printf("enter the values of length ,width and hight = ");
	scanf("%f%f%f", &length, &width, &height);
	volume = length * width * height;
	surface_area = 2 * ((length * width) + (width * height) + (length * height));
	printf("\nthe surface area of of cuboid = %f", surface_area);
	printf("\nvolume of cuboid %f", volume);
}