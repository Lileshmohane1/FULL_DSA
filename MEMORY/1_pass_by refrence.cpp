#include<iostream>
using namespace std;
void  update2(int& n){
    n++;
}
// pass by value create

/*void  update1(int n){
    n++;
}
*/
int main(){
    /*
int i = 5;
// create a reference  variable 
int &j= i;
cout<<i<<endl;
i++;
cout<<i<<endl;
j++;
cout<<i<<endl;
cout<<j<<endl;
*/
int n= 5;
cout<<" before update :"<<n<<endl;
//update1(n);
update2(n);
cout<<"  after update :"<<n<<endl;
return 0;
}
