#include<stdio.h>
int main()
{
	int x, y, z;
	printf("enter three numbers");
	scanf("%d%d%d", &x, &y, &z);
	if (x >= y && x <= z)
		printf("x is bitween the y and z");
	else if (y >= x && y <= z)
		printf("y is between x and z");
	else if (z >= x && z <= y)
		printf("z is between x and y");
	else if (z == x && z == y && x == y)
		printf("numbers are same");
	
}