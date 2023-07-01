#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int x = -1;
    unsigned int y = x;
    size_t z = x;

    printf("%x\n", sizeof(x));
    printf("%x\n", sizeof(y));
    printf("%x\n", sizeof(z));
    return 0;
}