#include <stdio.h>
int main()
{
	int n,i,sum=0;
	for (i=1;i<=10;i++)
	{	
		printf(" bir n sayisi giriniz:\n");
		scanf("%d",&n);
		sum+=n;
	}
	printf("bu 10 sayinin toplami:\n");
	printf("%d",sum);
	return 0;
}
