#include<iostream>
using namespace std;
// incapsulaion 
class human{
    public:
    int height;
    int weight;
    int age;
    public:
    int getage(){
        return this->age;
    } 
    void setweight(int w){
        this->weight =w;
    }
};
class male: public human{
    public:
    string color;
    void sleep(){
        cout<<" male sleep "<<endl; }
};
int main(){
male is_object;
cout<<is_object.age<<endl;
cout<<is_object.weight<<endl;
cout<<is_object.height<<endl;
cout<<is_object.color<<endl;
is_object.setweight(51);
cout<<is_object.weight<<endl;
is_object.sleep();
return 0;
}   