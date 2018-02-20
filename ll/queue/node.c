#include "node.h"
#include <stdlib.h>
#include <stdio.h>

void enq(struct node **hd, int dat)
{
        struct node *el = malloc(sizeof(struct node));
        el->dat = dat;
        el->nxt = *hd;
        *hd = el;
}


int deq(struct node **el)
{
        if ((*el)->nxt == 0) {
                int n = (*el)->dat;
                free(*el);
                *el = 0;
                return n;
        }
        return _deq_aux(*el);
}

int _deq_aux(struct node *el)
{
        while ((el)->nxt->nxt != 0)
                el = (el)->nxt;
        int n = (el)->nxt->dat;
        free(el->nxt);
        el->nxt = 0;
        return n;
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
