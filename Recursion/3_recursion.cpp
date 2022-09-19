/*
#include<iostream>
using namespace std;
//  cheack a rrray  is sorted or not
bool  issort(int *arr,int size){
    //  base case  
    if (size==0 ||size==1)
    {
        return  true;
    }
    // 
    if (arr[0]>arr[1])
    {
        return  false;
    }
    //  reculsive call  
    else
    {
        bool ans = issort(arr+1,size-1);
        return  ans;
    }
    
}
int main(){
int  arr[5]={2,3,6,7,8};
int  size= 5;
bool  ans = issort(arr,size);
if(ans){
    cout<< "array  is sorted :"<<endl;
}
else
{
    cout<<"  your array is not sorted : ";
}

return 0;
}
*/
/*
//  sum of array  
#include<iostream>
using namespace std;
int getsum(int *arr,int n){
    //  base case 
    if (n==0)
    {
       return 0;
    }
     if (n==1)
    {
       return arr[0];
    }
    int remaining= getsum(arr+1,n-1);
  int sum  =arr[0]+remaining;
  return  sum;
    
}
int main(){
int  arr[5]={3,2,5,1,6};
int  n= 5;
  int ind  =getsum(arr,n);
  cout<<"  sum  is :"<<ind<<endl;
return 0;
}
*/
/*
//  linear search 
#include<iostream>
using namespace std;
void  print(int arr[],int n, int key  ){
    cout<<"  size is :"<<n<<endl;
    
    for (int  i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"  element is :"<<key<<endl; 
}  
bool linear(int arr[],int size,int key){
    //  base case 
    if (size==0)
    {
        return  false;
    }
    if (arr[0]==key)
    {
        return  true;
    }
    else
    {
        bool  remai= linear(arr+1,size-1, key);
         return  remai;
    }
    
   
}
int main(){
int arr[5]={3,5,1,2,6};
int size=5;
int key =1;
print (arr,size,key);
cout<<endl;
bool  ans= linear(arr,size,key);
 
if (ans)
{
   cout<< "your element is present "<<endl;
}
else
{
    cout<<"  your array  is not present "<<endl;
}
return 0;
}
*/
//  binary search  
#include<iostream>
using namespace std;
//  binary  search 
int binaryserch(int *arr,int s,int e,  int key ){
      //  base case  
  if (s>e)
  {
    return -1 ;
  }
  int mid = s+(e-s)/2;
  if (arr[mid]==key)
  {
    return true ;
  }
  if (arr[mid]<key)
  {
    return binaryserch(arr,mid+1,e,key);
  }
  else
  {
    return binaryserch(arr,s,mid-1,key);
  }
  
}
int main(){
    
 int num[5]={2,4,6,8,10};
 int size= 5;
 int key = 8;
    int index = binaryserch(num,0,5,key);
    cout<<"the element 8 is index : "<<index<<endl;
return 0;
}   
