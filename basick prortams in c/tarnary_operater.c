#include<stdio.h>
int main()
{
	int n, m;
	printf("enter the numbers = ");
	scanf("%d%d", &n, &m);
	(n > m) ? printf("n is greater then m") : printf("m is greater ");
	return 0;
}