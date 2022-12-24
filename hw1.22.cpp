#include <stdio.h>
#include <math.h>
int main()
{
	int N,i,A,x,y,t,us,sayi,ortanca,us2,terssayim;
	printf("Lutfen bir N sayisi giriniz :");
	scanf("%d",&N);
	A=N;
	t=A%10; /* t= son basamak */
	
	for (i=0;A>0;i++)
	{
		x = A % 10;
		A = A / 10;
	}
	us = pow(10,i-1);
	sayi = x * us + t;
	ortanca = N - sayi;
	us2= pow(10,i-1);
	terssayim= t * us2 + x + ortanca;
	printf("%d",terssayim);
	
	return 0;
	
}
