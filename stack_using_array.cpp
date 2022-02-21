#include <iostream>
using namespace std;
#define N 5
class Stack{
public:
int stack[N];
int top = -1;
void push(int x){
if(top==(N-1))
{
    cout<<"Overflow";
}
else
{
    top++;
    stack[top]=x;
}
}
void pop()
{
    if(top==-1)
    {
        cout<<"Underflow";
    }
    else
    {
        stack[top]=NULL;
        top--;

    }
}
void peek()
{
    if(top == -1)
        cout<<"Empty stack";
    else
        cout<< stack[top];
}
void display()
{
    int i;
    if(top!=-1)
    for(i = top;i>=0;i--)
    {
        cout<<stack[i];    
    }
    else
        cout<<"Empty stack";
}



};

int main()
{
    int ch = -1;
    Stack s;
    cout<<"Please enter choice :"<<endl<<"1) Push"<<endl<<"2) Pop"<<endl<<"3) Peek"<<endl<<"4) Display"<<endl<<"0) Exit";
    do
    {
        cin>>ch;
        switch (ch)
        {
        case 1:
            cout<<"Enter the element";
            int ent;
            cin>>ent;
            s.push(ent);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.peek();
            break;
        case 4:
            s.display();
            break;
        case 0:
            ch=0;
            break;
        default:
            cout<<"Invalid response";
        }
    }
    while (ch!=0);
    
    return 0;
}
