#include <stdio.h>
int main(void) 
{
	char st[55];
	scanf("%s",st);
	if(st[0]=='S' || st[0]=='s')
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
