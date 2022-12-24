#include <stdio.h>
int main()
{
	int N,A,a,sum=0;
	printf("Lutfen bir N sayisi giriniz :");
	scanf("%d",&N);
	A=N;
	
	for(;A>0;)
	{
		a = A % 10;
		A = A / 10;
		sum=sum*10+a;
	}
	
	printf ("%d",N);
	
	if (N==sum)
	{
		printf(" bir polindrome sayidir.",N);
	}
	else
	printf(" bir polindrome sayi degildir.",N);
	
	return 0;
}
