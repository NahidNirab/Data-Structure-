#include <iostream>
using namespace std;
class Employee
{
    private :
        int Id;
        string Name;
        double Salary;
        char Gender;
    public :
        void setId (int id);
        int getId (void);
        void setName (string name);
        string getName (void);
        void setSalary (double salary);
        double getSalary(void);
        void setGender(char gender);
        char getGender(void);

};
int Employee :: getId (void)
{
    return Id;
}
string Employee :: getName (void)
{
    return Name;
}
double Employee :: getSalary (void)
{
    return Salary;
}
char Employee :: getGender (void)
{
    return Gender;
}
void Employee :: setId (int id)
{
     Id = id;
}
void Employee :: setName (string name)
{
     Name = name;
}

void Employee :: setSalary (double salary)
{
     Salary = salary;
}

void Employee :: setGender (char gender)
{
     Gender = gender;
}
int main ()
{
    int id;
    char E;
    string Nirab;
    Employee Employee;
    Employee.setId(1);
    Employee.setName(nirab);
    Employee.setSalary(100000);
    Employee.setGender(E);
    cout << "Id "<< Employee.getId() << "\t" << " Name " << "\t" << Employee.getName() << "\t" << "Salary" << "\t" << Employee.getSalary() << "\t" << "Gender " << "\t" << Employee.getGender()<< endl;
    return 0;
}
