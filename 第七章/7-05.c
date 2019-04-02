#include<stdio.h>
#include<windows.h>

int main()
{
    int a[5][5];
    int i,j;
    int sum1 = 0,cum1 = 1,sum2 = 0,cum2 = 1;

    for(i = 0;i < 5;i++)
    {
        for(j = 0;j < 5;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i = 0;i < 5;i++)
    {
            sum1 += a[i][i];
            sum2 += a[i][5-1-i];
            if(i % 2 == 0){
                cum1 *= a[i][i];
                if((5-1-i) % 2 == 0)
                    cum2 *= a[i][5-1-i];
            }
    }

    printf("sum1 = %d,sum2 = %d.cum1 = %d,cum2 = %d",sum1,sum2,cum1,cum2);

    system("pause");
    return 0;
}
