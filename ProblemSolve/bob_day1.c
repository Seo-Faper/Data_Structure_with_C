#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    short x = -1;
    char *buffer = malloc((unsigned short)x);
    char *src = "abcd";
    memcpy(buffer, src, x);
    return 0;
}