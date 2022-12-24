#include <stdio.h>
int main ()
{
	int min,max,i,sum=0;
	printf("bir min ve bir max degeri giriniz :");
	scanf("%d %d",&min,&max);
	
	for(i=min;i<=max;i++)
	{
		sum = sum + i;
	}
	printf("%d",sum);
	
	return 0;
}
