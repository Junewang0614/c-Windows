#include<stdio.h>
#include<string.h>
#include<windows.h>

int main()
{
    char a[100] = {'\0'};
    char b[100] = {'\0'};
    int i = 0,j = 0;

    scanf("%s",a);

    while(a[i] != '\0')
    {
        if(a[i] == 'c')
        {
            i++;
            continue;
        }
        else
        {
            b[j] = a[i];
            j++;
            i++;
        }
    }
    printf("%s",b);

    system("pause");
    return 0;

}
