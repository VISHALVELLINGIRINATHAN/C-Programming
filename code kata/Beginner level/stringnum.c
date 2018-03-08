#include <stdio.h>
int main(void) 
 {
	  char s[10];
	  int n,i;
	   scanf("%s",s);
  	n=strlen(s);
	  for(i=0;i<n;i++)
	  {
		  if(s[i]>='0' && s[i]<='9')
		  {
			  printf("\n YES");
		   }
		  else
      {
		   printf("\n NO");
	     }
       }
	return 0;
}
