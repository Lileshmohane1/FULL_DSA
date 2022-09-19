/*
//  find a factorial
#include<iostream>
using namespace std;
int fact(int n){
    // write a base case 
    if (n==0)
    {
        return 1;
    }
   // int choti = fact(n-1);
   // int badi = n*choti;
   // return badi;
   return n*fact(n-1);
}
int main(){
int n;
cin>>n;
int ans= fact(n);
cout<<" factorial is :"<<ans;
return 0;
}
*/
//  find  2 powre n
/*
#include<iostream>
using namespace std;
int power(int n){
    //  base case 
    if (n==0)
    {
       return 1;
    }
    //  recurence relation  
    int small= power(n-1);
    int big= 2*small;
    return big;
}
int main(){
int n;
cin>>n; 
int ans = power(n);
cout <<ans;
return 0;
}
*/
// print counting 
#include<iostream>
using namespace std;
int count(int n){
    if (n==0)
    {
        return 1;
    }
   count(n-1);
    cout<<n<<endl;
}
int main(){
int n;
cin>>n;
  count(n);

return 0;
}
