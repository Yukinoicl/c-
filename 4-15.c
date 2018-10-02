#include <stdio.h>

int main(void) 
{ 
    
   int a,b;
   
   printf("输入一个整数:");
   scanf("%d",&a);
   
   for (b=1;b<=a;b++){
       
       if (b%2)
            printf("%d ",b);
            
   }
   
    
	return 0;
}