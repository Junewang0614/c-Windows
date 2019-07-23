#include<stdio.h>

char *c[] = {"is not a Sky Number.","is a Sky Number."};
int a[3] = {0};
int b[3] = {10,16,12};

int henx(int n,int x)//x进制的和
{
    int r;
    int sum = 0;
    while(n)
    {
        r = n % x;
        sum += r;
        n = n / x;
    }
    return sum;
}

int main()
{
    int tag = 0;
    int n;
    int i = 0;

    while(scanf("%d",&n) != EOF)
    {
        if(n == 0)
            return 0;
        for(i = 0;i < 3;i++)
        {
            a[i] = henx(n,b[i]);
        }

        if(a[0] == a[1] && a[1] == a[2])
            tag = 1;

        printf("%d %s\n",n,c[tag]);
        tag = 0;


    }


}
