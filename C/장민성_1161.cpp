#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d %d", &a, &b);
		
	if(a%2==0)
		printf("礎熱+");
	else
		printf("�汝�+");
		
	if (b%2==0)
		printf("礎熱=");
	else
		printf("�汝�="); 
		
	if(a+b%2==0)
		printf("礎熱");
	else
		printf("�汝�"); 
	
	return 0;
}
