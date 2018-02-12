#ifndef _NODE_H
#define _NODE_H

struct node {
        struct node *nxt;
        void *dat;
};

void push(struct node **el, void *dat);
void print_list(struct node *el, void (*print)(struct node *el));
void del_list(struct node *el);

#endif
