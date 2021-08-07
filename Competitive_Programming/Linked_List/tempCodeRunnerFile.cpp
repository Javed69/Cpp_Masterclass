#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtTail(node* &head, int val)
{

    node* n = new node(val);

    if(head == NULL)
    {
        head = n;
        return;
    }

    node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
}

bool detectCycle(node* &head)
{
    node* slow = head;
    node* fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next;

        if(fast == slow)
        {
            return true;
        }
    }
    return false;
}

void display(node* head)
{
    node* temp = head;
    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}


int main(){

    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    detectCycle(head);
    return 0;
};



