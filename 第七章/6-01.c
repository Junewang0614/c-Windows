#include<stdio.h>//ѽѽ�㷴�ˣ������͵�һ��if��������
#include<windows.h>
int main()
{
    int i,num = 0,sum = 0;
    int a[20] = {0};
    int n;

    for(i = 0;i < 20;i++)
    {
        scanf("%d",&n);
        if(n < 0)
        {
            a[num] = n;
            sum = sum + n;
            num++;
        }
    }

    printf("�����ĸ�����%d������%d��\n",num,sum);

    system("pause");
    return 0;
}
