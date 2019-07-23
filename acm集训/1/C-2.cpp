#include<stdio.h>
#define lf(x) (x)*(x)*(x)

int shupanduan(int x)
{
    int r,x0 = x;
    int n = 0;
    int tag = 0;

    while(x)
    {
        r = x % 10;
        //printf("%d ",r);
        x = x / 10;
        n += lf(r);

    }

    if(n == x0)
        tag = 1;

    //printf("%d ",tag);

    return tag;
}

int main()
{
    int n,m;
    int i,num;
    int num0 = 0;
    int tag;

    while(scanf("%d%d",&m,&n) != EOF)
    {
        for(i = m,num = m;i <= n;i++)
        {
            tag = shupanduan(i);
            if(tag)
            {
                if(num0 == 0)
                    printf("%d",i);
                else
                    printf(" %d",i);
                num0++;
            }
            else
                num++;
        }

        if(num == n+1)
            printf("no\n");
        else
            printf("\n");

        num0 = 0;


    }
    return 0;

}


