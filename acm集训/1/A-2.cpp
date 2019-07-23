#include<bits/stdc++.h>

using namespace std;

int a[100] = {0};
int main()
{
    int n,m;
    int i;

    while(scanf("%d%d",&n,&m) != EOF)
    {
        if(n == 0 && m == 0)
            return 0;

        for(i = 0;i < n;i++)
        {
            scanf("%d",&a[i]);
        }
        a[i] = m;
        sort(a,a+n+1);

        for(i = 0;i < n+1;i++)
        {
            if(i == n)
                printf("%d\n",a[i]);
            else
            printf("%d ",a[i]);
        }

    }
    return 0;
}
