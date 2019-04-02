#include<stdio.h>
#include<windows.h>
#define s_num 5
#define k_num 4

int main()
{
    int a[s_num][k_num];
    int i,j;
    float b[2][s_num] = {0},c[k_num] = {0};

    for(i = 0;i < s_num;i++)
    {
        for(j = 0;j < k_num;j++)
            scanf("%d",&a[i][j]);
    }
    for(i = 0;i < s_num;i++)
    {
        for(j = 0;j < k_num;j++)
        {
           b[0][i] += a[i][j];
           c[j] += a[i][j];
        }
        b[1][i] = b[0][i] / k_num;
    }
    puts("单科平均成绩");
    for(j = 0;j < k_num;j++)
    {
        c[j] = c[j] / s_num;
        printf("%-5.2f",c[j]);
    }

    putchar('\n');
    puts("单人总分-平均分");
    for(i = 0;i < s_num;i++)
    {
        printf("%-5.2f-%-5.2f  ",b[0][i],b[1][i]);
    }

    putchar('\n');
    system("pause");
    return 0;
}
