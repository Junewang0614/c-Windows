#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;
int a[7] = {0};
int v[7] = {0,0,0,0,20,11,0};
int main()
{
   int num0 = 0;
   int num = 0;
   int i;
   int v0;//中转用;

   while(1)
   {
       num0 = 0;
       num = 0;
       v[0] = 0;
       v0 = 0;
       for(i = 1;i < 7;i++)
       {
           scanf("%d",&a[i]);
           if(a[i]== 0)
            num0++;
       }

       if(num0 == 6)
        break;

        num += a[6];
        num += a[5];
        a[1] = max(0,a[1] - a[5]*v[5]);

        num += a[4];
        v0 = a[4] * v[4];

        if(a[2] < a[4] * 5)
            v0 = max(0,v0 - a[2]*4);
        else
            v0 = 0;
        a[2] = max(0,a[2] - a[4]*5);

        num += a[3] / 4;
        if(a[3] % 4)
        {
            num++;
            v[0] = 36 - (a[3] % 4)*9;//可以让2*2在的
        }

        if(a[2] != 0)
        {
            if(v[0] == 27)
            {
                if(a[2] <= 5)
                    v0 = max(0,v0 + v[0] - a[2]*4);
                else
                    v0 = max(0,v0 + v[0] - 5*4);
                a[2] = max(0,a[2] - 5);
            }

            else if(v[0] == 18)
            {
                if(a[2] <= 3)
                    v0 = max(0,v0 + v[0] - a[2]*4);
                else
                    v0 = max(0,v0 + v[0] - 3*4);
                a[2] = max (0,a[2] - 3);
            }

            else if(v[0] == 9)
            {
                a[2] = max(a[2] - 1,0);
                v0 += 5;
            }

            num += a[2] / 9;
            //printf("num = %d,v0 = %d\n",num,v0);//64,0
            if(a[2] % 9 && a[2] != 0)
            {
                num++;
                v0 += 36 - a[2] % 9 * 4;
                //printf("v0 = %d",v0);//11
            }

        }
        else
            v0 += v[0];

        if(a[1] > v0)
        {
            a[1] = a[1] - v0;
            num += a[1] / 36;
            if(a[1] % 36)
                num++;
        }

        printf("%d\n",num);


   }
   return 0;
}
