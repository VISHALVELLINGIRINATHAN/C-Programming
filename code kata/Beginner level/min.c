#include <stdio.h>
int main(void)
{
 long sec, hr, min, t;
  scanf("%ld", &sec);
 hr = sec/3600;
 t = sec%3600;
 min = t/60;
 sec = t%60;
printf("\n\nTime is %ld hrs %ld mins %ld secs", hr, min, sec);
return 0;
}
