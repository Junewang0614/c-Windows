#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
using namespace std;
#define maxn 210

char hexs[] = {"ABCDEF"};
int hexes[] = {10,11,12,13,14,15};
int a[30] = {0};
long long trans1(char str[])
{
	int i = 0;
	long long sum = 0;
	while(str[i] != '\0')
	{
		sum  *= 16;
		if(str[i]-'0' >= 0 && str[i]-'0'<=9)
		{
			sum+=(str[i] - '0');
		}
		else
			sum+=hexes[str[i] - 'A'];
		i++;
	}
	return sum;
}

int  main()
{
	char str[10];
	cin >> str;
	cout << trans1(str);
	return 0;
}