/*
	Author   : Sandeep Ravindra
	Contest  : Practice
	Problem  : BST
*/

#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string.h>
#include<vector>

using namespace std;

#define	    ll		    long long

#define     s(n)	    scanf("%d",&n)
#define     ss(n)	    scanf("%s",n)
#define     sc(n)	    scanf("%c",&n)
#define     sl(n)	    scanf("%ld",&n)
#define     sll(n)	    scanf("%lld",&n)

#define     fr(i,a,b)	    for(int i=a;i<b;i++)

#define     max(a,b)	    ((a)>(b)?(a):(b))
#define     min(a,b)	    ((a)<(b)?(a):(b))

#define	    p(n)	    printf("%d",n)
#define	    pl(n)	    printf("%ld",n)
#define	    pll(n)	    printf("%lld",n)
#define	    pbl(n)	    printf("\n")

#define     TEST            int _t; s(_t); while(_t--)

struct bstNode
{
    int data;
    bstNode* left;
    bstNode* right;
};

ll c = 0;

bstNode* insert_node(bstNode* root,int data)
{
    c++;

    if(data < root->data)
    {
        if(root->left == NULL)
        {
            bstNode* new_node = new bstNode();
            new_node->data = data;
            new_node->left = new_node->right = NULL;
            root->left = new_node;
        }
        else
            root->left = insert_node(root->left,data);
    }
    else
    {
        if(root->right == NULL)
        {
            bstNode* new_node = new bstNode();
            new_node->data = data;
            new_node->left = new_node->right = NULL;
            root->right = new_node;
        }
        else
            root->right = insert_node(root->right,data);
    }
    return root;
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("in.txt","r",stdin);
	#endif
    long n,input;
    sl(n);
    bstNode* root = NULL;
    while(n--)
    {
        sl(input);
        if(root == NULL)
        {
            root = new bstNode();
            root->data = input;
            root->left = root->right = NULL;
        }
        else
            root = insert_node(root,input);
        pll(c),pbl();
    }
return 0;
}
