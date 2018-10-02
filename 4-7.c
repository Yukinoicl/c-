#include <stdio.h>

int main(void) 
{   
    int i,no,a;
    
    printf("请输入一个正整数:");
    scanf("%d",&no);
    
    i=1;
    while (i*2<no)
        printf("%d ", i=i*2);
    printf("\n");
  
	return 0;
}