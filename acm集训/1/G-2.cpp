#include<bits/stdc++.h>

using namespace std;

//const int a[] = {1,4,9,16,25,36};
int a[6] = {0};

int main()
{
    int i;
    int num0 = 0;
    int num = 0;
    int v = 0;
    int tag = 0;
    while(1)
    {
        v = 0;
        num = 0;
        num0 = 0;
        tag = 0;

        for(i = 0;i < 6;i++)
        {
            scanf("%d",&a[i]);
            if(!a[i]) num0++;
        }

        if(num0 == 6)
            break;

        num += a[5];//6*6的箱子，一个箱子一个包裹
        //printf("%d\n",num);

        num += a[4];
        a[0] =  max(0,a[0] - a[4]*11);
        //printf("%d\n",num);
        //5*5的箱子，一个箱子一个包裹，剩余的位置只能放1*1的箱子共（a[4] * (36-25))
       // printf("%d \n",a[0]);

        num += a[3];

        if(a[1] - a[3]*5 < 0)
        {

            v = 20 - ((a[3]*5 - a[1]) % 5)*4 + ((a[3]*5 - a[1]) / 5)*4;
            //printf("v =%d\n",v);
            a[0] = max(0,a[0] - v);
        }

        a[1] = max(0,a[1] - a[3]*5);
        printf("%d %d\n",a[0],a[1]);


        //4*4的箱子，一个箱子一个包裹，剩下的位置可以放2*2与1*1,2*2有5个位置

        num += a[2] / 4;//3*3的箱子可以正好四个放满，有余数再加
        if(a[2] % 4)
            num++;

        if(a[2] != 0 || a[1] != 0)
            v = 36 - (a[2] % 4)*9;

        //现在剩余2*与1*1的情况，没有满的箱子是如果3*3剩余的话,可最多放7个2号
        if(a[1] != 0 || a[0] != 0)
        {

            if(v == 36)
            {
                num += a[1] / 9;
                tag = 1;
//                if(a[1] % 9 == 0)
//                    num++;
//                v2 = 36 - (a[1] % 9)*4;
            }

            else if(v == 27 && a[1] > 7)
            {
                num += (a[1] - 7) / 9;
                a[1] = a[1] - 7;
                tag = 1;
            }

            else if(v == 18 && a[1] > 3)
            {
                num += (a[1] - 3) / 9;
                a[1] = a[1] - 3;
                tag = 1;
            }

            else if(v == 9 && a[1] > 1)
            {
                num += (a[1] - 1) / 9;
                a[1] = a[1] - 1;
                tag = 1;
            }

            if(tag)
            {
                if(a[1] % 9 != 0)
                        num++;
                v = 36 - (a[1] % 9)*4;
            }
            else
                v = v - a[1] * 4;

            if(a[0] != 0)
            {
                //printf("v = %d\n",v);
                a[0] = max(0,a[0] - v);
                //printf("%d\n",a[0]);
                num += a[0] / 36;
                if(a[0] % 36)
                    num++;
            }

        }
        printf("%d\n",num);

    }
    return 0;
}
//5 3 5 2 54 7
//75 3 45 3 5 2
