#ifndef _NODE_H
#define _NODE_H

struct node {
        int nxtEmpty;
        struct node *nxt;
        int dat;
};

void enq(struct node **hd, int dat);
void print_queue(struct node *hd);
void del_queue(struct node *hd);
int deq(struct node **el);

#endif 
