#include<stdio.h>
int main()
{
	int* parr = NULL;
	int arr[10];
	parr = arr;
	for (int i = 0; i <= 10; i++)
	{
		arr[i] =  (i+1) * 10;
		
	}for (int i = 0; i <= 10; i++)
	{
		printf("\narr[%d] = %d", i, arr [i]);
	
	}
	printf("\n\nvalude of parr = %p", parr);
	printf("\nvalude of parr + 1 = %p", (parr + 1));

	printf("\n\n valude of arr[] = %p", arr);
	printf("\nvalude of arr + 1[] = %p", (arr + 1));

	printf("\n\n *arr = %d", *arr);
	printf("\n parr[0] = %d", parr[0]);

	printf("\n\n *(arr + 1)= %d", *(arr+1));
	printf("\n parr[1] = %d", parr[1]);

	return 0;
}