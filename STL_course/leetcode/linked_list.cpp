#include<iostream>
using namespace std;
struct newnode{
int val;
newnode*next;
newnode(){
    val=0;
    next=NULL;
}
newnode(int x){
    val=x;
    next=NULL;
}
newnode(int x,newnode *next){
    val=x;
    this->next=next;
}
};
    int main() {int i=0;
    newnode* node=new newnode(2);
    node->next=new newnode(4);
    
    while(node!=NULL){
        cout<<node->val<<" ";
        node=node->next;
        i++;
    }
return 0;
}