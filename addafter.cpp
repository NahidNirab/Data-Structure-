#include<iostream>
using namespace std;
struct node
{
    int data;
    node*next;
};
int n,i,y,x;
node*head;
node*current;

void display()
{
    current=head;
    while(current!=NULL)
    {
        cout<<current->data<<" "<<endl;
        current=current->next;
    }

}

void addAfer(int y,int x)
{
    current=head;
    while(current->next!=NULL)
    {
        if(current->data!=y)
        {
            current=current->next;
        }
        else
        {
            break;
        }
    }
    if(current->next==NULL)
    {
        cout<<y<<"is not in middle"<<endl;
    }
    else
    {
        node*a=new node;
        a->data=x;
        a->next=current->next;
        current->next=a;

    }
}
int main()
{
    head=NULL;
    cout<<"Enter total number of nodes : "<<endl;
    cin>> n;
    for(i=0; i<n; i++)
    {
        node*newn=new node;
        cin>>newn->data;
        newn->next=NULL;
        if(head==NULL)
        {
            head=newn;
        }
        else
        {
            current->next=newn;
        }
        current=newn;
    }
    cout<<"Enter after which value you want to enter data: "<<endl;
    cin>>y;
    cout<<"enter data u wanna add: "<<endl;
    cin>>x;
    addAfer(y,x);
    display();

    return 0;
}
