#include<stdio.h>
typedef struct complex
{
	float real;
	float imag;
} complax;
void addnumders(complax c1, complax c2, complax* result);

int main()
{
	complax c1, c2, result;
	printf("for fist number.\n");
	printf("enter the real part");
	scanf("%f", &c1.real);
	printf("enter imaginary pary:");
	scanf("%f", &c1.imag);

	printf("\nfor second number.\n");
	printf("enter real part:");
	scanf("%f", &c2.real);
	printf("enter imaginary part:");
	scanf("%f", &c2.imag);

	addnumders(c1,c2, &result);
	printf("'n result.real = %.2f\n", result.real);
	printf("result.imag = %f.2f", result.imag);
	return 0;
}
void addnumders(complax c1, complax c2, complax* result)
{
	result->real = c1.real + c2.real;
	result->imag = c1.imag + c2.imag;
}