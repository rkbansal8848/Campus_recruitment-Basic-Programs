#include<iostream>
#define  max 100
using namespace std;

int A[max];
int Top=-1;

void push(int element ){
if(Top==max-1){ cout<<"Overflow\n";}
else
{
Top++;
A[Top]=element;

}
}

void pop(){
    if(Top==-1){ cout<<"Underflow\n";}
    else{
        int Temp=A[Top];
        cout<<"Deleted element : "<<Temp;
        Top--;
    }
}

    void display(){
        int printpoint=Top;
        while(printpoint!=-1){
            cout<<A[printpoint--]<<endl;
        }
    }

int main() {
    cout<<"Started\n";
    cout<<"Select 1:Insert/PUSH,2:Delete/POP,3:Display,4:STOP\n";
    cout<<"Choice is: ";
    int c;
    cin>>c;
    while(c!=4){
         if(c==1){
        int el;
    cout<<"enter the element to push\n";
    cin>>el;
    push(el);
    cout<<"Done\n";
    }
    else if(c==2){
        pop();
        cout<<" Done\n";
    }
    else if(c==3){
    display();
    cout<<"Done\n";
    }
    
    else 
    cout<<"please enter a valid choice\n";

    cout<<"_____________________________________________________________________________________________________\n";
      cout<<"Select 1:Insert/PUSH,2:Delete/POP,3:Display,4:STOP\n";
       cout<<"Choice is: ";
      cin>>c;
    }
   

return 0;
}