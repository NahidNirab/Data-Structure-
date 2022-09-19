#include <iostream>
using namespace std;
struct person
{
    string name;
    int age;
};
int main ()
{
    int n;
    cout << "Enter the number of persons: ";
    cin >> n;

    person p[n];
    for (int i=0; i<n; i++)
    {
        cout << "Enter Name: ";
        cin >> p[i].name;
        cout << "Enter Age: ";
        cin >> p[i].age;
    }
    for (int i=0; i<n; i++)
    {
        cout << "Information of person " << (i+1) << ":" << endl;
        cout << "Name: " << p[i].name << endl;
        cout << "Age: " << p[i].age << endl;
    }
    return 0;
}
