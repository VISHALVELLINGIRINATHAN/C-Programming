#include <stdio.h>
int main(void) {
	int i, n, s = 0;
    scanf ("%d", &n);
    for (i = 1; i <= n; i++)
    {
        s = s + i;
    }
    printf ("Sum= %d\n", s);
 return 0;
}


