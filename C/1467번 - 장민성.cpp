#include <stdio.h>
int main()
{
	int a[101][101]={0};
	int i,j,n,m,cnt=0;
	scanf("%d %d",&n,&m);
	for(i=m;i>=1;i--)
	{
		for(j=1;j<=n;j++)
		{
			a[j][i]=++cnt;
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
			{
				printf("%d ",a[i][j]);
			}
			printf("\n");
	}
	return 0;
}
