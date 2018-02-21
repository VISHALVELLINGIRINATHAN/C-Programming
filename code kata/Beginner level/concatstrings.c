#include <stdio.h>
int main()
{
    char st1[100], st2[100], i, j;
    scanf("%s", st1);
    scanf("%s", st2);
    for(i = 0; st1[i] != '\0'; ++i);
for(j = 0; st2[j] != '\0'; ++j, ++i)
    {
        st1[i] = st2[j];
    }
st1[i] = '\0';
    printf("After concatenation: %s", st1);

    return 0;
}
