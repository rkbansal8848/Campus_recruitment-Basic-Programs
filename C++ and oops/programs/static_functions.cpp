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

   static int show(){
    // cout<<"i am static function"<<endl;
    return timetocomplete;
   }

    
    ~hero(){ 
        //cout<<"destructor of the world\n";
    
    }

};

int hero::timetocomplete=6;

int main() {
    //static funtion 
    //no this keyword
    //no need to call by creating the object
    //note it can only access the static members
    

    cout<<hero::show();



return 0;
}