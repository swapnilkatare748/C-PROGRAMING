#include<stdio.h>

int comparing_string(char* a, char* b)
{
	while (*a == *b)
	{
		if (*a == '\0' || *b == '\0')
		{
			break;
		}
		a++;
		b++;
	}
	if (*a == '\0' && *b == '\0')
	
		return 0;
	else
		return -1;
	

}

int main()
{
	char first[100], second[100], result;
	printf("\nenter the fist string = ");
	gets(first);
	printf("\n second string = ");
	gets(second);
	result = comparing_string(first, second);
	if (result == 0)
	{
	    printf("\nstring is equal ");
	{
	else
	{	printf("\nstring is not equal");
	
	}
	
	return 0;

}
