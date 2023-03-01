#include<stdio.h>
int main()
{
	void swapnig(int*, int*);
	int num1, num2;        //locakel varables..
	printf("enter num1 = ..");
	scanf("%d", &num1);
	printf("enter num2 = ..");
	scanf("%d", &num2);
	printf("\n\tbefore swapning numbers");
	printf("\nnum1 = %d", num1);
	printf("\nnum2 = %d", num2);
	 
	//function decleration;
	 swaping(&num1,&num2);
	printf("\nafter swaping numbers");
	printf("\nnum1 = %d", num1);
	printf("\nnum2 = %d", num2);
	return 0;
}

void swaping(int* num1,int* num2)
{
	int tamp;
	tamp = *num1;
	*num1 = *num2;
	*num2 = tamp;
}