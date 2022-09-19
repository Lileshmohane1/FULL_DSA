// constructors 
#include<iostream>
using namespace std;
class hero{
    public:
    // property
    int  health;
    char level;
    // create a constructor 
    hero(){
        cout<<"constructor call"<<endl;
    }
    // parameters constructor 
    hero(int health){
        cout<<"this ->"<<this<<endl;
       this-> health = health;
      
    }
};
int main(){
   
cout<<"start "<<endl;
// object creat staticaly 
hero lilesh(10);
cout<<"print a address :"<<&lilesh<<endl;
cout<<"health is :"<<lilesh.health<<endl;
cout<<"size of : "<<sizeof(lilesh)<<endl;
cout<<"end "<<endl;
//  dynamically
hero *h= new hero;
cout<<"size is "<<sizeof(h)<<endl;
hero  temp(22);

return 0;
}
