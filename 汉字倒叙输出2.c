#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char str1[1000] = {"����ʦ��"};
    char str2[1000] = {"\0"};//!!һ���������ȳ�ʼ����

    /*printf("���������֣�");scanf("%s",str1);*/

    /*if(strlen(str1) / 2 != 0)
    {
        printf("input wrong data.\n");
        exit(-1);
    }*/

    int i;
    int len = strlen(str1);
    for(i = 0;i < strlen(str1);i += 2)//һ������ռ������
    {
        str2[i] = str1[len-2-i];
        str2[i+1] = str1[len-1-i];
    }
    //�����ַ�������
    //printf("%d,%d,%d\n",strlen(str1),strlen(str2),i);

    printf("%s",str2);
    putchar('\n');

    return 0;
}
