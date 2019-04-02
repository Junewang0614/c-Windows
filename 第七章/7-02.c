#include<stdio.h>//其实是第三题
#include<windows.h>
int main()
{
    int a[10];
    int i,max,min;
    int k = 0,j = 0,temp;

    for(i = 0;i < 10;i++)
    {
        scanf("%d",&a[i]);
    }

    max = a[0];
    min = a[0];

    for(i = 0;i < 10;i++)
    {
        /*max = (max < a[i]?a[i]:max);
        min = (min > a[i]?a[i]:min);*/

        if(max < a[i])
        {
            max = a[i];
            k = i;
        }

        if(min > a[i])
        {
            min = a[i];
            j = i;
        }
    }

    temp = a[k];
    a[k] = a[j];
    a[j] = temp;

    for(i = 0;i < 10;i++)
        printf("%d ",a[i]);

    printf("\n");

    system("pause");
    return 0;
}
