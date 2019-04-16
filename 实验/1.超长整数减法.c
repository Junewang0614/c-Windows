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
        c[k] = AddChar(a[i],'0');//c[k] = a[i] + tag ���е�ԭ��:a[i] = 9ʱ�Ƚ��鷳��
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



/*д�����
1����Ϊ������ǳ�������������int�Ͳ�������������Ҫ������ת��Ϊ�ַ������������ַ�����
2���������룺Ϊ�˱�֤�õ����������ַ�������Ҫһ�����ж�����ж��Ƿ�Ϊ�����ַ���
             Ϊ�˸��û��޸����ֵĻ��ᣬҪ�����й��˸�������⡣
             ��Ϊ���ַ�������Ҫ�����������ַ���������־'\0'��
3������LeftTrim:���ݵĸ��ƴӸ�λ��ʼ������N+2λ�ǡ�\0'�󣬴�N+1��ʼ�������ݣ������ͷ���пո�
4��ȫ�ֱ���tag̫���ɡ�*/
