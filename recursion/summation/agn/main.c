#include <stdio.h>

int summation(int *nums, int size);

int main(int argc, char **argv)
{
        int nums[] = {1, 2, 3, 4, 5};
        int size = sizeof(nums)/sizeof(nums[0]);
        printf("%d", summation(nums, size));
        return 0;
}

int summation(int *nums, int size)
{
        if (size == 1)
                return nums[0];
        return nums[0] + summation(nums+1, size-1);
}
