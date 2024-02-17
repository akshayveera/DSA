
// Insertion at any position

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

void inAtHead(node* &head, int data)
{
    // created a node
    node* temp = new node(data);

    // pointing current node to previous head
    temp->next = head;

    // updating head with current node;
    head = temp;    

}

void inAtTail(node* &tail, int data)
{
    // created a node
    node* temp = new node(data);

    // update tail->next to temp
    tail->next = temp;

    // update tail
    tail = temp;
}

void inAtPosition(node* &head, node* &tail, int data, int pos)
{
    if(pos==1)
    {
        inAtHead(head,data);
        return;
    }

    node* temp = head;

    for(int i=1; i<pos-1; i++)
    {
        temp = temp->next;
    }

    if(temp->next==NULL)
    {
        inAtTail(tail, data);
        return;
    }


    node* nodeToInsert = new node(data);

    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
    

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
    
    // insertion through head
    cout<<"insertion at head"<<endl<<endl;


    inAtHead(head, 37);
    print(head);

    inAtHead(head, 48);
    print(head);

    inAtHead(head, 83);
    print(head);

    cout<<"\nhead : "<<head->data<<endl;
    cout<<"tail : "<<tail->data<<endl<<endl;

    // insertion through tail
    cout<<"insertion at tail"<<endl<<endl;

    inAtTail(tail, 96);
    print(head);

    inAtTail(tail, 45);
    print(head);

    inAtTail(tail, 24);
    print(head);

    cout<<"\nhead : "<<head->data<<endl;
    cout<<"tail : "<<tail->data<<endl<<endl;

    // insertion through position
    cout<<"insertion through position"<<endl<<endl;

    // insertion in the middle
    inAtPosition(head, tail, 34567, 4);
    print(head);

    // insertion at head
    inAtPosition(head, tail, 34567, 1);
    print(head);

    // insertion at tail
    inAtPosition(head, tail, 34567, 9);
    print(head);

    cout<<"\nhead : "<<head->data<<endl;
    cout<<"tail : "<<tail->data<<endl<<endl;






}