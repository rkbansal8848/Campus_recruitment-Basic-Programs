#include<bits/stdc++.h>
using namespace std;
 
class hero
{
   public:
    char *name;
    char level;
    int health;

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
    ~hero(){ cout<<"destructor of the world\n";}
    

};


int main(){
//distructor acutomatically called static object 
//but for the dynamically allocated object we need to 
//call destructor overselves

hero a;
hero *b=new hero();
//manual destructor call
delete b;

    return 0;
}