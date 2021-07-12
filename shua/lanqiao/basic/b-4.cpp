#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
using namespace std;
//#define maxn 210
//int ans[210] = {0};
#define inf 0x3ffff
int main()
{
	int n;
	cin >>n;
	int minn = -inf;
	int maxx = inf;
	int sum = 0;
	int a;
	while(n--)
	{
		cin >> a;
		minn = min(a,minn);
		maxx  = max(a,maxx);
		sum+=a;
	}
	cout << maxx<<endl;
	cout<< minn<<endl;
	cout << sum<<endl; 
}
