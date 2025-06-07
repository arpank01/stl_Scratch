#include <iostream>
using namespace std;
typedef struct node{
    int val;
    node* link;
}node;

//pointing from xth to x+1 th node;
node* traverse(node*lead,int x){
    node*temp=lead;
    for(int i=1;i<=x;i++){
        temp=temp->link;
    }
    
    return temp;
}
void insertnth(node* lead,int x, int val){
   //create a new node with value val
    node*nnode=new node;
    nnode->val=val;
    //new node should point to the x+1 th node
    nnode->link=traverse(lead,x);
    //the link of the x th node should point to the new node 
    traverse(lead,x-1)->link=nnode;
    
    
}
int main() {
   node* head=new node;
   head->link=new node;
   node* head1=head->link;
   head1->link=nullptr;
   insertnth(head,1,50);
   insertnth(head,1,30);
   insertnth(head,2,60);
   
   node*copy;
   copy=head;
   while(copy!=nullptr){
       cout<<copy->val<<endl;
       copy=copy->link;
   }

    return 0;
}
