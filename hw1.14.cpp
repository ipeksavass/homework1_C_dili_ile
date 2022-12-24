#include <stdio.h>
int main()
{
	int n,i,fac=1;
	printf("bir n sayisi giriniz :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fac = fac * i;
	}
	
	printf("%d sayisinin faktoriyeli = %d",n,fac);
	
	return 0;
}
