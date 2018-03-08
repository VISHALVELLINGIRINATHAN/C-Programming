#include<stdio.h> 
void main()
{
int a[10],i,n;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\n %d",i);
}
int l=a[0],h=n,mid;
if(l<h)
{
	mid=(l+h)/2;
	printf("\n%d",mid);
}
}
