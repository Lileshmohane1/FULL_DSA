#include<iostream>
using namespace std;
//  function overloading 
class a{
    public:
    void sayhellow(){
        cout<<"hellow how are you :"<<endl;
    }
      ///   we use se type of multiple function  so we change a input aurgument 
      void sayhellow( string name){
        cout<<"hellow  :"<<name<<endl;
    }
};
int main(){
    //  we make a objec name of obj  
 a obj;
 obj.sayhellow();
return 0;
}
