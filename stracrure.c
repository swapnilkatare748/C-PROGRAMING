#include<stdio.h>

struct point
{
	int x;
	int y;
	int z;
};
int main()
{
	struct point s;
	
	printf("size of point = %d", sizeof(s));
	printf("size of struct point = %d", sizeof(struct point));

	//code
	//write
	s.x = 10;
	s.y = 20;
	s.z = 30;
	//read 
	printf("\n s.x = %d", s.x);
	printf("\n s.y = %d", s.y);
	printf("\n s.z = %d", s.z);

	return 0;

}