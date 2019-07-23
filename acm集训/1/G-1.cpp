#include<stdio.h>
#include<string.h>

int panduan(char a[])
{
    int i;
    int tag = 1;
    for(i = 0;i <strlen(a) / 2;i++)
    {
        if(a[i] != a[strlen(a)-1-i])
        {
            tag = 0;
            break;
        }
    }
    return tag;
}

char str[100][100];

int main()
{
    int n;
    while(scanf("%d",&n) != EOF)
    {
        int i = 0;
        int tag;
        for(i = 0;i < n;i++)
        {
            scanf("%s",str[i]);
            tag = panduan(str[i]);
            if(tag)
                printf("yes\n");
            else
                printf("no\n");

            str[i][0] = '\0';
        }

    }

    return 0;
}
