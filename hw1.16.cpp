#include <stdio.h>
int main()
{
	int n=1000,i,sum;
	
	for (i=n;i<=2000;)
	{
		printf("%d\n",i);
		i = i + 2;
		sum+=i;
	}
	printf("tum sayilarin toplami =%d",sum);
	return 0;
}
