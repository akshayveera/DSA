
// insertion in doubly LL

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

void inAtHead(node* &head, node* &tail, int data)
{
    node* temp = new node(data);

    
    if(head==NULL)
    {
        // case of empty list
        tail = temp;
        head = temp;
    }
    else
    {
        // case of non-empty list
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void inAtTail(node* &head, node* &tail, int data)
{
    node* temp = new node(data);

    if(tail==NULL)
    {
        // case of empty list
        head = temp;
        tail = temp;
    }
    else
    {
        // case of non-empty list
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void inAtPosition(node* &head, node* &tail, int data, int pos)
{
    if(pos==1)
    {
        inAtHead(head, tail, data);
        return;
    }

    node* temp = head;

    for(int i=1; i<pos-1; i++)
    {
        temp = temp->next;
    }

    if(temp->next==NULL)
    {
        inAtTail(head, tail, data);
        return;
    }

    node* nodeToInsert = new node(data);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;       
}

void print(node* &head)
{
    node* temp = head;

    while(temp->next!=NULL)
    {
        cout<<temp->data<<" <-> ";
        temp = temp->next;
    }
    cout<<temp->data<<endl;

}

int length(node* &head)
{
    node* temp = head;

    int count = 0;

    while(temp!=NULL)
    {
        temp = temp->next;
        count++;
    }

    return count;
}

int main()
{
    node* head = NULL;
    node* tail = NULL;

    cout<<"\ninsertion at head"<<endl<<endl;

    inAtHead(head,tail,23);
    print(head);

    inAtHead(head,tail,67);
    print(head);

    cout<<"\nhead : "<<head->data<<endl;
    cout<<"tail : "<<tail->data<<endl;

    cout<<"\ninsertion at tail"<<endl<<endl;

    inAtTail(head,tail,34);
    print(head);

    inAtTail(head,tail,43);
    print(head);

    cout<<"\nhead : "<<head->data<<endl;
    cout<<"tail : "<<tail->data<<endl;

    cout<<"\ninsertion at position"<<endl<<endl;

    // insertion in middle
    inAtPosition(head, tail, 4568, 3);
    print(head);

    // insertion at head   
    inAtPosition(head, tail, 1111, 1);
    print(head);

    // inseertion at tail
    inAtPosition(head, tail, 9999, length(head)+1);
    print(head);


    cout<<"\nhead : "<<head->data<<endl;
    cout<<"tail : "<<tail->data<<endl;



    

}