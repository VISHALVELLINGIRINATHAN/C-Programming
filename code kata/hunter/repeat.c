#include<stdio.h>
void main()
{
int a[20],n,s,o,c=-1,tem;

scanf("%d",&n);
{
for(s=0;s<n;s++)
scanf("\n%d",&a[s]);
}
for(s=0;s<n;s++)
{
for(o=s+1;o<n;o++)
{
if(a[s]==a[o])
{
tem=a[o];
c=o;
break;
}
}
}
if(c!=-1)
{
printf("%d",tem);
}
else
{
printf("unique");
}
}
