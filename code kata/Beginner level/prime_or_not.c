#include <stdio.h>
int main()
{
    int n, i, f = 0;

    
    scanf("%d",&n);

    for(i=2; i<=n/2; ++i)
    {
        
        if(n%i==0)
        {
            f=1;
            break;
        }
    }

    if (flag==0)
        printf("yes it is a prime number.");
    else
        printf("no it is not a prime number.");
    
    return 0;
}
