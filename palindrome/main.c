#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
        if (argc != 2) {
                printf("supply ONE string argument\n");
                return 1;
        }

        char *str = argv[1];
        int n = strlen(str);
        char pal = 1;

        for (int i=0; i<n; i++)
                if (str[i] != str[n-i-1]) {
                        pal = 0;
                        break;
                }

        pal == 1 ? n : printf("not ");
        printf("palindrome\n");
                
        return 0;
}
