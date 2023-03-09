#include<stdio.h>
struct point
{
	int s;
	int m;
	int r;
	int y;
}point;

int main()
{
	printf("\n size of point = %d", sizeof(point));
	printf("\n size of struct point %d", sizeof(struct point));

	// code
	point.s = 10;
	point.y = 20;
	point.r = 49;
	point.m = 30;

	//read
	printf("\n point.s = %d", point.s);
	printf("\n point.y = %d", point.y);
	printf("\n point.m = %d", point.m);
	printf("\n point.r = %d", point.r);

	return 0;
}