#include<stdio.h>
#include<conio.h>
#define max 100
struct Node{
    char a[max];
    struct Node* next;
};
typedef struct Node node;

void create_node(node* root){
    node* temp = (node*)malloc(sizeof(struct Node));
    printf("Enter name: ");
    // scanf("%s", temp->a);
    scanf("\n");
    scanf("%[^\n]%*c", temp->a);
    temp->next = NULL;

    if (root->next == NULL) { // if the list is empty
        root->next = temp;
    } else {
        node* current = root->next;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = temp;
    }
}

void printnode(node * root){
 node * temp=root;
 printf("Students names are:\n");
 while(temp!=NULL){
    printf("%s\n",temp->a);
    temp=temp->next;
 }
}

int main() {
int ch;
char a[max];
node*root = (node*)malloc(sizeof(struct Node));
root->next=NULL;
printf("Enter the choice 1 to create node,2 to display,3 to break ");
scanf("%d",&ch);

while(ch!=3){

if(ch==1){
    
 create_node(root);

 }
else if(ch==2){
 printnode(root->next);
 }
else{
    printf("\nEnter the valid choice\n");
 }
printf("\nEnter the choice 1 to create node,2 to display,3 to break ");
scanf("%d",&ch);
}

return 0;
}