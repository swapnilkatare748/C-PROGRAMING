#include<stdio.h>
struct point
{
	int a;
	int b;
	int c;

};
int main()
{
	int num = 10;
	int* p_num = NULL;
	struct point point;
	point.a = 10;
	point.b = 20;
	point.c = 30;
	struct point* p_point = NULL;
	p_num = &num;
	p_point = &point;
	// read
	printf("\n p_num = %d", *p_num);
	printf("\n p_point->a = %d", p_point->a);
	printf("\n p_point->b = %d", p_point->b);
	printf("\n p_point->c = %d", p_point->c);
	p_point->a = 100;
	p_point->b = 200;
	p_point->c = 499;
	printf("\n\n (after update)");
	printf("\n p_point->a = %d ", p_point->a);
	printf("\n p_point->b = %d ", p_point->b);
	printf("\n p_point->c = %d ", p_point->c);
	return 0;
	
}