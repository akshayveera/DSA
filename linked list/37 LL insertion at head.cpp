
// Insertion at head

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

void print(node* &head)
{
    node* temp = head;

    while(temp->next!=NULL)
    {
        cout<<temp->data<<" --> ";        // this loop prints till last second element(last element is not printed)
        temp = temp->next;        
    }
    cout<<temp->data<<endl;     // this prints the last element 
}



int main()
{

    node* head = NULL;
    node* tail = NULL;

    inAtHead(head, 13);
    print(head);

    inAtHead(head, 37);
    print(head);

    inAtHead(head, 48);
    print(head);

    inAtHead(head, 83);
    print(head);

}
