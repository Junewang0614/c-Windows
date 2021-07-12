#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
//#define maxn 210
//int ans[210] = {0};

int main()
{
	int n, i = 0;
	cin >> n;
	vector<int> ans(n);
	int a;
	int dis;
	while (n--)
	{
		cin >> ans[i++];
	}

	cin >> a;

	vector<int>::iterator it = find(ans.begin(), ans.end(), a);
	if (it == ans.end())
		 dis = -1;
	else
        dis = distance(ans.begin(),it)+1;
    cout <<dis<<endl;
}
