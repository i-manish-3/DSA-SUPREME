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
    node* head = new node(0);
    node* x = head;
    for(int i = 0; i < 5; i++)
    {
        cout<<"Enter data "<<endl;
        int val;
        cin>>val;
        node* newNode = new node(val);
        head->next = newNode;
        head = newNode;
    }
    print(x);
    return 0;
}