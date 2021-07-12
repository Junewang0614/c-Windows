#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
using namespace std;
#define maxn 110
//int ans[2*maxn-1] = {0};

int sum = 0;
int num = 0;
int main()
{
	int y;
	cin >> y;
	if(y %4 == 0 && y %100 || y % 400 == 0)
	{
		cout << "yes"<<endl;
	}
	else
		cout << "no" << endl;
}