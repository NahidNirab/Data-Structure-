#include <iostream>
using namespace std;
void add (int, int);
void sub (int, int);
void mul (int, int);
void div (int, int);
int main ()
{
    int a,b;
    cout << "Enter number for a : ";
    cin >> a;
    cout << "Enter number for b : ";
    cin >> b;
    add (a,b);
    sub (a,b);
    mul (a,b);
    div (a,b);
    return 0;
}
void add (int a, int b)
{
    int sum = a+b;
    cout << "sum = "<< sum << endl;
}
void sub (int a, int b)
{
    int sub = a-b;
    cout << "sub = "<< sub << endl;
}
void mul (int a, int b)
{
    int mul = a*b;
    cout << "mul = "<< mul << endl;
}
void div (int a, int b)
{
    int div = a/b;
    cout << "div = "<< div << endl;
}
