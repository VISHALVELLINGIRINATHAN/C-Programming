
#include <stdio.h>
 int main(void) 
{
	int n,sum=0,s,rem;
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		s=rem*rem;
		sum=sum+s;
		n=n/10;
	}
	printf("\n%d",sum);
	return 0;
}
