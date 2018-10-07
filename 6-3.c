#include <stdio.h>

int j(int x){

	return x*x*x;

} 

int main(void)

{

	int a;

	scanf("%d",&a);

	printf("%d的立方为：%d",a,j(a));

	return 0; 

}
