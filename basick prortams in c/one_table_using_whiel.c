#include<stdio.h>
int main()
{
	int i = 1, num;
	printf("enter the number = ");
	scanf("%d", &num);
	while (i <= 10)
	{
		printf("\t %d", i * num);
		i++;
		printf("\n");
	}return 0;
}