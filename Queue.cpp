#include<iostream>
using namespace std;
struct node{
    string s;
    node *next;
};
class List{
private:
    node *head;
public:
    List(){
        head=NULL;
    }
    void display(){
        node *p=head;
        while(p!=NULL){
            cout << p->s << " ";
            p=p->next;
        }
        cout << endl;
    }
    void enqueue(string data){
        node *newNode=new node;
        newNode->s=data;

        if(head==NULL){
            head=newNode;
        }
        else{
            node *p=head;
            while(p->next!=NULL){
            p=p->next;
        }
            newNode->next=NULL;
            p->next=newNode;
        }
    }
    void dequeue(){
        node *p=head;
        head=head->next;
        delete p;
    }
};
int main(){
    List ob;
    ob.enqueue("A");
    ob.enqueue("B");
    ob.dequeue();
    ob.enqueue("C");
    ob.enqueue("D");
    ob.display();
    return 0;
}
