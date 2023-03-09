#include<stdio.h>
typedef struct point
{
	int x;
	int y;
	int z;

}point;
int main()
{
	int* p_num = NULL;
	point* p_point = NULL;
	//code
	p_num = (int*)malloc(sizeof(int));
	p_point = (point*)malloc(sizeof(point));
	//read
	*p_num = 10;
	p_point->x = 100;
	p_point->y = 200;
	p_point->z = 400;
	printf("\n *p_num = %d", *p_num);
	printf("\n p_point-> x = %d", p_point->x);
	printf("\n p_point-> y = %d", p_point->y);
	printf("\n p_point-> z = %d", p_point->z);

	//free allocated memory
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
	return 0;
}