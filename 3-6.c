#include <stdio.h>

int main(void) 
{   
    
   int a,b,c,min;
   
   puts("请输入三个整数。");
   printf("整数a:\n");    scanf("%d",&a);
   printf("整数b:\n");    scanf("%d",&b);
   printf("整数c:\n");    scanf("%d",&c);
   
   min=a;
   if(min>b)    min=b;
   if(min>c)    min=c;
   
   printf("最小值是%d。\n",min);
   
   
	return 0;
}