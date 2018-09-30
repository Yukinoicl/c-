#include <stdio.h>

int main(void) 
{   
    
   int a,b,c,d,max;
   
   puts("请输入四个整数。");
   printf("整数a:\n");    scanf("%d",&a);
   printf("整数b:\n");    scanf("%d",&b);
   printf("整数c:\n");    scanf("%d",&c);
   printf("整数d:\n");    scanf("%d",&d);
   
   max=a;
   if(b>max)    max=b;
   if(c>max)    max=c;
   if(d>max)    max=d;
   
   printf("最大值是%d。\n",max);
   
   
	return 0;
}