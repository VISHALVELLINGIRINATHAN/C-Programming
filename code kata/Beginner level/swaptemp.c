#include <stdio.h>
 int main()
{
   int x, y, temp;
 
  
   scanf("%d%d", &x, &y);
    temp = x;
   x    = y;
   y    = temp;
 
   printf("After Swapping\nx = %d\ny = %d\n",x,y);
 
   return 0;
}
