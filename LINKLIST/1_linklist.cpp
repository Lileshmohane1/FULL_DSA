#include<iostream>
using namespace std;
// we make linklistNode type of class in which linklistNode is a node of link  list 
class linklistNode {
//then take a public to to  use outside of class 

    public:
    // take a parameters 
    //  then take a int type of data 
    int data;
    // linklistNode is a node of in our link  list to next point a next node 
    //i.e. store a  address  of next node 
    linklistNode*next;
  //  create a constructor in a constructor have a data value 
    linklistNode(int data){
    this ->data = data;
    this ->next =NULL;
    }
};
/*
void insertathead(Node* &head, int d){
    //  new node creat 
    Node* temp =new Node(d);
    temp ->next =head;
    head= temp;
}
void print (Node* &head ){
    Node* temp =head;
    while (temp!=NULL)
    {
       cout<<tem ->data<<" ";
       temp = temp ->next;
    }
}
*/
int main(){
    //  creat a object in heap  
linklistNode* node1= new linklistNode(10);
cout<<node1 -> data<<endl;
cout<<node1 -> next<<endl;
return 0;
}

