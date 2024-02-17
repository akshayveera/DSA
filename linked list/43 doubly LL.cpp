
// doubly linked list
// in doubly LL each node consists of three parts, ie,
// 1) address of previous node
// 2) data
// 3) address of next node

// at head prev points to NULL
// at tail next points to NULL


#include<bits/stdc++.h>

using namespace std;

class node
{
    public:
    int data;
    node* next;
    node* prev;

    //constructor
    node(int n)
    {
        this->data = n;
        this->next = NULL;
        this->prev = NULL;
    }
    
};


int main()
{
    // initialised head and tail
    node* head = NULL;
    node* tail = NULL;

    // creation of nodes
    node* node_1 = new node(65);
    node* node_2 = new node(84);
    node* node_3 = new node(24);

    // creating doubly LL using 3 nodes
    head = node_1;
    node_1->next = node_2;

    node_2->prev = node_1;
    node_2->next = node_3;

    node_3->prev = node_2;

    tail = node_3;
    
    // printing doubly LL
    
    node* temp = head;

    while(temp->next!=NULL)
    {
        cout<<temp->data<<" <-> ";      // this loop prints till last second element(last element is not printed)
        temp = temp->next;        
    }
    cout<<temp->data<<endl;   // this prints last element

    cout<<"head : "<<head->data<<endl;
    cout<<"tail : "<<tail->data<<endl;

    
}