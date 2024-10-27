#include <iostream>
using namespace std;

class employee_details
{
    public:
    int age;
    string role;
    employee_details (int x, string y)
    {
        age = x;
        role = y;
    }
};

class say_hello {
  public:
    int a;
    say_hello();
};

say_hello::say_hello()
{
  cout <<"hello\n";
}

int main ()
{
    say_hello vetri;
    employee_details ram(28, "software engineer");
    cout << "my age is : " << ram.age << "\nmy designation is " << ram.role<<"\n";
}