#include<stdio.h>
int main()
{
	int a;
	printf("enter anye number");
	scanf("%d", &a);
	if (a > 0)
	{
		printf("number is positive");

	}
	else if(a < 0)
	{
		printf("number is negitive");

	}
	else if ( a == 0)
	{
		printf("number is zero");
	} 
	return 0;

}