

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

        if(this->next != NULL)  // this means next is pointing some node, it if is NULL it is not pointing any node
        {
            delete next;      // this delete the node at which next is pointing to
            // but next still stores the address of that node which is deleted
            // so we use below statement to point next to NULL
            next = NULL;
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

void delNode(node* &head, int val)
{
    node* curr = head;
    node* pre = NULL;

    while(curr->data!=val)
    {
        pre = curr;
        curr = curr->next;        
    }

    if(curr==NULL)
    {
        cout<<"the value is not found in LL";
    }
    else if(curr==head)
    {
        node* temp = head;

        head = head->next;

        temp->next = NULL;
        delete temp;
    }
    else
    {
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
    delNode(head,48);
    print(head);

    // delete at tail
    delNode(head,13);
    print(head);

    // delete at head
    delNode(head,99);
    print(head);

    cout<<"\nhead : "<<head->data<<endl;


}
