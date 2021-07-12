#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
using namespace std;
#define maxn 210

char hexs[] = {"ABCDEF"};
int hexes[] = {10,11,12,13,14,15};
int a[30] = {0};
int trans1(char str[])
{
	int i = 0;
	int sum = 0;
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

void solve(int sum)
{
	int i = 1;
	while(sum)
	{
		a[i++] = sum%8;
		sum /= 8;
	}
	i--;
	while(i)
	{
		cout<<a[i--];
	}
	cout<<endl;
}

int main()
{
	int n;
	cin >>n;
	char str[10] = {"\0"};
	while(n--)
	{
		cin >> str;
		solve(trans1(str));
	}
	return 0;
}