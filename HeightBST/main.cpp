#include <iostream>
#include<stdio.h>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
};
int main()
{
    node *insert(int,node *);
    node *assign(int);
    int height(node *);
    node *root=NULL;
    int n,data;
    cin>>n;
    while(n--)
    {
        cin>>data;
        root=insert(data,root);
    }
    int h=height(root);
    cout<<h;
    return 0;
}
node *insert(int data,node *t)
{
    node *s=new node;
    s->data=data;
    s->right=NULL;
    s->left=NULL;
    //node *t=root;
    while(true)
        {
            if(t==NULL)
            {
                t=s;break;

            }
            else if(t->data>=s->data)
            {
                t=t->left;
            }
            else if(t->data<s->data)
            {
                t=t->right;
            }
        }
        return t;

}
/*node* assign(int data)
{
    node *s=new node;
    s->data=data;
    s->right=NULL;
    s->left=NULL;
    return s;
}*/
int height(node*s)
{
    if (s == NULL)
    {
        return -1;
    }

    int left = height(s->left);
    int right = height(s->right);

    if (left > right) {
        return left + 1;
    } else {
        return right + 1;
    }
}

