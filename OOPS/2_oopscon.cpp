//hw  padding greedy allignment 
#include<iostream>
using namespace std;
class hero{
 //  property
 public:
 int helth;
 char level;
 
 int gethelth(){
    return  helth;
 }
 char getlevel(){
    return level ;
 }
 void sethelth(int h){
    helth= h;
 }
 void setlevel(char ch){
    level =ch;
 }
};

int main(){
// static 
hero  a;
a.sethelth(20);
a.setlevel('b');
cout<<"level :"<<a.level<<endl;
cout<<"helth :"<<a.helth<<endl;
//  dynamically
hero *b = new hero ;
cout<<"level :"<<(*b).level<<endl;
cout<<"helth :"<<(*b).helth<<endl;
// also written like that 
b->helth=70;
b->level='a';
 cout<<"level :"<<b->level<<endl;
cout<<"helth :"<<b->helth<<endl;
return 0;
}

