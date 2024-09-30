
#include <iostream>  // required for cout
using namespace std; // required for cout and string 

class employee_details // declaring class
{ 
    public:       // access specifier
        string name;  // Attribute (string variable)
        int lifespan; // attribute
};

int main ()
{
    employee_details Vetri; // object declaration
    Vetri.name = "vetri";   // assigning value to class member
    Vetri.lifespan = 28;
    cout << Vetri.lifespan << "\n";
    cout << Vetri.name<< "\n";
    return 0;
}

