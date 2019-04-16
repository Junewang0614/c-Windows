#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
#define N 20

void beep();
void GetNumberStr(char s[]);
void AddNumberStr(char a[],char b[],char c[]);
char AddChar (char ch1,char ch2);
void LeftTrim(char str[]);

int tag = 0;

void beep()
{
    printf("\07");
}

void LeftTrim(char str[])
{
    int i;
    for(i = 0;str[i] == ' ';i++)
        ;
    strcpy (str,str + i);
}

void GetNumberStr(char s[])
{
    char ch;
    int i = 0;//!!!!不要忘了初始化i。

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

char AddChar (char ch1,char ch2)
{
    char ch;
    ch = (ch1 - '0' + ch2 - '0') + tag;
    if(ch >= 10)
    {
        tag = 1;
        ch = (ch - 10) + '0';
    }
    else
    {
        tag = 0;
        ch = ch + '0';
    }
    return (ch);

}

void AddNumberStr(char a[],char b[],char c[])
{
    int i,j,k;

    memset(c,' ',N+2);


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

int main()
{
    char a[N+1] = {0};
    char b[N+1] = {0};
    char c[N+2];
    printf("input long int a:");
    GetNumberStr(a);
    printf("\ninput long int b:");
    GetNumberStr(b);

    AddNumberStr(a,b,c);

    printf("\n   %s\n",c);

    system("pause");
    return 0;
}



/*写在最后
1、因为处理的是超长整数，所以int型不能满足需求，需要将数字转化为字符串，即数字字符串。
2、关于输入：为了保证得到的是数字字符串，需要一定的判断语句判断是否为数字字符。
             为了给用户修改数字的机会，要设置有关退格符的问题。
             因为是字符串，不要忘了最后加入字符串结束标志'\0'。
3、关于LeftTrim:数据的复制从个位开始，保留N+2位是‘\0'后，从N+1开始导入数据，可能最开头留有空格。
4、全局变量tag太妙辽。*/
