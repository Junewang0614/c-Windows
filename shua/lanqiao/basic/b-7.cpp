#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
using namespace std;
//#define maxn 210
//int ans[210] = {0};

inline int lif(int n)
{
	return n*n*n;
}

void check(int n)
{
	int r;
	int sum = 0;
	int temp = n;
	while(n)
	{
		r = n%10;
		sum+=lif(r);
		n = n/10;
	}
	if(sum == n)
		cout << n<<endl;
}

int main()
{
	int i = 100;
	for(i = 100;i < 999;i++)
	{
		check(i);
	}
	return 0;
}

