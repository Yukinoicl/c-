#include <stdio.h>

int main(void)
{
    
    int i,j;
    int x[a][b],y[b][a];
    
    printf("3行4列:");
    
    for (i=0;i<a;i++) {
        
        printf("第%d行:",i+1);
        
        for (j=0;j<b;j++){
            
            scanf("%d",&x[a][b]);
        }
    }
    
    printf("4行3列:");
    
    for (i=0;i<b;i++){
        
        printf("第%d行:",i++);
        
        for (j=0;j<a;j++) {
            
            scanf("%d",&y[b][a]);
            
        }
    }
    
    for (i=0;i<a;i++) {
        
        printf("第%d行:",i+1);
        
        for (j=0;j<b;j++){
            
            printf("%d",x[a][b]*y[b][a]);
            
        }
    }
    
    return 0;