#include<stdio.h>
int main(int argc,char *argv[],char* envp[])
{
	int count = argc;
	int n, m, ans;
	if (count != 3)
	{
		printf("envalid argument list is not valid");
		exit(0);
	}
	n = atoi(argv[1]);
	m = atoi(argv[2]);  //atoi is standerd libary function that converts string to integer
	ans = n * m;
	printf("\n ans = %d", ans);
	return 0;
}