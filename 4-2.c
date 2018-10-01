#include <stdio.h>

int main(void) 
{   
    
   int a,b,x,sum;
   
   if (a>=b)
        x=a-b;
    else
        x=b-a;
        
   do{
       
       sum=a+b;
       
       printf("请输入两个整数:");
       printf("整数a:\n");    scanf("%d",&a);
       printf("整数b:\n");    scanf("%d",&b);
       
       x=x-1;
       
       if(a>=b)
            sum=sum+b+x;
       else
            sum=sum+a+x;
           
       printf("和是%d。",sum);
       scanf("%d",&x);
       
   }    while(!x==0);
   
  
	return 0;
}