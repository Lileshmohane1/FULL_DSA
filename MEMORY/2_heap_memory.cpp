#include<iostream>
using namespace std;
int getsum(int *arr,int n){
    int sum =0;
    for (int  i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return  sum;
}
int main(){
    /*
char ch = 'q';
cout<< sizeof(ch) <<endl;
char*c =&ch;
cout<< sizeof(c)<<endl;
*/
int n;
cin>>n;
int* arr= new int[n]; // arr[i]=*(arr+i)
//  take a input in array  
 for (int  i = 0; i < n; i++)
 {
   cin>>arr[i];
 }
 int ans = getsum(arr,n);
 cout<<"  your ans is :"<<ans<<endl;
return 0;
}
