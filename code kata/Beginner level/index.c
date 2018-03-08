#include <stdio.h>
int main(void)
{
	int arr[10],b,i,temp;
	scanf("%d",&b);
	for(i=0;i<b;i++)
	 {
		 scanf("%d",&arr[i]);
	 }
	  for(i=0;i<b;i++)
	  {
		 printf("%d   %d\n",arr[i],i);
  	}
	
  	return 0;
 }
