#include<stdio.h>
int main()
{
	int f,m,num;
	printf("enter the any number as you like");
	scanf("%d", &num);
	if (num%5 == 0)
	{
	 f = 1;
	}
	 if(num%7 == 0)
	{
	 m = 1;
	}
	if (f == 1 && m == 1)
	{
		printf("enter number is %d divisible by 5 and 7", num);
	}
	else if (f == 1)
	{
		printf("%d = is only divisible by  only 5  not 7", num);
	}
	else if (m == 1)
	{
		printf("%d = is divisible by only 7 not 5", num);
	}
	else
	{
		printf("number is not divisible by 5 and 7 ");
	}
	return 0;
}