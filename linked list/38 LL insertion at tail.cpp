
// Insertion at tail

#include<bits/stdc++.h>

using namespace std;

class node
{
    public :
    int data;
    node* next;

    node(int n)
    {
        this->data = n;
        this->next = NULL;
    }
};

void inAtTail(node* &tail, int data)
{
    // created a node
    node* temp = new node(data);

    // update tail->next to temp
    tail->next = temp;

    // update tail
    tail = temp;
}

void print(node* &head)
{
    node* temp = head;

    while(temp->next!=NULL)
    {
        cout<<temp->data<<" --> ";
        temp = temp->next;
    }

    cout<<temp->data<<endl;    
}



int main()
{

    node* node_1 = new node(13);
    
    node* head = node_1;
    node* tail = node_1;

    print(head);

    inAtTail(tail, 37);
    print(head);

    inAtTail(tail, 48);
    print(head);

    inAtTail(tail, 83);
    print(head);

    

}
