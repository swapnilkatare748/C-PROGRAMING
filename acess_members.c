#include<stdio.h>
struct person
{
	int age;
	float weight;
};

int main()
{
	struct person* personptr, person1;
	personptr = &person1;

	printf("\nenter age: ");
	scanf("%d", &personptr->age);

	printf("\nenter weight:");
	scanf("%f", &personptr->weight);

	printf("\ndisplaying:\n");
	printf("age: %d\n", personptr->age);
	printf("weight : %f", personptr->weight);
	return 0;

}