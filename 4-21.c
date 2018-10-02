#include <stdio.h>

int main(void) 
{ 
    
   int i,j;
   int height;
   
   puts("生成一个正方形。");
   printf("正方形有几层:\n");   scanf("%d",&height);
   
   for (i=1;i<=height;i++) {
       for (j=1;j<=height;j++)
            putchar('*');
       putchar('\n');
       
   }
    
	return 0;
}