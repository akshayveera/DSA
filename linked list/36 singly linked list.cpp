
// singly linked list

#include<iostream>

using namespace std;

class node
{
    // here we are creating nodes
    // nodes are nothing but objects of type node(class node)

    // so second part of node, ie, linking part is pointing to a next object of type node
    // so, the type of pointer should be of class node

    public:
    int data;
    // pointer is of type "node" 
    node* next;

    // constructor
    node(int n)
    {
        this->data = n;
        this->next = NULL;
    }

};

void inAtHead(node* &head, int n)
{
    // create a node to store number
    node* temp = new node(n);

    // constructor inserts the value of n in data and null in next

    
    // point the current node to previous node
    temp->next = head;
    //point head to current node
    head = temp;

}

void inAtTail(node* &tail, int n)
{
    node* temp = new node(n);

    // pointing previous element to current element
    tail->next = temp;
    // updating the tail
    tail = temp;
}

void inAtMiddle(node* &head, int position, int n)
{
    node* temp = head;

    // traverse till pointing to one element before position
    for(int i=1; i<position-1; i++)
    {
        temp = temp->next;
    }

    // create a node to be insertes
    node* ele = new node(n);

    // point the new node to next node
    ele->next = temp->next;

    // now point the current node to new node
    temp->next = ele;

}

void inAtPosition(node* &head, node* &tail, int position, int n)
{
    if(position == 1)
    {
        inAtHead(head, n);
        return;
    }

    node* temp = head;

    for(int i=1; i<position-1; i++)
    {
        temp = temp->next;
    }

    if(temp->next == NULL)
    {
        inAtTail(tail, n);
        return;
    }

    node* nodeToInsert = new node(n);

    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;

    
}


// void print(node* head)
// {
//     while(head!=NULL)
//     {
//         std::cout<<head->data<<" ";
//         head = head->next;
//     }
//     std::cout<<endl;
// }

void print(node* &head)
{
    node* temp = head;

    while(temp!=NULL)
    {
        cout<<temp->data;
        if(temp->next!=NULL)
        {
            cout<<" --> ";
        }

        temp = temp->next;
    }
    cout<<endl;
}

int main()
{   
    // you are creating an object of type node dynamically, which is node of linked list;
    // every node is an object
    

    // node *node1 = new node(10);

    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    // as node1 is a pointer, it points to the object node1, ie, it stores the address of node1
    // cout<<node1<<endl;


    // creating a singly LL by inserting at head

    // firstly create a head and then use inAtHead to insert elements

    std::cout<<"insertion at head"<<endl;

    node* head0 = NULL;

    inAtHead(head0,10);
    print(head0);

    inAtHead(head0,20);
    print(head0);

    inAtHead(head0, 30);
    print(head0);


    // insertion at tail 

    std::cout<<"insertion at tail"<<endl;

    node* node1 = new node(10);

    node* head = NULL;
    head = node1;

    node* tail = node1;

    print(head);

    inAtTail(tail,20);
    print(head);

    inAtTail(tail, 30); 
    print(head);

    // insertion in middile
    // input : head, position and element

    cout<<"----------------------------------------------------"<<endl;

    inAtMiddle(head0, 2, 4567);
    print(head0);

    cout<<"----------------------------------------------------"<<endl;
    
    inAtMiddle(head, 3, 9999);
    print(head);

    cout<<"----------------------------------------------------"<<endl;

    // insertion at any node
    // input : head, tail, position and element

    inAtPosition(head, tail, 1, 11111);
    print(head);

    inAtPosition(head, tail, 6, 9999);
    print(head);

    cout<<"head : "<<head->data<<endl;
    cout<<"tail : "<<tail->data<<endl;

    



    





    







}