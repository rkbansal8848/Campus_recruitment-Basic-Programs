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
 while(temp!=NULL){cout<<temp->val<<" ";temp=temp->next;}
}
int main() {
    int ch=0;
    int data;
    Node *root=NULL;
    cout<<"Enter the choice 1 to create node, 2 to display , 3 to break\n";
    cin>>ch;
    while(1){
    if(ch==1){
    cout<<"Enter the val for the node\n";
    cin>>data;
    insert_head(root,data);
    }
    else if(ch==2)
    { printnode(root); }
    else if(ch==3)
    { break; }
    else
    { cout<<"enter the valid choice\n"; }

    cout<<"\nEnter the choice 1 to create node, 2 to display , 3 to break\n";
    cin>>ch;
    }

return 0;
}
