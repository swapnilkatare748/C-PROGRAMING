#include<stdio.h>
struct student
{
	char name[50];
	int age;
	int	weight;
};

// function declaration
struct student  getinformation();
int main()
{	

	struct student  s2;
	s2 = getinformation();
	printf("\nname of student is = %s", s2.name);
	printf("\nage of student is = %d", s2.age);
	printf("\nweight of student is = %d", s2.weight);
	return 0;
}
struct student  getinformation()
{
	struct student s;
	printf("\nenter the name = ");
	scanf("%[^\n]%*c", s.name);
	printf("\nenter the age = ");
	scanf("%d", &s.age);
	printf("\nenter the weight = ");
	scanf("%d", &s.weight);
	return s;
}