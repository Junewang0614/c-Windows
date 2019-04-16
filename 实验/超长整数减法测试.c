#include<stdio.h>
#include<conio.h>
#include<string.h>

#define N 20
int tag = 0;//全局变量保证进位的保留。666666

void beep()
{
    printf("\07");
}

void LeftTrim(char str[])
{
    int i;
    for(i = 0;str[i] == ' ';i++)
        ;
    strcpy (str, str + i);
}

char AddChar (char ch1,char ch2)
{
    char ch;
    ch = (ch1 - 0X30 + ch2 - 0x30) + tag;
    if(ch >= 10)
    {
        tag = 1;
        ch = (ch - 10) + 0x30;
    }
    else
    {
        tag = 0;
        ch = ch + 0x30;
    }
    return (ch);

}

void AddNumberStr(char a[],char b[],char c[])
{
    int i,j,k;

    memset (c,' ',N+2);

    i = strlen(a) - 1;
    j = strlen(b) - 1;
    k = N;

    while(i >= 0&&j >= 0)
    {
        c[k] = AddChar(a[i],b[j]);
        k--;i--;j--;
    }

    while(i >= 0)
    {
        c[k] = AddChar(a[i],'0');//c[k] = a[i] + tag 不行的原因:a[i] = 9时比较麻烦。
        k--;i--;
    }
    while(j >= 0)
     {
        c[k] = AddChar(b[j],'0');
        k--;j--;
    }

    if(tag == 1)
        c[k] = '1';
    c[N+1] = '\0';

    LeftTrim(c);

}


void GetNumberStr(char s[])
{
    char ch;
    int i;

    while(1)
    {
        ch = getch();

        if(ch == '\r' )
            break;

        if(ch == '\b')//关于i是否大于0也要考虑，i在处理之后需要还原。！！！！
        {
            if(i > 0)
            {   printf("%c",ch);
                printf(" ",ch);
                printf("\b");
                i--;
            }
            else
                beep();
            continue;
        }
        if(ch < '0' || ch > '9')
        {
            beep();
            continue;
        }

        if(i < N)//不能等于，因为i是下标。
        {
            printf("%c",ch);
            s[i] = ch;
            i++;
        }
        else
            beep();

    }
    s[i] = '\0';
}

int main()
{
    char a[N+1] = {"1234567890"};
    char b[N+1] = {"9999992222"};

    char c[N + 2];

    AddNumberStr(a,b,c);

    printf("%s\n",c);

    return 0;
}


/*int main()
{
    char a[N+1] = {0};
    GetNumberStr(a);
    printf("jjjj");
    return 0;
}*///测试输入。

/*int main()
{
    char a = '9',b = '9';
    char e = '2',f = '3';
    char c; char d;
    c = AddChar(a,b);
    d = AddChar(e,f);
    printf("%c  %c\n",c,d);


    return 0;
}*/ //测试AC


