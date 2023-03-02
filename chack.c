#include<stdio.h>
int main()
{
	int n;
	printf("\n\venter the number = ");
	scanf("%d", &n);

	if (n % 2 == 0)
	{
		printf("number is prime ");
	}
	else
		printf("number is odd");
	return 0;
}