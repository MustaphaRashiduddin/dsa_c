#include "node.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

void enq(struct node **hd, int dat)
{
        struct node *el = malloc(sizeof(struct node));
        el->dat = dat;
        el->nxt = *hd;
        *hd = el;
}

int deq(struct node **el)
{
        assert(*el!=0);

        if ((*el)->nxt == 0) {
                int n = (*el)->dat;
                free(*el);
                *el = 0;
                return n;
        }
        return deq(&(*el)->nxt);
}

void print_queue(struct node *hd)
{
        if (hd != 0) {
                printf("%d ", hd->dat);
                print_queue(hd->nxt);
        }
}

void del_queue(struct node *hd)
{
        if (hd != 0)
                del_queue(hd->nxt);
        free(hd);
}
