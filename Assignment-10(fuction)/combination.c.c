#include<stdio.h>

int fact(int n)
{
	int i,f=1;
	for(i=1; i<=n; i++)
	   f = f*i;
    return f;
}

int comb(int n,int r)
{
	return fact(n) /(fact(r)*fact(n-r));
}

int main()
{
	printf("combination = %d\n\n",comb(10,2));
	printf("permutation = %d\n\n",per(10,2));
}
