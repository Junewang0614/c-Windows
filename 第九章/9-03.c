#include<stdio.h>
#include<windows.h>

void GetData(int a[],int n)
{
    int i = 0;
    printf("请输入一组整数");
    for(i = 0;i < n;i++)
    {
        scanf("%d",&a[i]);
    }
}

void Sort(int a[],int n)//选择排序
{
    int i = 0,j = i + 1;
    int t = 0,temp;

    for(i = 0;i < n-1;i++)
    {
        t = i;
        for(j = i + 1;j < n;j++)
        {
            if(a[t] < a[j])
                t = j;
        }
        if(t != i)
            {
               temp = a[i];
               a[i] = a[t];
               a[t] = temp;
            }
    }
}

int main()
{
    int a[100] = {0};
    int n,i = 0;
    printf("n =");scanf("%d",&n);

    GetData(a,n);
    for(i = 0;i < n;i++)
    {
        printf("%-3d",a[i]);
    }
    printf("\n");
    Sort(a,n);
    for(i = 0;i < n;i++)
    {
        printf("%-3d",a[i]);
    }
    putchar('\n');
    return 0;

}
