#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
using namespace std;
//#define maxn 210
//int ans[210] = {0};

//注意每行最多不能超过m个字符
char abc[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
int main()
{
	int n,m;
	cin >> n>>m;
	int i,j,k;
	int line = 0;
	for( ;line < n;line++)
	{
		i = 0;
		j = line;
		int num = 0;
		for(;j >0 && num < m;j--)
		{
			cout<<abc[j];
			num++;
		}
		for(;i <m-line && num < m;i++)
		{
			cout << abc[i];
			num++;
		}
		cout <<endl;
	}
	
}