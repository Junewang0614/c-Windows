#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
using namespace std;
#define maxn 40
//int ans[210] = {0};
int map[maxn][maxn] = {1};


int main()
{
	int n;
	cin >> n;

	int i,j,k;
	map[0][0] = 1;
	for(i = 1;i < n;i++)
	{
		for(j = 0;j < i+1;j++)
		{
			if(j == 0 || j == i)
				map[i][j] = 1;
            else
                map[i][j] = map[i-1][j-1]+map[i-1][j];
		}
	}

	for(i = 0;i < n;i++)
	{
		for(j = 0;j < i+1;j++)
			cout << map[i][j]<<" ";
		cout <<endl;
	}

}