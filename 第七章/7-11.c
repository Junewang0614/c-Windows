#include<stdio.h>
#include<windows.h>
#define num 10
int main()
{
    int a[num] = {1,2,3,4,5,6,7,8,9,10};
    int n;
    int i,k = 0;
    int b[num+1] = {0};

    printf("n = ");scanf("%d",&n);

    for(i = 0;i < num;i++)
    {
        if(n < a[i])
        {
            k = i;
            break;
        }
    }

    for(i = 0;i <= num;i++)
    {
        if(i < k)
            b[i] = a[i];
        else if(i == k)
            b[i] = n;
        else if(i > k)
            b[i] = a[i-1];
    }

    for(i = 0;i <= num;i++)
        printf("%d ",b[i]);
    system("pause");
    return 0;
}

