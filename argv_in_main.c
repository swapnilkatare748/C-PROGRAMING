#include<stdio.h>
int main(int argc, char* argv[], char* envp[])
{
	// local variables
	int count = argc;
	int num1, num2, ans;
	if (count != 3)
	{
		printf("\n argument list in not valid,hence existing .....!!!");
			exit(0);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]); // atoi is standerd libary function that convert the string into integers ...;
	ans = num1 + num2;
	printf("ans = %d", ans);
	return 0;
}