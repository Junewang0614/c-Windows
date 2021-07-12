#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
using namespace std;
//#define maxn 210
//int ans[210] = {0};
//01字串问题
//实质：模拟二进制运算，输出0-31的二进制
int a = 0;
int ans[5] = {0};
void trans()
{
	int i = 4;
	while(a)
	{
		ans[i--] = a%2;
		a = a/2;
	}
	for(i = 0;i < 5;i++)
	{
		cout<<ans[i];
	}
	cout <<endl;

}

int main()
{
	for(a = 0;a < 32;a++)
		{
			trans(a);
		}
	return 0;
}