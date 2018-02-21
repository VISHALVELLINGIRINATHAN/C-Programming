#include <stdio.h>
#include <string.h>
void main()
{
    char s[200];
    int c= 0, i;
    scanf("%s",&s);
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ')
            c++;    
    }
    printf("number of words: %d\n",c+ 1);
}
