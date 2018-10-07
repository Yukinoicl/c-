#include <stdio.h>

int sqr(int a){

    return a*a;

} 

int pow4(int x){

    return sqr(x)*sqr(x);

}

int main(void)

{

    int a;

    scanf("%d",&a);

    printf("%d的四次幂为：%d", a, pow4(a));

    return 0;

}
