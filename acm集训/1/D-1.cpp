#include<stdio.h>
#include<math.h>

#define gongshi(x) (x)*(x) + (x) + 41

int sushu(int x)
{
    if(x < 0)
        x = -x;
    int i = 2;
    int tag = 0;

    if(x == 1)
        return tag = 1;
    if(x == 2)
        return tag = 0;

    for(i = 2;i <= sqrt(x);i++)
    {
        if(x % i == 0)
            return tag = 1;
    }

    return tag = 0;
}

int main()
{
    int x,y;
    int i,j,i0;
    while(scanf("%d%d",&x,&y) != EOF)
    {
        if(x== 0 && y == 0)
            break;

        j = 0;
        for(i = x;i <= y;i++,j++)
        {
            i0 = gongshi(i);
            printf("%d %d\n",i,i0);
            if(sushu(i0))
            {
                printf("%d\n",sushu(i0));
                break;
            }
        }

        if(j == y - x + 1)
            printf("OK\n");
        else
            printf("Sorry\n");

    }
}
