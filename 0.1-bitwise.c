#include <stdio.h>
#include <stdlib.h>

void binary(unsigned n)
{
    unsigned i;
    for (i = 1 << 31; i > 0; i /= 2)
        (n & i) ? printf("1") : printf("0");
}

int main(int argc, char *argv[]) {
    int n1 = 123;

    printf("%d\n", n1);
    n1 <<= 2;
    printf("%d x2\n", n1);

    exit(EXIT_SUCCESS);
}