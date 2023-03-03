#include<stdio.h>
int main()
{
	//variable declaration
	unsigned int num;
	unsigned int ans = 0;

	// code
	printf("enter the value of == ");
	scanf("%d", &num);
	//count bit = 1

	for (ans = 0; num != 0; num >>= 1)
	{
		if (num & 01)
		{
			ans++;
		}
	}
	printf("\n count = %d ", ans);
	return 0;
}