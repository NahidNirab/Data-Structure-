#include <iostream>
using namespace std;
void add (int a, int b)
{
    cout << "Sum : " << (a+b);
}
int main ()
{
    int n1=10, n2=5;
    cout << "Enter Number 1: ";
    cin >> n1;
    cout << "Enter Number 2: ";
    cin >> n2;
    cout << (n1+n2);
    add (n1,n2);
    return 0;
}
