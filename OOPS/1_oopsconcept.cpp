//hw  padding greedy allignment 
#include<iostream>
//  we can use two type of class 
//first
// create a class in diffrent file and in  file class and use in this file
//#include"hero.cpp"
using namespace std;
//second
class hero{
 // property
 //  acess  modifire public private and protected 
 private:
 int helth;
 public:
 char level;
 // we can use geter and seter to use outeside of a class 
 //  get mins get a value 
 int gethelth(){
    return  helth;
 }
 char getlevel(){
    return level ;
 }
 //  set mins set a value 
 void sethelth(int h){
    helth= h;
 }
 void setlevel(char ch){
    level =ch;
 }
};

int main(){
    // creat a object 
 hero lilesh;
 //take a output 
 // lilesh.helth=70;
 cout<<"get helth is :"<<lilesh.gethelth()<<endl;
 // use set 
 lilesh.sethelth(70);
 lilesh.level='A';
 cout<<"helth is :"<<lilesh.gethelth()<<endl;
 //cout<<"helth is :"<<lilesh.helth<<endl;
 cout<<"level is : "<<lilesh.level<<endl;
 //cout<<"size :"<<sizeof(h1);
return 0;
}
