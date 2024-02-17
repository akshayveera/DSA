
// deleting a node through pointer, deletes the node

#include<iostream>

using namespace std;

class node
{
    public:
    int data;
    node* next;

    node(int n)
    {
        this->data = n;
        this->next = NULL;
    }
};

int main()
{
    // I created a node named n1
    node* node1= new node(10);

    cout<<node1->data<<endl;
    cout<<node1->next<<endl;

    // I created a pointer of type node named temp
    node* temp = node1;

    cout<<temp->data<<endl;
    cout<<temp->next<<endl;

    cout<<"-----------------------------------------"<<endl;

    // here I only deleted the temp
    delete temp;

    // but n1 also gets deleted both are pointing to same object
    
    cout<<temp->data<<endl;
    cout<<temp->next<<endl;

    cout<<node1->data<<endl;
    cout<<node1->next<<endl;

    // If we print node1 and temp, both are giving garbage value as output
    // because both values are pointing to the same object and the object is deleted
    // we may use any name of it to delete, the object is deleted
    // that means object for all the names that it has will bw deleted



}