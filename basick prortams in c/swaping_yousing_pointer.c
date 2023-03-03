#include<stdio.h>
int main()
{
	int swapn_numbers(int*, int*);
	int n1, n2;
	n1 = 10;
	n2 = 80;
	printf("\nenter values are n1 = %d ,n2 =  %d", n1, n2);
	swapn_numbers(&n1, &n2);
	printf("\nafter swap numbers is n1 = %d ,n2 = %d", n1, n2);
}
int swapn_numbers(int* n, int* m)
{
	int temp;

	temp = *n;
	*n = *m;
	*m = temp;
}