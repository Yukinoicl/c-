#include <stdio.h>

int min2(int a,int b)

{
    int min=a;
    
    if (b<min)  min=b;
    
    return min;
    
}

int main(void) { 
    
    int a, b;
    
    puts("输入两个整数:");
    printf("整数a:\n");   scanf("%d",&a);
    printf("整数b:\n");   scanf("%d",&b);
    
    printf("最小值是%d。\n",min2(a,b));
    
	return 0;
}