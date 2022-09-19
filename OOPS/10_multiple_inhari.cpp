#include<iostream>
using namespace std;
class animal{
    public:
    int age;
    int weight;
    public:
    void bark(){
        cout<<" bark "<<endl;
    }
};
class human{
    public:
    int age;
    int weight;
    public:
    void speak(){
      cout<<"speak"<<endl;
    }
};
class hybrid:public animal,public human{

};
int main(){
hybrid is_object;
is_object.bark();
is_object.speak();
return 0;
}
