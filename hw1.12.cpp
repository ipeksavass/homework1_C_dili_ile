#include <stdio.h>
int main()
{
	int min,max,i;
	printf("bir min ve bir max degeri giriniz :");
	scanf("%d %d",&min,&max);
	
	for(i=min;i<=max;i++)
	{
		printf("%d\n",i);
	}
	return 0;
}
