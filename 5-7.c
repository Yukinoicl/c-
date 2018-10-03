#include <stdio.h>
#define N 4             /*数据个数*/

int main(void)
{
    
    int j;
    int x[N];
   
    printf("数据个数:\n");
    
    for (j=0;j<N;j++){
        
        printf("%d号:\n",j+1);
        scanf("%d",&x[j]);
        
    }
    
    putchar('{');
    
    for (j=0;j<N;j++){
    
        printf("%d,",x[j]);
        
    }
    
    putchar('}');
    
    return 0;
    
} 