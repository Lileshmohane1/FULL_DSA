/*
//string use a recursen
#include<iostream>
using namespace std;
void  reverse(string& str,int i,int j ){
  //  cout<<"call  revers str :"<<str<<endl;
  //  base case 
  if(i>j)
  return;
  swap(str[i],str[j]);
  i++;
  j--;
  reverse(str,i,j);
}
int main(){
string  name="lilesh";
reverse(name,0,name.size()-1);
cout<<name;
return 0;
}
*/
// reverse  string using recursion 

