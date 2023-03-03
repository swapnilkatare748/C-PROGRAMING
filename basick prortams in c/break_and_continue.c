#include<stdio.h>
int main()
{
	// break;
	int num;
	for (num = 0; num <= 50; num++)
	{
		if (num >= 10)
		{
			printf("\nmemory full stop allocation thanks sar..!!!");
			break;
		}
		printf("\nnumers is = %d", num);
	}//continue
	for (num = 0; num <= 50; num++)
	{
		if (num == 10 )
		{ 
	       printf(" \nenvalid digis !!");
		   continue;
		}
		printf(" \n value of num = %d", num);
	}
	return 0;
}