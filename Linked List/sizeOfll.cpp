#include<bits/stdc++.h> 
using namespace std;

class node{
    public:

    int data;
    node* next;
    
    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

void inserAtHead(node* &head, int d)
{
    if(head == NULL)
    {
        node* newNode = new node(d);
        head = newNode;
    }
    else
    {
        // create a new node
        node* newNode = new node(d);
        
        // insert at head
        newNode->next = head;
        head = newNode;

    }
}

void print(node* &head)
{
    node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int size(node* &head)
{

    // iterative code

    // int s = 0;
    // node* temp = head;
    // while(temp != NULL)
    // {
    //     s++;
    //     temp = temp->next;
    // }
    // return s;


    ///////// recursive code //////////////

    if(head == NULL)
    {
        return 0;
    }
    return 1 + size(head->next);

}
int main(){
    node* head = 0;
    for(int i = 0; i < 5; i++)
    {
        cout<<"Enter data "<<endl;
        int val;
        cin>>val;
        inserAtHead(head,val);
    }
    print(head);
    cout<<"\n"<<size(head);
    return 0;
}