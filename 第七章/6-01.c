#include<stdio.h>//呀呀算反了，不过就调一下if就行嘻嘻
#include<windows.h>
int main()
{
    int i,num = 0,sum = 0;
    int a[20] = {0};
    int n;

    for(i = 0;i < 20;i++)
    {
        scanf("%d",&n);
        if(n < 0)
        {
            a[num] = n;
            sum = sum + n;
            num++;
        }
    }

    printf("负数的个数是%d，和是%d。\n",num,sum);

    system("pause");
    return 0;
}
