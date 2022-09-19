#include<iostream>
// copy  constructor 
using namespace std;
class hero{
    public:
    int health;
    char level;
    //  simple default constructor 
      hero(){
        cout<<" default constructor call"<<endl;
    }
    // parameters constructor 
    hero(int health,char level){
        cout<<"this ->"<<this<<endl;
        this-> health = health;
        this-> level = level;
      
    }
    //  usr pass by  refrence 
    hero(hero& temp){
        cout<<"copy constructor call  : "<<endl;
        this->health=temp.health;
        this->level =temp.level;
    }
    void  print(){
        cout<<" health : "<<this->health<<endl;
        cout<<" level  : "<<this->level<<endl;
    }
};
int main(){
    // make a object 
hero lilesh(70,'c');
lilesh.print();
//  copy constructor  
//  in a v copy  lilesh value 
hero v(lilesh);
v.print();
return 0;
}
