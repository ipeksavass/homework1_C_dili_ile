#include <stdio.h>
int main()
{
	int N,a,b,d;
	printf("Lutfen bir N sayisi giriniz :");
	scanf("%d",&N);
	a=N;
	
	b = N % 10;
	
	for(;a>9;)
	{
		d = a % 10;
		a = a / 10;
	}
	printf("%d nin ilk basamagi= %d\n",N,a);
	printf("%d nin son basamagi= %d\n",N,b);
	
	
}
