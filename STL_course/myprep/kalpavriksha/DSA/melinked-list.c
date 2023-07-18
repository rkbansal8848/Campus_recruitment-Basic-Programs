#include<stdio.h>
#include<conio.h>
#define max 100

typedef struct Node {
char a[max];
struct Node* next;
}node;

void cnode(node* root){
node * temp=(node*)malloc(sizeof(node));
printf("enter the name: ");
scanf("\n");
scanf("%[^\n]",temp->a);
temp->next =NULL;

if(root->next==NULL){
    root->next=temp;
    }
else {
        node * current=root->next;
        while(current->next!=NULL){
            current=current->next;
        }
     current->next=temp;
    }
}

void pnode(node* root){
    node * temp=root;
    printf("Names of the students:\n");
    while(temp!=NULL){
        printf("%s\n",temp->a);
        temp=temp->next;
    }
}


int main() {
int ch;
node* root=(node*)malloc(sizeof(node));
root->next=NULL;
printf("Enter the choice 1 to create node,2 to display,3 to break ");
scanf("%d",&ch);

while(ch!=3){

if(ch==1){
    
 cnode(root);

 }
else if(ch==2){
 pnode(root->next);
 }
else{
    printf("\nEnter the valid choice\n");
 }
printf("\nEnter the choice 1 to create node,2 to display,3 to break ");
scanf("%d",&ch);
}


return 0;
}