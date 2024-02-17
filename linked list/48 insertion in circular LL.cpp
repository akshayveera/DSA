
// insertion in circular LL

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

    insertNode(tail, 5, 3);
    print(tail);

    insertNode(tail, 3, 5);
    print(tail);

    insertNode(tail, 5, 8);
    print(tail);

    insertNode(tail, 3, 9);
    print(tail);



}