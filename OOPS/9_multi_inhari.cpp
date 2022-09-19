#include<iostream>
using namespace std;
class animal{
    public:
    int age;
    int weight;
    public:
    void speak(){
        cout<<" speaking "<<endl;
    }
};
class dog: public animal{

};
class germanshaf: public dog{

};

int main(){
 germanshaf g;
g.speak();

return 0;
}
