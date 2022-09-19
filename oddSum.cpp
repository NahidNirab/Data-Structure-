#include<iostream>
using namespace std;
struct node
{
    int data;
    node*next;
};
int n,i,sum;
node*head;
node*current;
void display()
{
    current=head;
    while(current!=NULL)
    {
        cout<<current->data<<" ";
        current=current->next;
    }

}

int main()
{
    head=NULL;
    sum=0;
    cout<<"Enter total number of nodes: "<<endl;
    cin>>n;
    for(i=0; i<n; i++)
    {
        node*newNode=new node;
        cin>>newNode->data;
        newNode->next=NULL;
        if(head==NULL)
        {
            head=newNode;
        }
        else
        {
            current->next=newNode;
        }
        current=newNode;
        if(current->data
           %2!=0){
            sum+=current->data;
        }
    }
    display();
    cout<<endl;
    cout<<"OddSum: ";
    cout<<sum;
    return 0;
}
