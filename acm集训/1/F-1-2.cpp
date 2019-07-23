#include<stdio.h>
#include<string.h>

char str[107];
int main()
{
    int i  = 0,i0 = 0;
    while(gets(str))
    {
        for(i = 0;str[i] != '\0';i++)
        {
            if(i == 0)
                str[i] = str[i] - 'a' + 'A';
            if(str[i] == ' ')
                str[i + 1] = str[i + 1] - 'a' + 'A';
            printf("%c",str[i]);
        }
        printf("\n");
    }
    return 0;
}
