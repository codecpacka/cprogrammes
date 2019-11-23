#include <stdio.h>
#include <stdlib.h>
#define pf printf
#define sf scanf

struct bst
{

    struct bst* left;
    int info;
    struct bst* right;
};

struct bst* insbtree(struct bst *root, int data)
{
    struct bst* node;
    node=(struct bst*)malloc(sizeof(bst));
    node->left = NULL;
    node->right = NULL;
    node->info = data;

    if (root == NULL)
    {
        root = node;
        return root;
    }
    else
    {
        struct bst* temp;
        temp = root;
        while (temp!=NULL)
        {
          
            if (temp->info > data)
            {
                if (temp->left == NULL)
                    {
                    temp->left = node;
                    break;
                    }
                temp = temp->left;
            }
            else if(temp->info < data)
            {

                if (temp->right == NULL)
                    {
                        temp->right = node;
                        break;
                    }               
                temp = temp->right;
            }
            
        }
    }
    return root;
}

void disbst(struct bst *root)
{
    if (root)
    {
        printf("%d \t", root->info);
        disbst(root->left);
        disbst(root->right);
    }
}

int main()
{
    int data, ch;
    struct bst *root;
    root = NULL;
    do
    {
        // disbst(root);
        pf("enter your choice\n ");
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