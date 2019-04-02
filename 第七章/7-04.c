#include<stdio.h>
#include<windows.h>

int main()
{
    int b[6];
    int a[6][6] = {0};
    int i,j,temp;

    for(i = 0;i < 6;i++)
    {
        scanf("%d",&b[i]);
    }

    for(i = 0;i < 6;i++)
    {
        for(j = 0;j < 6;j++)
        {
            a[i][j] = b[j];//对a第一层赋值
        }

        temp = b[5];
        for(j = 5;j > 0;j--)
        {
            b[j] = b[j-1];
        }
        b[0] = temp;//对b进行翻转。

    }

    for(i = 0;i < 6;i++)
    {
        for(j = 0;j < 6;j++)
        {
            printf("%d ",a[i][j]);
        }
        putchar('\n');
    }

    system("pause");
    return 0;
}
