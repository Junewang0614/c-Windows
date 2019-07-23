#include<bits/stdc++.h>
using namespace std;

struct node
{
    int a;
    int b;
};
typedef struct node A;

void sort0 (A p[],int n)
{
    int i,j,k;
    int a0,b0;
    for(i = 0;i < n-1;i++)
    {
        k = i;
        for(j = i + 1;j < n;j++)
        {
            if(p[j].b > p[k].b)
                k = j;
        }
        if(k != i)
        {
            a0 = p[i].a;
            b0 = p[i].b;
            p[i].a = p[k].a;
            p[i].b = p[k].b;
            p[k].a = a0;
            p[k].b = b0;
        }
        printf("%d-%d\n",i,p[i].b);
    }
}

A p[107];


int main()
{
   int n;
   int i = 0;
   while(scanf("%d",&n) != EOF)
   {
       if(!n) break;

       i = 0;

        while(n--)
        {
            scanf("%d",&p[i].a);
            if(p[i].a < 0)
                p[i].b = -p[i].a;
            else
                p[i].b = p[i].a;

            printf("%d ",p[i].b);
            i++;
        }

        sort0(p,n);

        for(i = 0;i < n;i++)
        {
            if(i == n-1)
                printf("%d\n",p[i].a);
            else
                printf("%d ",p[i].a);

            p[i].a = 0;
            p[i].b = 0;
        }


   }

    return 0;
}
