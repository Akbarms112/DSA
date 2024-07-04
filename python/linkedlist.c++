#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node (int data)
    {
        this->data=data;
        this->next=NULL;

    }
};
 
void insertAthead(Node* &head,int d)
{
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;

}
void insertAtposition(Node* &head,int pos,int d)
{
    if(pos==1)
    {
        insertAthead(head,d);
        return;
    }
    Node*temp = head;
    int cnt=1;
    while(cnt<pos-1)
    {
        temp = temp->next;
        cnt++;
    }
    Node* toinsert = new Node(d);
    toinsert->next = temp->next;
    temp = temp->next;

}
void print(Node* &head)
{
    Node* temp = head;
    if(temp != NULL)
    {
        cout << temp->data<<endl;
        temp = temp->next;
    }
    cout<<endl;

}
void insertAttail(Node* &tail,int d)
{
   Node*temp = new Node(d);
   temp->next = tail;
   tail = temp;
}
int main()
{
    Node* node1= new Node(10);
    cout <<node1->next <<endl;
    cout << node1->next <<endl; 

    Node* head = node1;
    Node* tail = node1;
    insertAthead (head,12);

    print(head);
    insertAthead (head,13);
    print(head);

    insertAttail(tail,10);
    print(tail);

    insertAtposition(head,2,23);
    print(head);
}



