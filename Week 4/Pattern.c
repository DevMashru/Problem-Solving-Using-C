#include<stdio.h>
int main()
{
	int i,j,n,s=0;
	printf("Enter the limit");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("1");
		for (j=2;j<=i;j++)
		{	
			s+=j;
			printf("+%d",j);
		}
		printf("=%d\n",s+1);
		s=0;
	}
	return 0;
}
