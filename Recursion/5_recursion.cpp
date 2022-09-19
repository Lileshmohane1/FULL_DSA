#include<iostream>
using namespace std;
void murge(int* arr,int s,int e){

int mid =s+(e-s)/2;
//  we take a two  length  of array 
int len1= mid-s+1;
int len2= e-mid;
//  we make a two new array  
int *first = new int[len1];
int *second= new int[len2];
//  now we sort a array 
// left part 
int mainarr = s;
for (int  i = 0; i < len1; i++)
{
   first[i++]= arr[mainarr++];
}
//  right part
  mainarr =mid+1;
for (int  i = mid; i < len2; i++)
{
   second[i++]= arr[mainarr++];
}
 // now murge both array 
 int index1=0;
 int index2=0;
   mainarr=s;
 while (index1<len1 && index2<len2)
 {
    if (first[index1]<second[index2])
    {
        arr[mainarr++]=first[index1++];
    }
    else
    {
        arr[mainarr++]=second[index2++];
    }
    
 }
 while (index1<len1)
 {
     arr[mainarr++]==first[index1++];
 }
 while (index2<len2)
 {
   arr[mainarr++]==second[index2++];
 }
 
}
void  murgesort(int*arr ,int s,int e){
    //  base case 
    if (s>e)
    {
      return;
    } 
   int mid =s+(e-s)/2;
   //  cecrsiveluy find th at in  whih  i find 
   //  right part 
   murgesort(arr,mid+1,e);
   murgesort(arr,mid,s);
   murge(arr ,s,e);
}
int main(){
int arr[6]={2,5,3,1,7,8};
int n = 6;
murgesort(arr,0,n-1);
for (int  i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}cout<<endl;

return 0;
}
