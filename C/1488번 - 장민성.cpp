#include <stdio.h>
int main()
{
	int a[101][101]={0};
	int n,m,c=1,k,i,j,cnt=0,f1,f2;
	scanf("%d %d",&n,&m);
	f1=n;
	f2=m;
	i=n,j=m+1;
	while(1) //���� �ݺ�  
	{
	c*=-1;	
	for(k=1;k<=f2;k++)
	{
		j=j+c; 
		a[i][j]=++cnt;
	}
	f1--;
	f2--;
	if(cnt>=n*m) break;
	for(k=1;k<=f1;k++)
	{
		i=i+c;
		a[i][j]=++cnt;
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
