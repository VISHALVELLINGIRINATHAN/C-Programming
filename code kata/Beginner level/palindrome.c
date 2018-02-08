#include <stdio.h>
int main()
{
    int n, reversedInteger = 0, remainder, originalInteger;

    
    scanf("%d", &n);

    originalInteger = n;

    
    while( n!=0 )
    {
        remainder = n%10;
        reversedInteger = reversedInteger*10 + remainder;
        n /= 10;
    }

    
    if (originalInteger == reversedInteger)
        printf("yes it is a palindrome.");
    else
        printf("no it is not a palindrome.");
    
    return 0;
}
