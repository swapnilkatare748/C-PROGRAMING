#include<stdio.h>
struct point
{
	int x;
	int y;
	int z;
	struct point* p_point;
};
int main()
{
	//local variable declaration
	int* p_num = NULL;
	struct point* p_point = NULL;
	//code
	p_num = (int*)malloc(sizeof(int));
	p_point = (struct point*)malloc(sizeof(struct point));
	//read
	*p_num = 10;
	p_point->x = 100;
	p_point->y = 200;
	p_point->z = 400;
	printf("\n p_num = %d", *p_num);
	printf("\n p_point -> x = %d", p_point->x);
	printf("\n p_point -> y = %d", p_point->x);
	printf("\n p_point -> z = %d", p_point->z);

	// free the allocated memory 
	if (p_num)
	{
		free(p_num);
		p_num = NULL;
	}
	if (p_point)
	{
		free(p_point);
		p_point = NULL;
        
	}
}