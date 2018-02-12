#include "node.h"
#include <stdio.h>

void p_n_int(struct node *el);
void p_n_str(struct node *el);

int main(int argc, char **argv)
{
        int n[] = {1, 2, 5, 11};
        struct node *root = 0;
        push(&root, &n[0]);
        push(&root, &n[1]);
        push(&root, &n[2]);
        push(&root, &n[3]);

        print_list(root, p_n_int);

        printf("\npoppin ints\n");
        printf("%d ", *(int *)pop(&root));
        printf("%d ", *(int *)pop(&root));
        printf("%d ", *(int *)pop(&root));
        printf("%d ", *(int *)pop(&root));
        printf("\n");

        del_list(root);

        char *s[] = {"bro force",
                "hello people of the earth",
                "blazinga", 
                "how interesting"};
        struct node *s_root = 0;
        push(&s_root, &s[0]);
        push(&s_root, &s[1]);
        push(&s_root, &s[2]);
        push(&s_root, &s[3]);

        print_list(s_root, p_n_str);

        printf("poppin strings\n");
        printf("%s ", *(char **)pop(&s_root));
        printf("%s ", *(char **)pop(&s_root));
        printf("%s ", *(char **)pop(&s_root));
        printf("%s ", *(char **)pop(&s_root));
        printf("\n");


        del_list(s_root);
        return 0;
}

void p_n_int(struct node *el)
{
        printf("%d ", *(int *)el->dat);
}

void p_n_str(struct node *el)
{
        printf("%s\n", *(char **)el->dat);
}
