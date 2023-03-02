#include<stdio.h>
int main()
{
	int num1, num2;
	int sum, sub, mul, mod;
	float div;
	printf("enter number 1 = ");
	scanf("%d", &num1);
	printf("enter number 2 = ");
	scanf("%d", &num2);

	sum = num1 + num2;
	sub = num1 - num2;
	mul = num1 * num2;
	mod = num1 % num2;
	div = (float) num1 / num2;
		printf("sum = %d\n", sum);
		printf("sub = %d\n", sub);
		printf("mul = %d\n", mul);
		printf("mod = %d\n", mod);
		printf("div = %d\n"), div;
		
		return 0;

}