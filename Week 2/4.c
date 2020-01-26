//find distance between 2 points
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d;
	float e;
	printf("Enter coordinates");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	e=sqrt(pow((c-a),2)+pow((d-b),2));
	printf("%f",e);
	return 0;
}
