#include <stdio.h>

int main(void)
{

	int a, b;

	printf("显示多少个*");
	scanf("%d",&a);

	for(b = 1; b <= a/5; b++)

        puts("*****");

	for(b = 1; b <= a%5; b++)
    	
        puts("*");

	return 0;

 } 
