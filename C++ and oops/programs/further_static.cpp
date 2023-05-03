#include<bits/stdc++.h>
using namespace std;
class hero
{
   public:
    char *name;
    char level;
    int health;
    static int timetocomplete;
   public:
    hero(){ 
    // cout<<"default constructor called\n";
    name=new char[100];
     }
    
     hero(int health,char level):health(health),level(level){}
    
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

    //
    ~hero(){ 
        //cout<<"destructor of the world\n";
    
    }

};
//scope resolution operator
int hero::timetocomplete=6;
int main(){
    //static data member can be directly accessed as it doesn't belong to the object it only belong to the class;

// In C++, a static member of a class is a member that belongs to the class itself rather than to individual instances of the class. This means that there is only one copy of the static member shared by all objects of the class.
//advantages
//1. memory efficient
//2. global availability

// cout<<hero::timetocomplete<<endl;
hero b;
hero a;
b.timetocomplete=9;
cout<<b.timetocomplete<<endl;
cout<<a.timetocomplete<<endl;



    return 0;
}