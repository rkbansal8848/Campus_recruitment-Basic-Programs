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
    Node * temp=new Node(data);
    temp->next=root;
    root=temp;
}
void printnode(Node * &root){
 Node * temp=root;
 while(temp!=NULL){cout<<temp->val<<endl;temp=temp->next;}
}
int main() {
	
    Node *root=NULL;
    insert_head(root,20);
    insert_head(root,30);
    insert_head(root,40);
    printnode(root);
    
return 0;
}