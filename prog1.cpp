#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};

int main()
{
    Node *head = NULL;
    
    head = new Node();
    head->data = 24;
    head->next = NULL;
    
    Node *n2 = NULL;
    
    n2 = new Node();
    n2->data = 25;
    n2->next = NULL;
    head->next = n2;

    cout<<head<<" "<<head->data<<" "<<n2<<endl;
    cout<<n2<<" "<<n2->data<<" "<<n2->next<<endl;

    delete head;
    delete n2;

    return 0;
}