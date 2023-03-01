#include<stdio.h>
int main()
{
	int sum, a, i;
	int avg;
	int marks[100];
	printf("  total numbers \n");
	scanf("%d", &a);
	printf("enter marks \n");
	for (i = 0; i < a; i++)
	{
		scanf("%d", &marks[i]);
		sum += marks[i];
	}
	avg = sum / a;
	printf("avarage marks = %d", avg);
	return 0;
}