#include<iostream>
// pass by value
using namespace std;
//  now start with  double pointer
void  update(int **ptr){
    //  any  type of update  no 
    // ptr=ptr+1;
     //  update a pointer value 
   //  *ptr=*ptr+1;
     **ptr=**ptr+1;
}
int main(){

int i =5;

int *ptr= &i;
int **ptr2=&ptr;

cout<<" print a address:" <<endl;
/*
cout<<&i<<endl;
cout<<ptr<<endl;
cout<<*ptr2<<endl;
cout<<"print a number  :"<<endl;
cout<<i<<endl;
cout<<*ptr<<endl;
cout<<**ptr2<<endl;
*/
cout<<"before"<<i<<endl;
cout<<"before"<<*ptr<<endl;
cout<<"before"<<**ptr2<<endl;
update(ptr2);
cout<<"after"<<i<<endl;
cout<<"after"<<*ptr<<endl;
cout<<"after"<<**ptr2<<endl;
}
