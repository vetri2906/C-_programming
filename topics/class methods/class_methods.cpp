#include <iostream>
using namespace std;

class staff_details
{
    public:
    string name;
    string designation;
    void greet_employee (string name);
    void ask_designation (string designation);
};

void staff_details :: greet_employee (string name)
{
    cout<<"Hello " << name << "!\n";
}

void staff_details :: ask_designation (string designation)
{
 cout <<"I heard that you're a " << designation <<" !\n";
}

int main ()
{
    staff_details employee;
    employee.name = "Ram";
    employee.designation = "software engineer";
    employee.greet_employee(employee.name);
    employee.ask_designation(employee.designation);
}