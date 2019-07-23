#include<stdio.h>
#define PI 3.1415927
#define lf(r) (r)*(r)*(r)

int main()
{
	double r,v;
	while (scanf("%lf",&r) != EOF)
	{
		v = ((double)4/3) * PI * lf(r);
			printf("%.3lf", v);

	}

	return 0;
}
