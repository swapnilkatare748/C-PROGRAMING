#include<stdio.h>
int main()
{
	int i;
	for (i = 0; i <= 10; i++)
	{
		int num = 0;
		for (num = 0; num <= 10; num++)
		{
			printf("\t%d", i * num);
		}
		printf("\n");
	}
	return 0;
}