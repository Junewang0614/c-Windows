#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
using namespace std;

#define maxn 9999
int a[5] = {0};

void apart(int x)
{
	int i = 1;
	while(x)
	{
		a[i++] = x%10;
		x = x/10;
	}
}

int main()
{
	int i;
	for(i = 1000;i <= 9999;i++)
	{
		apart(i);
		if(a[1] == a[4] && a[2] == a[3])
			cout << i<<" ";
	}
	return 0;
}