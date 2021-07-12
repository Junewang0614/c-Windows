#include<stdio.h>
#include<math.h>
#define inf 10007

long long ans[10010] = {0};

long long fa(long long a)
{
	if(ans[a] != 0)
		return ans[a];
	if(a == 1 || a == 2)
		{
			ans[1] = ans[2] = 1;
		}
	else
		ans[a] = (fa(a-1)+fa(a-2))%inf;
	return ans[a];
}

int main()
{
	long long a;
	scanf("%lld",&a);
	printf("%lld",fa(a));
}
