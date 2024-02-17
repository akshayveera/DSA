
// circular linked list

#include<bits/stdc++.h>

using namespace std;

class node
{
    public:
    int data;
    node* next;

    //constructor
    node(int n)
    {
        this->data = n;
        this->next = NULL;
    }
};

void print(node* &tail)
{
    // there is no head and tail in this because, there is no first and last in circular structure
    // we just consider one node as tail for refernce beacause if we want head we can call head->next
    // we dont take head as refernce because, if we want tail from head, we need to traverse the whole linked list
    // beacuse there we cant directly acces tail from head as head->prev as this is singly circular linked list
    node* temp = tail->next;

    // we use do-while loop to run atleast one time 
    // other wise the first element will not get printed as it is pointing to tail 
    do
    {
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }while(temp!=tail);
    cout<<temp->data<<endl;
}

int main()
{
    // create tail and pointed to null
    node* tail = NULL;

    // create three nodes
    node* node1 = new node(23);
    node* node2 = new node(61);
    node* node3 = new node(78);

    // point tail to any node 
    tail = node3;

    // point one node to next and last node to first(this forms a cirular structure)
    node1->next = node2;
    node2->next = node3;
    node3->next = node1;

    print(tail);  
    
}