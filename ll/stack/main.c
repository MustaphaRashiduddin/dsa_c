#include "node.h"
#include <stdio.h>

int main(int argc, char **argv)
{
        struct node *root = 0;
        push(&root, 3);
        push(&root, 4);
        push(&root, 5);
        push(&root, 113);

        print_list(root);

        printf("\n%d", pop(&root));
        printf("\n%d", pop(&root));
        printf("\n%d", pop(&root));
        printf("\n%d", pop(&root));

        del_list(root);

        return 0;
}
