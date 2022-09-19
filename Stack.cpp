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
            cout << p->s << endl;
            p=p->next;
        }
        cout << endl;
    }
    void push(string data){
        node *newNode=new node;
        newNode->s=data;
        newNode->next=head;
        head=newNode;
    }
    void pop(){
        node *p=head;
        head=head->next;
        delete p;
    }
};
int main(){
    List ob;
    ob.push("A");
    ob.push("B");
    ob.pop();
    ob.push("C");
    ob.push("D");

    ob.display();
    return 0;
}
