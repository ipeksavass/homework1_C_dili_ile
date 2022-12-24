#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,c;
	printf("a, b, c sayilari icin birer deger giriniz :");
	scanf("%d %d %d",&a,&b,&c);
	
	if (a>b && a>c)
	{
		printf("a en buyuk sayidir.");
	}
	else
	{
		if (b>a && b>c)
			printf("b en byuk sayidir.");
			else
				printf("c en buyuk sayidir.");
	}

	return 0;

}

