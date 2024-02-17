

// deletion using value in circular LL

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

    // destructor
    ~node()
    {
        int val = this->data;

        if(this->next!=NULL)
        {
            delete this->next;
            this->next = NULL;
        }
        
        cout<<"the element deleted is : "<<val<<endl;
    }
};

void insertNode(node* &tail,int num, int ele)
{
    node* newNode = new node(ele);

    if(tail==NULL)
    {
        // empty list

        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // non-empty list
        // assuming num is present in linkedlist

        node* curr = tail;

        while(curr->data != num)
        {
            curr = curr->next;
        }

        newNode->next = curr->next;
        curr->next = newNode; 


    }
}

void deleteNode(node* &tail, int val)
{
    // empty list 
    if(tail==NULL)
    {
        cout<<"the list is empty"<<endl;
        return;
    }

    node* prev = tail;
    node* curr = prev->next;

    while(curr->data!=val)
    {
        prev = curr;
        curr = curr->next;
    }

    // now current is pointing to the node which is to be deleted


    // list with single node
    if(curr->next == curr)
    {
        curr->next = NULL;
        tail = NULL;

        delete curr;
        curr = NULL;
        return;           
    }

    // list with more than one node
    prev->next = curr->next;
    curr->next = NULL;
    if(tail == curr)
    {
        tail = prev;
    }

    delete curr;
    curr = NULL;

}

void print(node* &tail)
{
    if(tail == NULL)
    {
        cout<<"list is empty"<<endl;
    }

    node* temp = tail->next;

    // this deals with single element circular LL
    if(temp==tail)
    {
        cout<<temp->data<<endl;
        return;
    }

    do
    {
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    while(temp!=tail);
    cout<<temp->data<<endl;
}

// love babbars method
// void print(node* tail)
// {
//     node* temp = tail;
//     do
//     {
//         cout<<tail->data<<" ";
//         tail = tail->next;
//     } while (tail!=temp);
//     cout<<endl;    
// }

int main()
{
    node* tail = NULL;

    cout<<"\ninsertion\n\n";

    insertNode(tail, 5, 3);
    print(tail);

    insertNode(tail, 3, 5);
    print(tail);

    insertNode(tail, 5, 8);
    print(tail);

    insertNode(tail, 3, 9);
    print(tail);

    insertNode(tail, 9, 12);
    print(tail);

    insertNode(tail, 8, 24);
    print(tail);


    cout<<"\ndeletion\n\n";

    deleteNode(tail, 8);
    print(tail);
    
    deleteNode(tail, 9);
    print(tail);

    deleteNode(tail, 3);
    print(tail);
}