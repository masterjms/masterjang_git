#include <stdio.h>
int main()
{
	int n,i,j;
	int d[1000]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&d[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",d[j]);
		}
		printf("\n");
		int temp=d[0]; 
		for(j=1;j<n;j++)  
		{
			d[j-1]=d[j];
		}
		d[n-1]=temp;
	}
}
