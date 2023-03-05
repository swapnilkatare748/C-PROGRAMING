#include<stdio.h>
int main()
{
	// local variable
	int* p = NULL;
	//ALLOCATION OF MEMORY
	p = (int*) malloc(4);// mallock is use to store the memory to heap section for onllay one char,int,of any data type

	// error chack
	if (p == NULL)
	{
		printf("anable to allocaket memory");
		exit(0);
	}
	//use allocated memory
	*p = 10;
	printf("\n *p == %d", *p);

	//free the memory
	if (p != NULL)
	{
		free(p);
		p = NULL;
     }
	return 0;
}