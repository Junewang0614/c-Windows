#include<stdio.h>

int a[107] = {0};
int b[107] = {0};

void sort0(int a[],int b[],int n)
{
    int i,j,k;
    int temp1,temp2;
    for(i = 0;i < n-1;i++)
    {
        k = i;
        for(j = i + 1;j < n;j++)
        {
            if(b[j] > b[k])
                k = j;
        }

        if(k != i)
        {
            temp1 = a[i];
            a[i] = a[k];
            a[k] = temp1;

            temp2 = b[i];
            b[i] = b[k];
            b[k] = temp2;
        }
    }
}

int main()
{
    int n;
    int i;

    while(scanf("%d",&n) != EOF)
    {
        if(n == 0)
            return 0;
        for(i = 0;i < n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i] < 0)
                b[i] = -a[i];
            else
                b[i] = a[i];
        }

        sort0(a,b,n);
        for(i = 0;i < n;i++)
        {
            if(i == n-1)
                printf("%d\n",a[i]);
            else
                printf("%d ",a[i]);
        }

    }

    return 0;

}
