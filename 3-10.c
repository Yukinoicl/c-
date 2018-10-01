#include <stdio.h>

int main(void) 
{   
    
   int a,b,c;
   
   printf("请输入三个整数:\n");
   
   printf("整数a:\n");    scanf("%d",&a);
   printf("整数b:\n");    scanf("%d",&b);
   printf("整数c:\n");    scanf("%d",&c);
   
   if (a==b && b==c)
        printf("三个值都相等。");
    else if (a==b || b==c || a==c)
        printf("有两个值相等。");
    else
        printf("三个值各不同。");
   
	return 0;
}