#include<iostream>
using namespace std;
class hero {
    private:
    int health;
    public:
    char *name;
    char level;
    void print(){
        cout<<endl;
        cout<<"name :"<<this->name<<endl;
    }
    hero(){
        cout<<"simple constructor call"<<endl;
        name =new char[100];
    }
    //we
    
 int sethelth(){
    return  health;
 }
 char setlevel(){
    return level ;
 } 
    void  setname(char name[]){
        strcpy(this->name , name);
    }
};
int main(){
hero hero1;
hero1.sethealth(12);
hero1.setlevel('D');
char name[7]="lilesh";
hero1.setname(name);
hero1.print();
return 0;
}
