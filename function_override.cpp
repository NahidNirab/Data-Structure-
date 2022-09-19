#include <iostream>
using namespace std;
class Player{
public:
    virtual void display(){ //late binding or dynamic polymorphism
        cout << "A player";
    }
};
class Footballer : public Player{
public:
    void display(){
        cout << "A Footballer " << player;
    }
};

int main(){
    Player* p; //Base class pointer
    Footballer f; //Derived class object
    p=&f;
    p->display();
return 0;
}
