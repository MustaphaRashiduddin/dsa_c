#include "node.h"
#include <stdlib.h>
#include <stdio.h>

void push(struct node **el, int dat)
{
        if (*el==0) {
                *el = malloc(sizeof(struct node));
                (*el)->nxt = 0;
                (*el)->dat = dat;
        } else {
                push(&(*el)->nxt, dat);
        }
}

void print_list(struct node *el)
{
        if (el != 0) {
                printf("%d ", el->dat);
                print_list(el->nxt);
        }
}

void del_list(struct node *el)
{
        if (el != 0)
                del_list(el->nxt);
        free(el);
}
