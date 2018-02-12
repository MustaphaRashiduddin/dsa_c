#include "node.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

void push(struct node **el, int dat)
{
        if (*el==0) {
                *el = malloc(sizeof(struct node));
                if (el==0) {
                        fprintf(stderr, "failed to allocate memory in push function");
                        exit(1);
                }
                (*el)->nxt = 0;
                (*el)->dat = dat;
        } else {
                push(&(*el)->nxt, dat);
        }
}

int pop(struct node **el)
{
        assert(*el!=0);

        if ((*el)->nxt==0) {
                int dat = (*el)->dat;
                *el=0;
                return dat;
        }
        return pop(&(*el)->nxt);
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
