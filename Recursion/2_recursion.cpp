/*
#include<iostream>
using namespace std;
void  home (int  source,int dis){
    cout<< "source"<<source<<"  distination"<<dis<<endl;
    //  baser case 
  if (source==dis)
  {
    cout<< " now i am in  home  "<<endl;
    return;
  }
  //  processing 
  source++;
  //  reculsive call 
   
  home(source,dis);
}
int main(){
int source =1;
int dis= 10;
home(source,dis);
return 0;
}
*/
//  fibonachi sereas 
//  0 1 1 2 3 5 8 13 21 
/*
#include<iostream>
using namespace std;
void fibo(int n){
  //  base case 

  if (n==0  )
  {
    return 0;
  }
  if ( n==1 )
  {
    return 1;
  }
  // processing 
  
 int ans =  fibo(n-1) + fibo(n-2);
 return ans;
 
}
int main(){
int n= 21;
//  colla a  function
 fibo(n);
return 0;
}
*/
/*
//  count a nth stairs
#include<iostream>
using namespace std;
int  stairs(int n){
    //  base case
    if(n<0)return  0;
    if (n==0)
    {
       return  1;
    }
    //  rr 
    int ans  = stairs(n-1)+stairs(n-2);
    return  ans;
}
int main(){
int n;
cin>>n;
//  colla a  function
 stairs(n);
return 0;
}
*/
//  say digits 
#include<iostream>
using namespace std;
void say(int n,string arr[]){
    //  base case  
    if (n==0)
    {
      return;
    }
    //  processing 
    int digit= n%10;
    n= n/10;
    say(n,arr);
    cout<<arr[digit]<<" ";
}
int main(){
string arr[7]={"zero","one","two","three","foure","five","six"};
int n;
cin>>n;
cout<<endl;
say(n,arr);
return 0;
}
