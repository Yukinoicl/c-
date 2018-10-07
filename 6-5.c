#include <stdio.h>

int sum(int n){

	int s=0;

	while (n > 0){

		s+=n;

		n--;

	}

	return s;

}

int main(void)

{

	int a;

	scanf("%d",&a);

	printf("1到%d之间所有整数的和：%d",a,sum(a));

	return 0;

}
