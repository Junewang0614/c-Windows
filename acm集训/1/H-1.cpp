#include<stdio.h>
int a[100] = {'\0'};

int b[6] = {10,11,12,13,14,15};
char c[7] = {"ABCDEF"};

void zhuanhuan(int x,int m)
{
    int r;
    int num = 1;
    while(x)
    {
        if(x < 0)
            x = -x;
        r = x % m;
        a[num] = r;
        num++;
        x = x / m;
    }
    a[0] = num - 1;
}

int main()
{
    int n,m;
    int i,j;
    while(scanf("%d%d",&n,&m) != EOF)
    {
        zhuanhuan(n,m);
        if(n < 0)
            printf("-");
        if(n == 0)
        {
            printf("0\n");
            continue;
        }
        for(i = a[0];i > 0;i--)
        {
            if(m <= 10)
                printf("%d",a[i]);
            else
            {
                if(a[i] < 10)
                    printf("%d",a[i]);
                else
                {
                    for(j = 0;j < 6;j++)
                    {
                        if(a[i] == b[j])
                            printf("%c",c[j]);
                    }
                }
            }


        }
        putchar('\n');

    }

}
