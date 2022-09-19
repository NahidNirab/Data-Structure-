#include<iostream>
using namespace std;
struct node
{
    int data;
    node*next;
};
int n,i,sum,c,ave;
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
    c=0;
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
               c++;
            sum+=current->data;
        }
    }
    ave=(sum/c);
    display();
    cout<<endl;
    cout<<"OddSum: ";
    cout<<sum<<endl;
    cout<<"Average of odd numbers : ";
    cout<<ave;
    return 0;
}


