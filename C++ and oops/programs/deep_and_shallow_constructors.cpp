// note: know about the padding and the greedy alignment
// #include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

class hero
{
   public:
    char *name;
    char level;
    int health;
 
 //If any of the constructor is provided by the user then default and param. constructors provided by the compiler wil be destroyed.
    public: //default constructor
    hero(){ 
    cout<<"default constructor called\n";
    //name is allocated using the heap
    name=new char[100];
     }
    
    //parameterized constructor
    hero(int health):health(health){}
    //hero(int health){ this->health=health; }
     hero(int health,char level):health(health),level(level){}
    
    //default copy constructor does the shallow copy
    //copy constructor if pass by reference is not used then the infinite times copy constructor will be called.

//    hero(hero &temp){
//     this->health=temp.health;
//     this->level=temp.level;

//    }
   hero(hero & temp){
    char *ch=new char[strlen(temp.name)+1];
    strcpy(ch,temp.name);
    this->name=ch;
   }


 

    void print(){
        cout<<"[ ";
        cout<<this->name<<" , ";
        cout<<this->health<<" ]"<<endl;
     
    }

    void setname(char name[]){
        strcpy(this->name,name);
    }
    void sethealth(int health){
        this->health=health;   
    }
    



};

int main() {

    
    hero hero1;
    hero1.sethealth(12);
    hero1.setname("baby");
    hero1.print();

    hero1.sethealth(12);
    hero1.setname("baby");
    hero1.sethealth(99);
    

    hero hero2(hero1);
    hero2.sethealth(89);
    hero2.print();
   cout<<"\n";
   hero1.name[0]='y';
   hero1.health=20;

   hero1.print();
   hero2.print();
return 0;
}