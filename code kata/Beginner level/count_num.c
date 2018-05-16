#include <stdio.h>

int main(void) {
	int n,s=0,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	}
	for(i=0;i<n;i++)
	{
		s=s+a[i];
	}
	int avg=s/n;
	printf("%d",avg);
	
	return 0;
}
