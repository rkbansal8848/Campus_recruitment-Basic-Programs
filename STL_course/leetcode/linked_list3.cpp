#include<iostream>
using namespace std;
struct Node{
    int val;
    Node* next;
    Node(){val=0;next=NULL;}
    Node(int data){val=data;next=NULL;}
    Node(int data,Node * &next){val=data;this->next=next;}
  };
 void insert_head(Node* &root,int data){
    Node * node=new Node(data);
    node->next=NULL;
    root=node;
}
void printnode(Node * &root){
 Node * temp=root;
 while(temp!=NULL){cout<<temp->val<<endl;temp=temp->next;}
}
int main() {
    Node *root=NULL;
    insert_head(root,20);
    printnode(root);
    
return 0;
}