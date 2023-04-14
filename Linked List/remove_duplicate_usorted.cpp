#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

void print(Node *root)
{
Node *temp = root;
while(temp!=NULL)
{
cout<<temp->data<<" ";
temp=temp->next;
}
}


class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
        
        
        // Node* temp1 = head;
        // while(temp1 != NULL && temp1->next != NULL)
        // {
        //     Node* temp2 = temp1;
        //     while(temp2->next != NULL)
        //     {
        //         if(temp1->data == temp2->next->data)
        //         {
        //             Node* del = temp2->next;
        //             temp2->next = del->next;
        //             delete(del);
        //         }
        //         else
        //         {
        //             temp2 = temp2->next;
        //         }
        //     }
        //     temp1 = temp1->next;
        // }
        // return head;
        
        
        
        // optimization
        
    unordered_set<int> s;
    
    Node* temp = head, *prev = NULL;
    
    while(temp != NULL)
    {
        if(s.find(temp->data) != s.end())
        {
            prev->next = temp->next;
            delete(temp);
        }
        else
        {
            s.insert(temp->data);
            prev = temp;
        }
        temp = prev->next;
    }
    return head;
    }
};


int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;
 
		for(int i=0;i<K;i++){
		int data;
		cin>>data;
			if(head==NULL)
			head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp=temp->next;
			}
		}
		
	    Solution ob;
		Node *result  = ob.removeDuplicates(head);
		print(result);
		cout<<endl;
		
	}
	return 0;
}