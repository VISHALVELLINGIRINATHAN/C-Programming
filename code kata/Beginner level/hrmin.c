#include<stdio.h>
int main()
{
 int hr1,min1,hr2,min2,hr,min;
 scanf("%d%d",&hr1,&min1);
 scanf("%d%d",&hr2,&min2);
 hr=hr1-hr2;
 min=min1-min2;
 printf("/n the time is %d:%d",hr,min);
 return 0;
} 
