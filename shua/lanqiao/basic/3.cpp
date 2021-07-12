#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

#define maxn 1000000010
long long ans[maxn]= {0};

long long solve(long long a)
{
	if(ans[a])
		return ans[a];
	if(a == 1)
		ans[a] = 1;
	else
		ans[a] = solve(a-1)+a;
	return ans[a];
}

int main()
{
	long long a,ans;
	scanf("%I64d",&a);
	printf("%I64d",solve(a));
	return 0;
}