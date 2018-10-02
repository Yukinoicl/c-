#include <stdio.h>

int main(void)
{

	int n, b;

	printf("n的值：");
	scanf("%d",&n);

	for(b = 1; b <= n; b++){

		printf("%d的二次方是%d\n",b,b*b);

	}

	return 0;

 }
