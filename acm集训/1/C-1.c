#include<stdio.h>

int days[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

int runpanduan(int year)//ÅĞ¶ÏÈòÄê
{
    int tag = 0;
    if(year % 4 == 0&& year % 100 != 0)
        tag = 1;
    else if(year % 400 == 0)
        tag = 1;

    return tag;
}

int countday(int mon)
{
    int sday = 0;
    switch(mon)
    {
        case 12:sday += days[11];
        case 11:sday += days[10];
        case 10:sday += days[9];
        case 9:sday += days[8];
        case 8:sday += days[7];
        case 7:sday += days[6];
        case 6:sday += days[5];
        case 5:sday += days[4];
        case 4:sday += days[3];
        case 3:sday += days[2];
        case 2:sday += days[1];
        case 1:break;
    }
    return sday;

}
int main()
{
    int year,mon,day;
    int sday = 0;
    while(scanf("%d/%d/%d",&year,&mon,&day) != EOF)
    {
        sday = 0;
        sday = countday(mon);
        sday += day;
        //printf("%d\n",sday);
        if(mon >= 3)
            sday += runpanduan(year);
        //printf("%d\n",runpanduan(2000));

        //printf("%d-%d-%d",year,mon,day);
        printf("%d\n",sday);

    }
    return 0;

}
