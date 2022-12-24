#include <stdio.h>
int main()
{
	int N,i,multi;
	printf("lutfen bir N sayisi giriniz :");
	scanf("%d",&N);
	
	for (i=0;i<=10;i++)
	{
		multi = N * i;
		printf("%d\n",multi);
	}
	return 0;
}  
