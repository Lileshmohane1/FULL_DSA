
//  inserte at  start or head 
/*
#include<iostream>
using namespace std;
//  create a class
class Node{
    // parameters 
    public:
    int data;
    Node*next;
   //  constructor 
   Node(int data ){
    this ->data=data;
    this ->next=NULL;
   }
};
//  now create a function  
//  then we store  a head 
//  we  take refrance  value i.e i try to  change in  my origal  link  list when i take a pass by  value so it copy create 
void insertathead(Node* &head, int d){
    // when  any  type of data come so  we create  new node temp  type 
    //  temp nis our new node 
    Node* temp = new Node(d);
    //  now temp next value is equal to head of node value 
    temp ->next =head;

    head= temp;
}
 //  now create a print value 
void print (Node* &head ){
    Node* temp =head;
    while (temp!=NULL)
    {
       cout<<temp ->data<<" ";
       temp = temp ->next;
    }
    cout<<endl;
}
int main(){
//  create a object in new node  to store in heap  
Node* node1= new  Node(10);
//  now print a value 
//cout<<node1->data<<endl;
//cout<<node1->next<<endl;
// head pointer to  node1 
Node*  head= node1;
Node*  tail= node1;
print(head);
insertathead(head,12);
print(head);
insertathead(head,20);
print(head);
return 0;
}

*/
// insert at last or tail
/*
#include<iostream>
using namespace std;
//  create a class
class Node{
    // parameters 
    public:
    int data;
    Node*next;
   //  constructor 
   Node(int data ){
    this ->data=data;
    this ->next=NULL;
   }
};
//  now  new node value point a last null  tail 
void insertattail(Node* &tail,int d){
     Node* temp = new Node(d);
     tail ->next=temp;
     tail= temp;//tail ->next;

}
 //  now create a print value 
void print (Node* &head ){
    Node* temp =head;
    while (temp!=NULL)
    {
       cout<<temp ->data<<" ";
       temp = temp ->next;
    }
    cout<<endl;
}
int main(){
//  create a object in new node  to store in heap  
Node* node1= new  Node(10);
//  now print a value 
//cout<<node1->data<<endl;
//cout<<node1->next<<endl;
// head pointer to  node1 
Node*  head= node1;
Node*  tail= node1;
print(head);
insertattail(tail,12);
print(head);
insertattail(tail,20);
print(head);
return 0;
}
*/
// isert at mid of node 
#include<iostream>
using namespace std;
//  create a class
class Node{
    // parameters 
    public:
    int data;
    Node*next;
   //  constructor 
   Node(int data ){
    this ->data=data;
    this ->next=NULL;
   }
};
void insertattail(Node* &tail,int d){
     Node* temp = new Node(d);
     tail ->next=temp;
     tail= temp;//tail ->next;

}
void insertathead(Node* &head, int d){
    // when  any  type of data come so  we create  new node temp  type 
    //  temp nis our new node 
    Node* temp = new Node(d);
    //  now temp next value is equal to head of node value 
    temp ->next =head;

    head= temp;
}
 //  now create a print value 
 void insertatpogition(Node* &tail,Node* &head ,int position ,int d ){
    if (position==1)
    {
        insertathead(head,d);
        return;
    }
    
    Node*temp= head;
    int cnt= 1;
while (cnt<position-1)
{
    temp =temp ->next;
    cnt++;
}
//insert at last 
if (temp ->next==NULL)
{
    insertattail(tail,d);
  return;
}

Node* nodetoinsert= new Node(d);
nodetoinsert ->next =temp->next;
temp->next= nodetoinsert;

 }
void print (Node* &head ){
    Node* temp =head;
    while (temp!=NULL)
    {
       cout<<temp ->data<<" ";
       temp = temp ->next;
    }
    cout<<endl;
}
int main(){
//  create a object in new node  to store in heap  
Node* node1= new  Node(10);

Node*  head= node1;
Node*  tail= node1;
print(head);
 insertattail(tail,12);
print(head);
 insertattail(tail,20);
print(head);
insertatpogition(tail,head,1,15);
print(head);
return 0;
}