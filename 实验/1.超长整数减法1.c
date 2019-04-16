#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
#define N 20

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
    int i = 0;//!!!!��Ҫ���˳�ʼ��i��

    while(1)
    {
        ch = getch();
        if(ch == '\r' )
            break;

        if(ch == '\b')//����i�Ƿ����0ҲҪ���ǣ�i�ڴ���֮����Ҫ��ԭ����������
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

        if(i < N)//���ܵ��ڣ���Ϊi���±ꡣ
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

//��ӷ���ʼ��ͬ
char MinusChar(char ch1,char ch2)
{
    char ch;
    int ch0;

    if((ch1-tag) < ch2)
    {
        ch0 = ch1 -tag - ch2 + 10;
        tag = 1;
    }
    else
    {
        ch0 = ch1 - tag - ch2;
        tag = 0;
    }

    ch = ch0 + '0';
    return(ch);
}

void MinusNumberStr(char a[],char b[],char c[])
{
    int i,j,k;

    memset(c,' ',N+2);//c��n+2��ԭ����һλ�Ƿ���λ��

    i = strlen(a) - 1;
    j = strlen(b) - 1;
    k = N;

    c[N+1] = '\0';

    while(i >= 0 && j >= 0)
    {
        c[k] = MinusChar(a[i],b[j]);
        k--;i--;j--;
    }
    while(i >= 0)
    {
        c[k] = MinusChar(a[i],'0');
        k--;i--;
    }
    if(c[k+1] == '0')
        c[k+1] = ' ';
}

int Num(char a[])//�����ո�
{
    int i = 0;
    for(i = 0;a[i] == ' ';i++)
        ;

    return (i-1);
}

int main()
{
    char a[N + 1] = {0};
    char b[N + 1] = {0};
    char c[N + 2];

    int tag2 = 1;//�Ƚϴ�С��ʶ

    int len1,len2,len3;

    printf("input long int a=");
    GetNumberStr(a);
    printf("\ninput long int b=");
    GetNumberStr(b);

    len1 = strlen(a);len2 = strlen(b);
    //�Ƚϴ�С

    if(len2 > len1)
    {
        tag2 = -1;
    }
    else if(len1 == len2)
    {
        tag2 = strcmp(a,b);
    }

    if(tag2 >= 0)
    {
        MinusNumberStr(a,b,c);
        LeftTrim(c);
    }
    else
    {
        MinusNumberStr(b,a,c);
        len3 = Num(c);
        c[len3] = '-';
        LeftTrim(c);
    }

    printf("\nc = %s\n",c);
    return 0;


}

/*��������
1�����ڼ�����λ���⣨��Ӧ�ӷ���λ���⣩
2����һλΪ0���⡣(��2222-1234��
3�������ţ���С�ж����⡣
*/

