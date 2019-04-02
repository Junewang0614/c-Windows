#include<stdio.h>
#include<windows.h>
#include<string.h>

int main()
{
    char a[100] = {'\0'},b[100]= {'\0'};
    scanf("%s",a);
    int i = 0;
    int n = strlen(a);

    for (i = 0;a[i] != '\0';i++)
    {
        b[n-1-i] = a[i];
    }

    printf("%s\n",b);
    system("pause");
    return 0;
}
