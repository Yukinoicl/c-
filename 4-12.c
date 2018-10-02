#include <stdio.h>

int main(void) 
{ 
    
    int a,b;

        printf("输入正整数:");
        scanf("%d",&a);
        
        if (a<=0)
            puts("错误。");

    b=0;
    
    printf("%d的位数是",a);
    while (a){
        
        a /= 10;
        b=b+1;
        
    }
    
    printf("%d",b);
    puts("。");
    
	return 0;
}