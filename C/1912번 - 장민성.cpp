#include <stdio.h>

void f(int n)
{
	if(n==0) return 1;
	return n*f(n-1);
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",f(n));
	return 0;
}

