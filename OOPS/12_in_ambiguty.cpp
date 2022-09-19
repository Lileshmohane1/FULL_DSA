#include<iostream>
using namespace std;
class a{
    public:
    void fun(){
        cout<<"i am a :"<<endl;
    }
};
class b{
    public:
    void fun(){
        cout<<"i am b :"<<endl;
    }
};
class c:public a,public b{

};
int main(){
c obj;
//  obj.fun();
obj.a::fun();
obj.b::fun();
return 0;
}
