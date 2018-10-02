#include <stdio.h>

int main(void)
{

	int a, b, c, i, j;

	puts("让我们来画一个长方形。");
	printf("一边：");	scanf("%d",&a);
	printf("另一边：");	scanf("%d",&b);

	if(a > b){
		c = a;
		a = b;
		b = c;

	} 

	for(i = 0; i < a; i++){

		for(j = 0; j< b; j++)

			printf("*");
		printf("\n");

	}

	return 0;

 } 
