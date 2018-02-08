#include <stdio.h>
int main()
{
    int n1, n2, i, tempnum, numer, rem;
      scanf("%d %d", &n1, &n2);
       for(i=n1+1; i<n2; ++i)
       {
        temp=i;
        num=0;
        while(tempnum!=0)
        {
          rem=(temp%10);
          numerr+=rem*rem*rem;
          temp/=10;
        }
        if(i==numer)
        {
          printf("%d ",i);
        }
     }
  return 0;
}
