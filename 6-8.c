#include <stdio.h>

int min_of(const int v[],int n){
    
    int min=v[0];
    
    while (n-->0){
        
        if (min>v[n])
            min=v[n];
            
    }
    return min;
    
}

int main(void)
{
    
    int n,v[n],i;
    
    printf("输入数组个数:\n");    scanf("%d",&n);
    printf("输入元素的值:\n");
    
        for (i=0;i<n;i++){
            
            scanf("%d",&v[i]);
            
        }
    
    printf("数组元素最小值为%d。",min_of(v,n));
    
}
    
	return 0;
}