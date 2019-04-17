#include<stdio.h>
#include<windows.h>
#include<math.h>

int sushu(int a)//判断是否为素数，是返回1，不是返回0；
{
    int tag = 1;
    int i = 1;

    if(a <= 1)
    {
        tag = 0;
    }
    else if(a == 2)
        ;

    else
    {
        for(i = 2;i <= sqrt(a);i++)
        {
            if(a % i == 0)
                tag = 0;
                break;
        }
    }

    return (tag);
}

int main()
{
    int n;
    printf("n=");scanf("%d",&n);

    int i = sushu(n);

    if(i == 1)
    {
        printf("%d是素数。\n",n);
    }
    else
    {
        printf("%d不是素数。\n",n);
    }

    return 0;
}
