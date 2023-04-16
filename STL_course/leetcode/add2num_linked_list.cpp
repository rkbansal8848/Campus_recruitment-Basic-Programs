#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
//   Definition for singly-linked list.
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
void insert_head(ListNode* &root,int data){
    ListNode * temp=new ListNode(data);
    temp->next=root;
    root=temp;
}

void printnode(ListNode * &root){
 ListNode * temp=root;
 while(temp!=NULL){cout<<temp->val<<" ";temp=temp->next;}
}

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int i=0,n1=0,n2=0,sum,ff;
        vector<int> a;
        vector<int> b;
        vector<int> c;
      
        while(l1!=NULL && l2!=NULL){
        a.push_back(l1->val);
        b.push_back(l2->val);
        l1=l1->next;
        l2=l2->next;
        }
        // a={2,4,3}
        // b={5,6,4}
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        // a={3,4,2}
        // b={4,6,5}
        while(i<a.size()){
            n1=n1*10+a[i];
            n2=n2*10+b[i];
            ++i;
        }
       sum=n1+n2;
      //sum=807

       while(sum>0){
       c.push_back(sum%10);
       sum=sum/10;
       }
        // c={7,0,8}
        reverse(c.begin(),c.end());
          //c={8,0,7}
        //in leet code cannot provide c[0]
        i=0;
        ListNode *k=new ListNode(c.at(i));++i;
        while(i<c.size()){
        insert_head(k,c.at(i));
        ++i;
        }
        
        return k;
    }

int main(){
ListNode *l1=new ListNode(2);
l1->next=new ListNode(4);
l1->next->next=new ListNode(3);
ListNode *l2=new ListNode(5);
l2->next=new ListNode(6);
l2->next->next=new ListNode(4);
ListNode *k=addTwoNumbers(l1,l2);
printnode(k);
}



/*

//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy=new ListNode();
        ListNode* temp=dummy;
        int carry=0;
        while(l1!=NULL || l2!=NULL || carry){
            int sum=0;
            if(l1!=NULL){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
                sum+=l2->val;
                l2=l2->next;
            }
            sum+=carry;
            carry=sum/10;
            ListNode* newnode=new ListNode(sum%10);
            temp->next=newnode;
            temp=temp->next;
        }
        return dummy->next;
    }
};


*/