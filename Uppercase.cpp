#include<iostream>
using namespace std;
struct node
{
    char data;
    node*next;
};
node*head=NULL,*curr;
void display()
{
    curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}
void add_data(int n)
{
    int i=0;
    char x;
    while(i<n)
    {
        cin>>x;
        if(x>='A'&&x<='Z')
        {
            node*a=new node;
            a->data=x;
            a->next=NULL;
            if(head==NULL)
            {
                head=a;
            }
            else
            {
                curr->next=a;
            }
            curr=a;
            i++;
        }
        else
        {
            cout<<"ivalid input\n";
        }
    }
}
void dlt_vowel()
{
    node*prev=NULL;
    curr=head;
    node*temp;
    while(curr!=NULL)
    {
        if(curr->data=='A'||curr->data=='E'||curr->data=='I'||curr->data=='O'||curr->data=='U')
        {
            if(prev!=NULL)
            {
                prev->next=curr->next;
            }
            else
            {
                head=curr->next;
            }
            temp=curr;
            curr=curr->next;
            delete temp;
        }
        else
        {
            prev=curr;
            curr=curr->next;
        }
    }
}
int main()
{
    int n;
    cout<<"how many values u want input\n";
    cin>>n;
    add_data(n);
    cout<<"Before: ";
    display();
    dlt_vowel();
    cout<<"after: ";
    display();
    return 0;
}
