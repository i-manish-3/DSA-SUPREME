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

void insertAtTail(node* &head, int d)
{
    if(head == NULL)
    {
        node* newNode = new node(d);
        head = newNode;
    }
    else
    {
        // create a newNode

        node* newNode = new node(d);
        head->next = newNode;
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

int main(){
    node* head = new node(1);
    node* temp = head;
    for(int i = 0; i < 5; i++)
    {
        cout<<"Enter data "<<endl;
        int val;
        cin>>val;
        insertAtTail(head,val);
    }

    print(temp->next);


    return 0;
}