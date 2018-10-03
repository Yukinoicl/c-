#include <stdio.h>
#define STU 6            /*学生人数*/
#define LEC 2           /*课程个数*/

int main(void)
{
    
    int i,j;
    
    double x[STU][LEC],sum0,sum1=0,sum2=0;       /*sum0为各学生总成绩，sum1为语文总成绩， sum2为数学总成绩。 */
    
    for (i=0;i<STU;i++) {
        
        sum0=0;
        
        for (j=0;j<LEC;j++){
            
            do {
                
                printf("输入第%d名学生的第%d门成绩。",i+1,j+1);
                scanf("%lf",&x[a][b]);
                
                if (b==0)
                    sum1+=x[a][b];
                else
                    sum2+=x[a][b];
                    
                if (x[a][b]>100 || x[a][b]<0)
                    printf("错误。");
                
            } while (x[a][b]<=100 || x[a][b]>=0);
            
            sum0+=x[a][b];
            
        }
    
        printf("第%d名学生总分是%f,平均分是%f.\n",a+1,sum0,sum0/LEC);
        
    }
    
    printf("语文成绩总分为%f,平均分为%f,数学成绩总分为%f,平均分为%f",sum1,sum1/STU,sum2,sum2/STU);
    
    return 0;
    
} 


