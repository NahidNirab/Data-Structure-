#include <iostream>
using namespace std;
void print();
struct node
{
    int data;
    node* next;
};
node* head= NULL;
int main()
{
    int x,n;
    cout << " How many data want to input: ";
    cin >> n;
    cout << "Input your data : ";
    cin >> x;
    node* temp1=head;

    node* temp = new node ();
    temp->data = x;
    temp-> next = NULL;
    head = temp;
    for (int i=0; i<n; i++)
    {
        cout << endl;
        cin >> x;
        node* temp =new node();
        temp->data = x;
        temp-> next = NULL;
        temp1=head;
        while (temp1-> next != NULL)
        {
            temp1=temp1->next;
        }
        temp1->next=temp;
        print();
    }
    return 0;
}
void print ()
{
    node* temp=head;
    cout << "List is : ";
    while (temp!= NULL)
    {
        cout << temp->data<< " " ;
        temp =temp-> next;
    }
}
