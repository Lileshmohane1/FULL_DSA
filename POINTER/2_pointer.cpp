#include<iostream>
using namespace std;
//pointer int value
int print(int *p){
    cout<<p<<endl;
      cout<<*p<<endl;
}
int update(int *p){
 //   p= p+1;
 //   cout<<" inside a loop :"<<p<<endl;
     *p= *p+1;

}
int getsum(int *arr,int n){
    int sum = 0;
    for (int  i = 0; i <n; i++)
    {
       sum+=arr[i];
    }
    return sum;
}
int main(){
/*
int arr[5]={11,32,43,54,65};

cout<<"address   of   array    is  :"<<arr<<endl;
cout<<"address   of   array    is  :"<<&arr<<endl;
cout<<"address   of   array    is  :"<<arr[0]<<endl;
cout<<"the value of   array    is  :"<<*arr<<endl;
cout<<"the value of   array    is  :"<<*arr+1<<endl;
cout<<"the value of   array    is  :"<<*(arr+1)<<endl;
cout<<"the value of   array    is  :"<<arr[2]<<endl;

int i =3;
cout<<i[arr]<<endl;
*/

/*
int temp[10];
cout<<sizeof(temp)<<endl;
cout<<sizeof(&temp)<<endl;
int *ptr =&temp[0];
cout<<sizeof(ptr)<<endl;
cout<<sizeof(*ptr)<<endl;
cout<<sizeof(&ptr)<<endl;
*/
/*
int arr[5];
int *ptr = &arr[0];
cout<<ptr<<endl;
ptr =ptr+1;
cout<<ptr<<endl;
*/
//  now start with  a char array
/*
char ch[6] = "liles";
cout<<ch<<endl;
char *c= &ch[0];
cout<<c<<endl;
*/
//  use a function  

/*
int val= 5;
int *p=&val;
//print(p);
cout<<"before update a value :"<<*p<<endl;
update(p);
cout<<"after update a value  :"<<*p<<endl;
*/
int arr[5]={1,2,3,4,5};
int ind =getsum(arr,5);
cout<<"sum is: "<<ind;
return 0;
}
