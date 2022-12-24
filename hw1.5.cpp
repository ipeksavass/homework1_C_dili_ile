#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int F,C;
	printf("bir F degeri giriniz :");
	scanf("%d",&F);
	
	C = (F - 32) * 5 / 9;
	printf("C degeri %d",C);
	
	return 0;
	
}
