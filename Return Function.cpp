#include <iostream>
using namespace std;
int add (int, int);
int main ()
{
    int a,b;
    cout << "Enter number for a: ";
    cin >> a;
    cout << "Enter number for b: ";
    cin >> b;
    cout << add(a,b);
    return 0;
}
int add (int a, int b)
{
    int sum = a+b;
    return sum;
}

