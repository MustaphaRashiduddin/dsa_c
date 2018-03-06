#include <stdio.h>
#include <stdlib.h>

int summation(int arr[], int n);

int main(int argc, char **argv)
{
        int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        int n = sizeof(arr) / sizeof(arr[0]);
        printf("%d\n", summation(arr, n));
        return 0;
}

int summation(int arr[], int n)
{
        if (n==1)
                return arr[0];
        return arr[0] + summation(arr+1, n-1);
}
