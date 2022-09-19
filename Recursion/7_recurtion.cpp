//  NOW WE MAKE A  subset [1,2,3] ={[],[1],[2],[3],[1,2],[1,3],[2,3],[1,2,3]};
#include<iostream>
#include<vector>
using namespace std;
class solution
{
public:
   void  solve(vector<int>arr,vector<int>output,int index,vector<vector<int>>&ans){
    //basecase 
    if (index>=anr.size())
    {
        ans.push_back(output);
        return;
    }
    //  now execute a program
    solve(arr,output, index+1,ans);
    // include   
     int element = arr[index];
     output.push_back(element);
    solve(arr,output,index+1,ans);
   }
public:

}
int main(){
int arr[]={1,2,3};
int ind= 
return 0;
}
