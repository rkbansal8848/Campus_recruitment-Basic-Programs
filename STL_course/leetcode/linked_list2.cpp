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

newnode * cnode(int val){
       newnode *root=new newnode(val);
        return root;
    }

int main() {
    int j=0,v;
     newnode *p;
    //  newnode * &i=p;
     cout<<"start\n";
    while(j<3){
        cin>>v;
       p=cnode(v);
       newnode * &i=p;
       p=p->next;
       j++;
    }
//   cout<<"\n";
    //  cout<<i->val;
    // newnode *p=new newnode(2);
    // p->next=new newnode(3);
    // p->next->next=new newnode(4);

    // while(pr!=NULL){
    //     cout<<pr->val<<" ";
    //     pr=pr->next;
    // }

return 0;
}