#include <stdio.h>
int main()
{
	int N,i,a,c;
	printf("Lutfen bir N sayisi giriniz :");
	scanf("%d",&N);
	c=N;
	
	for (i=0;c>0;i++)
	{
		a = c % 10;
		c = c / 10;
	}
	printf("%d sayisinin basamak sayisi=%d",N,i);
	
	return 0;
}
