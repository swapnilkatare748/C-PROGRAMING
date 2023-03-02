#include<stdio.h>
int main()
{
	int* a1, * b1, a, b, sum;
	printf("enter the two numbers = ");
	scanf("%d%d", &a, &b);
	a1 = &a;
	b1 = &b;
	sum = *a1 + *b1;
	printf("sum using pointer is = %d", sum);
}