#ifndef _NODE_H
#define _NODE_H

struct node {
        struct node *nxt;
        int dat;
};

void push(struct node **el, int dat);
void print_list(struct node *el);
void del_list(struct node *el);
int pop(struct node **el);
int search(struct node *hd, int n);

#endif
