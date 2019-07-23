#include<stdio.h>


int main()
{
    char a,b,c;
    char max0,min0,mid0;

    while(scanf("%c%c%c%*c",&a,&b,&c) != EOF)
    {
        max0 = a > b? a : b;
        min0 = a < b? a : b;

        if(c > max0)
        {
            mid0 = max0;
            max0 = c;
        }

        else if(c < min0)
        {
            mid0 = min0;
            min0 = c;
        }

        else
            mid0 = c;

        printf("%c %c %c\n",min0,mid0,max0);
    }



}

