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

void insertAtPos(node* &head, int d, int pos)
{
    node* newNode = new node(d);

    if(pos == 1 || head == NULL)
    {
        newNode->next  = head;
        head = newNode;
        return;
    }

    int t = pos - 1;
    node* prev = head;

    while(t--)
    {
        prev = prev->next;
    }
    newNode->next = prev->next;
    prev->next = newNode;

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
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(4);
    
    insertAtPos(head,47, 2);

    print(head);


    return 0;
}