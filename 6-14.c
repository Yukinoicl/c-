#include <stdio.h>

int main(void)
{
    int a;
    static double v[3];
    
    for (a=0;a<3;a++) 
        
        printf("v[%d]=%d\n",a,v[a]);
        
return 0;
        
}