#include<stdio.h>
int main()
{
	float outer_redius, area, perimeter, iner_redius;
	printf("\nenter iner redius of ring = ");
	scanf("%f", &iner_redius);
	printf("\n enter outer redius of ring =");
	scanf("%f", &outer_redius);
	perimeter = (2 * 3.14) * (iner_redius + outer_redius);
	area = 3.14 * ((iner_redius * iner_redius) + (outer_redius * outer_redius));
	printf("area of circal%f\n perimeter of circial%f\n", area, perimeter);
	return 0;


}