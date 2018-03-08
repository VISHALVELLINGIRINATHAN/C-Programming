#include <stdio.h>
int main(void) {
int i,j,a[50],temp,num;
scanf("%d",&num);
for(i=0;i<num-1;i++)
{
for(j=i;j<num;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
printf("medium element is %d",a[num/2]);
		
}
return 0;
}
