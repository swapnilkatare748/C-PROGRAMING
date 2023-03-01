#include<stdio.h>
int main()
{
	char charactor;
	printf("enter a character\n");
	scanf("%c", &charactor);
	if (charactor >= 0 && charactor <= 9)
	{
		printf("%c is a digit \n", charactor);
	}
	else 
	{
		printf("%c is a digit\n",charactor);
	}
}