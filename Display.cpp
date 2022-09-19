#include<iostream>
using namespace std;
struct node
{
    int data;
    node* next;

};

int main()
{
    int n,i;
    node* head;
    node* current;
    head= NULL;
    cin>>n;
    for(i=0; i<n; i++)
    {
        node* new_node= new node;
        cin>>new_node-> data;
        new_node->next=NULL;
        if(head==NULL)
        {
            head=new_node;
        }
        else
        {
            current->next=new_node;
        }
        current=new_node;
    }
    current=head;
    while(current!=NULL)
    {
        cout<<current->data<<" ";
        current=current->next;
    }
    return 0;

}
