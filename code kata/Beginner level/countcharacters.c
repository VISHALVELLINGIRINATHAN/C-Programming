#include<stdio.h>
#include<conio.h>
int main()
{
 int i;
 int count_char=0;
 char str[20];
 gets(str);
 for(i=0; str[i]!=NULL; i++)
 {
   count_char++;
  }
 printf("\nNumber of words in string : % d",count_words+1); 
 getch();
 return 0;
}
