#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// returns malloced (char *)
char *convert(int n, int b);
void convert_aux(int n, int b, char *str, int i, int l);

const char *nums = {"0123456789ABCDEF"};

int main(int argc, char **argv)
{
        int n = 1453;
        int b = 16;
        
        char *str = convert(n, b);

        printf("%s\n", str);
        free(str);
        return 0;
}

char *convert(int n, int b)
{
        int l = ceil(log(n)/log(b));
        char *str = malloc(l+1);
        convert_aux(n, b, str, 0, l);
        return str;
}

void convert_aux(int n, int b, char *str, int i, int l)
{
        if (n<b) {
                sprintf(str, "%c", nums[n%b]);
                return;
        }
        convert_aux(n/b, b, str, ++i, l);
        sprintf(str+(l-i), "%c", nums[n%b]);
}
