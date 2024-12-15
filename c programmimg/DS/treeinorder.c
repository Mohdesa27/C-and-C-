#include<stdio.h>
#include<conio.h>
struct treenode 
{
    struct treenode *left;
    int info;
    struct treenode *right;
};
void in_traversal(struct treenode *q);
void in_traversal(struct treenode *q)
{
    if (q !=NULL)
    {
        in_traversal(q->left);
        printf("%d",q->info);
        in_traversal(q->right);
    }
}
 int main()
 {
    struct treenode *q=NULL;
    printf("the order is :\n");
    in_traversal(q);
    return 0;
 }