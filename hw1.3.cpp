#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	printf("bir a degeri giriniz :");
	scanf("%d",&a);
	
	if (a%2==0)
	{
		printf("a sayisi cifttir");
	}
	else 
		printf("a sayisi tektir");
		
	return 0;
}
