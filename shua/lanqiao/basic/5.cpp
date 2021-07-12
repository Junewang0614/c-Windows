#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
using namespace std;
#define maxn 210
int ans[210] = {0};

int main()
{
	int n;
	cin >>n;
	int i;
	for(i = 1;i <= n;i++)
	{
		cin >> ans[i];
	}
	sort(ans+1,ans+n+1);
	for(i = 1;i <= n;i++)
	{
		cout<<ans[i]<<" ";
	}
}

