#include<stdio.h>
#include<string.h>

int a[7];


void fenli(int x)//·ÖÎ»Êý
{
    int i = 1;
    if(!x)
        a[1] = 0;

    while(x)
    {
        a[i] = x % 10;
        x = x / 10;
        //printf("%d-%d\n",i,a[i]);
        i++;

    }
    if(a[2] != -1)
        a[0] = a[1] + a[2] * 10;
}

void print(int x)
{
//    int num = 0;
//    int i;
//    for(num = 0;a[num] != -1;num++);

    switch(x)
    {
        case 1:printf("one ");break;
        case 2:printf("two ");break;
        case 3:printf("three ");break;
        case 4:printf("four ");break;
        case 5:printf("five ");break;
        case 6:printf("six ");break;
        case 7:printf("seven ");break;
        case 8:printf("eight ");break;
        case 9:printf("nine ");break;
        default:break;
    }

}

void print2(int x)
{
    switch(x)
    {
        case 10:printf("ten");break;
        case 11:printf("eleven");break;
        case 12:printf("twelve");break;
        case 13:printf("thirteen");break;
        case 14:printf("fourteen");break;
        case 15:printf("fifteen");break;
        case 16:printf("sixteen");break;
        case 17:printf("seventeen");break;
        case 18:printf("eighteen");break;
        case 19:printf("nineteen");break;

    }
}

void print3(int x)
{
    switch(x)
    {
        case 2:printf("twenty");break;
        case 3:printf("thirty");break;
        case 4:printf("forty");break;
        case 5:printf("fifty");break;
        case 6:printf("sixty");break;
        case 7:printf("seventy");break;
        case 8:printf("eighty");break;
        case 9:printf("ninety");break;

    }
}

int main()
{
    int t;
    int i;

    while(scanf("%d",&t) != EOF)
    {
        memset(a,-1,sizeof(a));
        fenli(t);

        if(a[4] != -1)
        {
            print(a[4]);
            if(a[4])
                printf("thousand");
        }

        if(a[3] != -1)
        {
            if(a[4] != -1)
            {
                printf(" and ");
            }
            print(a[3]);
            if(a[3])
                printf("hundred");
        }

        if(a[2] == -1)
        {
            if(a[1])
                print(a[1]);
            else
                printf("zero");
        }

        else if(a[2] == 1)
        {
            if(a[3] != -1)
            {
                printf(" and ");
            }
            print2(a[0]);
        }

        else if(a[2] == 0)
        {
            if(a[1])
            {
                printf(" and ");
                print(a[1]);
            }
        }

        else
        {
            if(a[3] != -1)
                printf(" and ");
            print3(a[2]);
            if(a[1])
            {
                putchar('-');
                print(a[1]);
            }
        }

        putchar('\n');

    }



}
