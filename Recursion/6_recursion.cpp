//  quick  sort 
#include<iostream>
using namespace std;
int  partition(int arr[],int s,int e){
    int pivet =arr[s];
    int cnt=0;
    for (int  i = s+1; i <e; i++)
    {
        if (arr[i]<=pivet)
        {
         cnt++;
        }
        
    }
    //  place pivet at right index 
    int pvtindex= s+cnt;
    swap(arr[pvtindex],arr[s]);
    //  now we thake a left and right part 
    int i = s , j = e;
  while (i<pvtindex&&j>pvtindex)
  {
   while (arr[i]<pivet)
   {
    i++;
   }
   while (arr[j]>pivet)
   {
    j--;
   }
   if (i<pvtindex&&j>pvtindex)
   {
    swap(arr[i++],arr[j--]);
   }
   
  }
  return  pvtindex;
}
void  quicq(int arr[],int s,int e){
   //  base case  
   if (s>=e)
   {
    return;
   }
   //  reculsive call  
   // partition
  int p= partition(arr,s,e);
   quicq(arr,s,p-1);
    quicq(arr,p+1,e);
}
int main(){
int  arr[7]={3,4,1,2,6,8,9};
int n= 7;
//  call  function 
 quicq(arr,0,n-1);
for (int  i = 0; i <n; i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}
