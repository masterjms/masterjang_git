#include <stdio.h>
//ȥ��c 437P. 
int main(void)
{
	int a = 10, b = 20;
	int *pa = &a, *pb = &b;
	int **ppa = &pa, **ppb = &pb;
	int *pt;
	
	pt = *ppa;
	*ppa = *ppb;
	*ppb = pt;
	
	printf("a : %d, b : %d\n", a, b);
	printf("*pa : %d, *pb : %d", *pa, *pb);
	
	return 0;
}
