#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void convert(int n, int b, char *str, int f, int l);

int main(int argc, char **argv)
{
        char str[100];
        int n = 25;
        int b = 2;
        int l = ceil(log(n)/log(b));
        convert(n, b, str, 0, l);
        printf("%s", str);

        return 0;
}

void convert(int n, int b, char *str, int i, int l)
{
        if (n<b) {
                sprintf(str, "%d", n%b);
                return;
        }
        convert(n/b, b, str, ++i, l);
        sprintf(str+(l-i), "%d", n%b);
}
