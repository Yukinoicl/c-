#include <stdio.h>

void put_count () {
    
    int a;
    
    a++;
    
    printf("put_count:第%d次。\n",a);
    
}
int main(void)
{
    int b;
    
    for (b=0;b<3;b++)
        
        put_count();
        
return 0;
        
}