#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
int MaxCommonFactor(int a,int b)//շת����������Լ��
{
    int r;
    int max,min;
    max = (a >= b)?a:b;
    min = (a >= b)?b:a;

    r = max % min;

    while(min)
    {
        max = min;
        min = r;
        if(r == 0)
            break;
        else
            r = max % min;
    }

    return (max);
}

int main()
{
    int a,b;
    printf("a=");scanf("%d",&a);
    printf("b=");scanf("%d",&b);

    if(a <= 0 || b <= 0)
    {
        printf("wrong input");
        exit(-1);
    }
    else
    {
        printf("���Լ��Ϊ%d.",MaxCommonFactor(a,b));
    }

    putchar('\n');
    system("pause");
    return 0;
}
