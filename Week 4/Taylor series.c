#include<stdio.h>
#include<math.h>
int main()
{
	int i=3,t;
	float a,s;
	printf("Enter angle");
	scanf("%f",&a);
	a=a*3.1415/180;
	t=a;
	s=t;
	while(fabs(t)>0.000001)
	{
		t=-t;
		t*=a*a/(i*(i-1));
		s+=t;
		i+=2;
	}
	printf("Using Taylor: %f\n",s);
	printf("Using math.h: %f\n",sin(a));
	return 0;
}
