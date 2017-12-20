#include <stdio.h>
 int main()
{
    int num,temp,cnt;
    scanf("%d",&num);
   cnt=0;
    temp=num;
  while(temp>0){
        cnt++;
        temp/=10;
    }
 
    printf("Total numbers of digits: %d",cnt);
     
    return 0;
}
