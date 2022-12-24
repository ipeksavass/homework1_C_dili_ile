#include <stdio.h>
int main()
{
	float n,i,sum;
	printf("lutfen bir n degeri giriniz :");
	printf("program(sum=1/2+1/4+...+1/n)formulunu isleme koyacaktýr\n ");
	scanf("%f",&n);
	
	for(i=2;i<=n;i++)
	{
		sum+= 1 / i;
	}
	printf("islemin sonucu =%.2f ",sum);
	
	return 0;
}
