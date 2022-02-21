#include <iostream>
using namespace std;
class Node{
public:
  int data;
  Node* next;  
};
Node* top = 0;
Node* newNode(int data)
{
    Node* n = new Node();
    n->data = data;
    n->next = NULL;
    return n;
}
class Stack{
//Push and Pop from head (top) to get O(1) complexity
public:
void push(int x)
{
    Node * ne = newNode(x);
    ne->next = top;
    top = ne;
}
void pop()
{
    if(top==0)
        cout<<"Empty List (Underflow)";
    else
        {
            Node* temp = top;
            top = top->next;
            free(temp);
        }
}
void peek()
{
    if(top==0)
        cout<<"Empty List (Underflow)";
    else
        {
            cout<<top->data;
        }
}
void display()
{
    Node * temp = top;
    if(top==0)
        cout<<"Empty List";
    else{
    while(temp!=0)
    {
        cout<<temp->data;
        temp=temp->next;
    }
    }
}
};
int main()
{
    Stack s;
    s.push(10);
    s.push(100);
    s.push(1000);
    s.pop();
    s.peek();
    s.display();
    return 0;
}
