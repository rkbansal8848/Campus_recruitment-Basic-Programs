// note: know about the padding and the greedy alignment
#include<iostream>
using namespace std;

class hero
{

    char *name;
    char level;
    int health;
 
 //If any of the constructor is provided by the user then default and param. constructors provided by the compiler wil be destroyed.
    public:
    //default constructor
    hero(){ cout<<"default constructor called\n"; }
    
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


    // void sethealth()
    // {
    //     this->health=health;
        
    // }
    
    //  int gethealth()
    // {
    //     return health;
    // }





};

int main() {

     hero suri(23,'h');
    
    suri.print();
   
   //default copy constructor does shallow copy [[Deep and Shallow Copy]]
    hero bitu(suri);
    bitu.print();
    





return 0;
}