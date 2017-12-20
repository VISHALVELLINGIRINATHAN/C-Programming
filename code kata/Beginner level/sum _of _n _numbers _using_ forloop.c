#include <stdio.h>
int main(void) {
	int i=1,n,s;
    scanf("%d",&n);
    while(i<=n)
    {
        s=s+i;
        i++;
    }   
    printf("sum=%d",s);
 return 0;
}

