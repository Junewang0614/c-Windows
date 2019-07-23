#include<stdio.h>
int s[100] = {0};
int main()
{
    long int a;
    int b;
    int i,num = 0;
    while(scanf("%ld%d",&a,&b) != EOF)
    {
        if(a == 0&&b == 0)
            break;
        num = 0;
        for(i = 0;i < 100;i++)
        {
            if((a * 100 + i) % b == 0)
            {
                s[num++] = i;
            }

        }

        for(i = 0;i < num-1;i++)
        {
            printf("%02d ",s[i]);
        }
        printf("%02d\n",s[i]);

    }
    return 0;
}
