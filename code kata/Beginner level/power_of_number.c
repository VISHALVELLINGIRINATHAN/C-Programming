#include <stdio.h>
int main(void) {
	int base,exp,i,p=1;
scanf("%d",&base);
scanf("%d",&exp);
for(i=1;i<=exp;i++)
{
p=p*base;
}
printf("%d",p);
	
	return 0;
	
}
