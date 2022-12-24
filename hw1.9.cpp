#include <stdio.h>
int main()
{
	int n,min,max,i;
	printf("bir n, bir min, bir de max degeri giriniz :");
	scanf("%d %d %d",&n,&min,&max);
	
	for(i=min;i<=max;i++)
	{
		if (i%n==0)
		{
			printf("%d\n",i);
		}
	
	}
	return 0;
}
