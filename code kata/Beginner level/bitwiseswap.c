#include <stdio.h>
int main() {
    int n = 65;
    int m = 120;
       n = n ^ m;
       m = n ^ m;
       n = n ^ m;
    printf("value of after swapping %d%d", n, m);
  return 0;
}
