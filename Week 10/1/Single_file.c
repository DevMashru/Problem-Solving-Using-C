#include<stdio.h>
int pascal(int l)
{
	int i,j,k,a[100][100];
	for(i=0;i<l;i++)
	{
		k=l-i-1;
		while(k>0)
		{
			printf(" ");
			k--;
		}
		for(j=0;j<=i;j++)
		{
			if(j==0||i==j)
				a[i][j]=1;
			else
				a[i][j]=a[i-1][j]+a[i-1][j-1];
		printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;	
}
int main()
{
	int l;
	printf("Enter the limit");
	scanf("%d",&l);
	pascal(l);
	return 0;
}
