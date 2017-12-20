#include <stdio.h>
int main(void) {
	char a[50];
	int i,j,len;
	gets(a);
      printf("%s\n",a);	
   len=strlen(a);
   printf("%d\n",len);
      len=len%2==0?len:len+1;
      for(i=0,j=1;i<=len,j<=len+1;i+=2,j+=2)
      printf("%c%c",a[j],a[i]);
      return 0;
}
