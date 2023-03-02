#include<stdio.h>
int main()
{
	// u is initial velocity
	// v is final velocity
	// a is acceleration
	// s is distance
	//t is time
    float u, v, a, s, t;
	printf("enter the  initial velocity(u)\n ");
	scanf("%f", &u);
	printf("enter the time (t)\n");
	scanf("%f", &t);
	printf("enter the acceleration (a) \n");
	scanf("%f", &a);
	v = (u + a) * t ;
	s = u + a *			 (t * t);
	printf("\nfinal velocity (v)=%f", v);
	printf("\ndistance (s)=%f", s);
	return 0;
}