#include<stdio.h>
struct student {
	char name[50];
	int age;
};

//function ptototype
int desplay(struct student s);

int main()
{
	struct student s1;
	printf("\nenter name = ");
	// read string input from the user until \n is enterd
	// \n is descarded
	scanf("%[^\n]%*c", s1.name);

	printf("enter age: ");
	scanf("%d", &s1.age);
   
	display(s1);  //passing struct as an argument
	return 0;
}
int display(struct student s)
{
	printf("\n displaying information");
	printf("\nname: %s", s.name);
	printf("\n age: %d",  s.age );
}