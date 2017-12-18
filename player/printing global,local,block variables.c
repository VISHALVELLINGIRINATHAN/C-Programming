#include<stdio.h>
int count= 100;          
void main()
{
  printf("Global variable is %d",count);
 int count= 10;         
   printf("Local variable is %d",count);
   {
   int count =50;
   printf("block scope value is %d",count);
}
}
