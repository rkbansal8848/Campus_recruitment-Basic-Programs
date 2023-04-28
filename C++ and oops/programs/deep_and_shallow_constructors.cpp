// note: know about the padding and the greedy alignment
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class hero
{

    char *name;
    char level;
    int health;
 
 //If any of the constructor is provided by the user then default and param. constructors provided by the compiler wil be destroyed.
    public:
    //default constructor
    hero(){ 
    cout<<"default constructor called\n";
    //name is allocated using the heap
    name=new char[100];
     }
    
    //parameterized constructor
    hero(int health):health(health){}
    //hero(int health){ this->health=health; }
     hero(int health,char level):health(health),level(level){}
    
    //copy constructor if pass by reference is not used then the infinite times copy constructor will be called.
   hero(hero &temp){
    this->health=temp.health;
    this->level=temp.level;

   }

    void print(){
        cout<<this->level<<endl;
        cout<<this->health<<endl;

    }


    void sethealth()
    {
        this->health=health;
        
    }
    
     int gethealth()
    {
        return health;
    }

    void setname(char name[]){
        strcpy(this->name,name);
    }



};

int main() {

    
    



return 0;
}