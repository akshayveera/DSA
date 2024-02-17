

#include<bits/stdc++.h>

using namespace std;

class node
{
    public :
    int data;
    node* next;

    // constructor
    node(int n)
    {
        this->data = n;
        this->next = NULL;
    }

    // destructor
    ~node()
    {
        // store the value to print which value is deleted, if you don't want to know about element deleted skip this step
        int val = this->data;

        if(this->next!=NULL)  // this means next is pointing some node, it if is NULL it is not pointing any node
        {
            delete next;     // this delete the node at which next is pointing to
            // but next still stores the address of that node which is deleted
            // so we use below statement to point next to NULL
            this->next = NULL;
        }

        cout<<"the value deleted is : "<<this->data<<endl;
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
        cout<<temp->data<<" --> ";
        temp = temp->next;
    }

    cout<<temp->data<<endl;    
}

void delAtPosition(node* &head, int pos)
{
    if(pos==1)
    {
        // delete at head 

        // store first node in temp
        node* temp = head;

        // update head
        head = head->next;

        // delete temp(first node)
        temp->next = NULL;    // before deleting temp, making itts next as NULL
        delete temp;

    }
    else
    {
        // deletion at middle nodes and tail node can be done with same code

        // element at position
        node* curr = head;

        // element at position-1
        node* pre = NULL;

        int count = 1;

        while(count<pos)
        {
            pre = curr;
            curr = curr->next;
            count++;  
        }

        pre->next = curr->next;

        curr->next = NULL;
        delete curr;

    }
}

int main()
{
    node* head = NULL;

    // insertion 

    cout<<"insertion"<<endl<<endl;

    inAtHead(head, 13);
    print(head);

    inAtHead(head, 37);
    print(head);

    inAtHead(head, 48);
    print(head);

    inAtHead(head, 83);
    print(head);

    inAtHead(head, 99);
    print(head);

    // deletion
    cout<<"---------------------------------------------"<<endl;
    cout<<"deletion"<<endl<<endl;;

    // delete in the middle
    delAtPosition(head,3);
    print(head);

    // delete at tail
    delAtPosition(head,4);
    print(head);

    // delete at head
    delAtPosition(head,1);
    print(head);
    

    cout<<"\nhead : "<<head->data<<endl;


}
