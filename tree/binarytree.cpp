#include <stdio.h>
#include <stdlib.h>
#define pf printf
#define sf scanf

#include "bst.h"  ////////header file with all the functions used in this programme



int main()
{
    int data, ch;
    struct bst *root;
    root = NULL;
    do
    {
        // disbst(root);
        pf("\n enter your choice\n ");
        pf("1.insert\n");
        pf("2.display\n");
        pf("0.exit\n ");
        sf("%d", &ch);
        switch (ch)
        {
        case 0:
            exit(0);
            break;
        case 1:
            pf("x=");
            sf("%d", &data);
            root = insbtree(root, data);
            break;

        case 2:
            disbst(root);
            break;

        default:
            pf("wrong choice");
            break;
        };
    } while (ch != 0);
    return 0;
}