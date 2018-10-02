#include <stdio.h>

int main(void) 
{ 
    
    int a=0;
    int n,i;
    
    printf("n的值:\n");
    scanf("%d",&n);
    
    for (i=1;i<=n;i++) {
        
        a+=i;
        
        }
        
        
        printf("1到%d的和为%d",n,a);
    
	return 0;
}