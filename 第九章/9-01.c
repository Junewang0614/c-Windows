#include<stdio.h>
#include<windows.h>
#include<math.h>

int sushu(int a)//�ж��Ƿ�Ϊ�������Ƿ���1�����Ƿ���0��
{
    int tag = 1;
    int i = 1;

    if(a <= 1)
    {
        tag = 0;
    }
    else if(a == 2)
        ;

    else
    {
        for(i = 2;i <= sqrt(a);i++)
        {
            if(a % i == 0)
                tag = 0;
                break;
        }
    }

    return (tag);
}

int main()
{
    int n;
    printf("n=");scanf("%d",&n);

    int i = sushu(n);

    if(i == 1)
    {
        printf("%d��������\n",n);
    }
    else
    {
        printf("%d����������\n",n);
    }

    return 0;
}
