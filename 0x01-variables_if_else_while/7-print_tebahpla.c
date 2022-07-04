#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
char c  = 'Z';

while (c >= 'a')
{
putchar(c);
c--;
}

putchar('\n');
return(0);
}
