#include<bits/stdc++.h>
using namespace std;

int a[20] = {0};

int main()
{
    int n = 0;
    int num = 0;
    int i = 0,j;

    for(n = 0; ;n++)
    {
        scanf("%d",&a[n]);
        if(a[n] == 0)
            break;
    }

    sort(a,a + n);
    for(i = 0;i < n-1;i++)
    {
        if(a[i] == -1)
            continue;
        for(j = i+1; j<n ;j++)
        {
            if(a[i] * 2 == a[j] )
            {
                num++;
                a[j] == -1;
            }
        }
    }

    printf("%d\n",num);

    return 0;
}


