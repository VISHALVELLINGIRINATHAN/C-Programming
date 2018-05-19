#include<stdio.h>
int main()
{
int a[20],n,i,sum;
scanf("\n %d",&n);
for(i=0;i<n;i++)
{
scanf("\t %d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
printf("\n Sum is %d",sum);
return 0;
}
