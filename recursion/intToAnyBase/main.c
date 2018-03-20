#include <stdio.h>
#include <stdlib.h>

void convert(int n, int b, char *str);

int main(int argc, char **argv)
{
        char str[100];
        convert(10, 2, str);
        /* convert(769, 10, str); */
        printf("%s", str);

        return 0;
}

void convert(int n, int b, char *str)
{
        if (n<b) {
                sprintf(str, "%d", n%b);
                return;
        }
        sprintf(str, "%d", n%b);
        convert(n/b, b, str+1);
}
