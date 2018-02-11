#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
        void *gen = malloc(sizeof(void *) * (3));
        char **nums = (char **)gen;
        nums[0] = "hello";
        nums[1] = "people";
        nums[2] = "of the earth";
        for (int i=0; i<3; i++)
                printf("%s ", nums[i]);
        printf("\n");
        free(nums);
        return 0;
}
