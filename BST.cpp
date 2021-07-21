#include "bits/stdc++.h"
using namespace std;
class Node{
    public:
    int data;
    Node * left;
    Node *right;
};
Node* getNewNode(int data)
{
    Node* new_node=new Node();
    new_node->data=data;
    new_node->left=new_node->right=NULL;
    return new_node;
}
Node* insert(Node* root,int data){
    if(root==NULL)
    {
        root=getNewNode(data);
    }
    else if(data<=root->data)
    {
        root->left=insert(root->left,data);
    }
    else
    {
        root->right=insert(root->right,data);
    }
    return root;
}
bool search(Node* root,int data)
{
    if(root==NULL)
    {
        return false;
    }
    else if(root->data==data)
    {
        return true;
    }
    else if(data<=root->data)
    {
        return search(root->left,data);
    }
    else
        return search(root->right,data);
    
}
int main()
{
Node * root=NULL;//creating an empty tree
root=insert(root,10);
root=insert(root,15);
root=insert(root,20);
root=insert(root,30);
root=insert(root,25);
root=insert(root,8);
int n;
cout<<"Enter the number to be searched : "<<'\n';
cin>>n;
if(search(root,n)==true){
    cout<<"Found"<<endl;
}
else{
    cout<<"Not Found"<<endl;
}
return 0;
}

