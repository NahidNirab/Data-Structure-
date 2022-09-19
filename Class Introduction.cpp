#include <iostream>
using namespace std;
class Employee
{
    public :
    int id;
    string name;
    double salary;
    char gender;
    void display ()
    {
        cout << "Name: " << name << "\t"<< "id: " << id << "\t" << "Salary: "<< salary << "\t"  << "Gender: "<<  gender <<  endl;
    }
};
int main ()
{
    Employee e1,e2;
    e1.id = 1;
    e1.name = "Omar";
    e1.salary = 5500.0;
    e1.gender = 'M';
    e1.display ();

    e2.id = 0;
    e2.name = "Unknown";
    e2.salary = 1000.0;
    e2.gender = '-';
    e2.display ();
    if (e1.salary > e2.salary)
    {
        cout << "Omar has Maximum Salary";
    }
    else
    {
        cout << " Unknown has Maximum Salary ";
    }
    return 0;
}
