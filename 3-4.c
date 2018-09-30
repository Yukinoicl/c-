#include <stdio.h>

int main(void) 
{   
    
   int a,b;
   
   printf("请输入两个整数：\n");
   
   printf("整数a：\n");   scanf("%d",&a);
   printf("整数b：\n");   scanf("%d",&b);
   
   if(a==b)
        printf("a和b相等。");
    else if(a>b)
        printf("a大于b。");
    else
        printf("a小于b。");
   
    
	return 0;
}