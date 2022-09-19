#include <iostream>
using namespace std;
void add ()
{
    int a,b,i;
    for ( i=0; i<=5; i++)
    {
        cout << "a = " ;
        cin >> a ;
        cout << "b = " ;
        cin >> b ;
        int sum=a+b;
        cout << "Result = " << sum << endl;
    }
}
int main ()
{
    int a,b;
    add ();
    return 0;
}
