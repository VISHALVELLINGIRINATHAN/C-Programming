#include <stdio.h>
int main(void) {
	int a,i=1,j=1,sum=0;
	scanf("%d",&a);
	while(i<=1111)
	{
		j=j*10;
		sum=sum+(i*a);
		i=i+j;
	}
	printf("%d",sum);
	return 0;
}
