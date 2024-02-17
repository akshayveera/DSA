
// deletion in doubly LL using position

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

    // destructor
    ~node()
    {
        int val = this->data;

        if(this->next!=NULL)
        {
            delete this->next;
            this->next = NULL;
        }

        cout<<"the value deleted is : "<<val<<endl;
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

void deleteNode(node* &head, int val)
{
    if(head->data == val)
    {
        node* temp = head;

        head = head->next;
        head->prev = NULL;
        temp->next = NULL;

        delete temp;
        temp = NULL;

    }
    else
    {
        node* curr = head;
        node* before = NULL;

        while(curr->data!=val)
        {
            curr = curr->next;
        }
        before = curr->prev;

        before->next = curr->next;
        if(curr->next!=NULL)
        {
            curr->next->prev = before;
        }
        curr->next = NULL;
        curr->prev = NULL;

        delete curr;
        curr = NULL;

    }
    
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

void printRev(node* &tail)
{
    node* temp = tail;

    while(temp->prev!=NULL)
    {
        cout<<temp->data<<" <-> ";
        temp = temp->prev;
    }
    cout<<temp->data<<endl;

}

int length(node* head)
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

    cout<<"\ninsertion\n"<<endl;

    inAtPosition(head, tail, 12, 1);
    print(head);
    // printRev(tail);
    inAtPosition(head, tail, 61, 2);
    print(head);
    // printRev(tail);
    inAtPosition(head, tail, 91, 3);
    print(head);
    // printRev(tail);
    inAtPosition(head, tail, 36, 4);
    print(head);
    // printRev(tail);
    inAtPosition(head, tail, 56, 5);
    print(head);
    // printRev(tail);

    cout<<"\nhead : "<<head->data<<endl;
    cout<<"tail : "<<tail->data<<endl;

    cout<<"\ndeletion\n"<<endl;

    // delete in middle
    deleteNode(head, 91);
    print(head);

    // delete at head
    deleteNode(head, 12);
    print(head);

    // delete at tail
    deleteNode(head, 56);
    print(head);







    

}