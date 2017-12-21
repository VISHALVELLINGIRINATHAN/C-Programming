#include <stdio.h>
int main(void) {
int n,fact=1,i=1;
scanf("%d",&n);
do
{
	fact=fact*i;
	i++;
}
while(i<=n);
printf("%d",fact);
	
	return 0;
	
}
