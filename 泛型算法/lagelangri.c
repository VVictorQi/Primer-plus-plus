/*
#include<stdio.h>
int main()
{
	float static x[4] = { 1.1275, 1.1503, 1.1735, 1.972 };
	float static y[4] = { 0.1191, 0.13925, 0.15932, 0.17903 };

	int i, j;
	float c, f, t;
	c = 1.13;
	f = 0;
	for (i = 0; i <= 3;i++)
	{
		t = 1;
		for (j = 0; j <= 3;j++)
			if (j != i)
				t = t*(c - x[j]) / (x[i] - x[j]);
		f = f + t*y[i];		
	}
	return 0;
}
int mainl(void)
{
	float static x[5] = { 0.4, 0.55, 0.8, 0.9, 1.0 };
	float static y[5] = { 0.41075, 0.57815, 0.88811, 1.02652, 1.17520 };
	int i, k;
	float c, p;
	for (k = 1; k <= 4; k++)
	{
		printf("\n%dth is:", k);
		for (i = 4; i >= k; i--)
		{
			y[i] =(y[i]- y[i - 1]) / (x[i] - x[i - k]);
		}
	}
	c = 0.5;

}*/