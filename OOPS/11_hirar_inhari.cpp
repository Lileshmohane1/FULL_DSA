#include<iostream>
using namespace std;
class a{
    public:
    void fun1(){
        cout<<"inside fun 1"<<endl;
    }
};
class b: public a{
    public:
    void fun2(){
        cout<<"inside fun 2 :"<<endl;
    }
};
class c:public a{
    public:
    void fun3(){
        cout<<"inside fun 3 :"<<endl;
    }
};
int main(){
a obj1;
obj1.fun1();
b obj2;
obj2.fun1();
obj2.fun2();

c obj3;
obj3.fun1();
obj3.fun3();
return 0;
}
