#include "node.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
        struct node *hd = 0;
        enq(&hd, 3);
        enq(&hd, 4);
        enq(&hd, 5);
        enq(&hd, 8);
        enq(&hd, 9);
        enq(&hd, 10);
        print_queue(hd);
        printf("\n");
        printf("%d\n", deq(&hd));
        printf("%d\n", deq(&hd));
        printf("%d\n", deq(&hd));
        printf("%d\n", deq(&hd));
        printf("%d\n", deq(&hd));
        printf("%d\n", deq(&hd));
        del_queue(hd);
        return 0;
}
