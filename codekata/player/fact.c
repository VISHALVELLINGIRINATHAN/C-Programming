#include<stdio.h>

int main(void) {
    int f=1,n,i=1;
    scanf("%d",&n);
    while(i<=n)
 {
     f=f*i;
    i++;
}
printf("fact=%d",f);
}
