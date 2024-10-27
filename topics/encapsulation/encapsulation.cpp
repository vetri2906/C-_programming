#include <iostream>

using namespace std;

class access_specifier
{
  private: // private access specifier
  int age; 
  public: // public access specifier
  void set_my_age(int input)
  {
    age = input;
  }
  int get_my_age(void)
  {
    return age;
  }
};

int main()
{
  access_specifier vetri_age;
  vetri_age.set_my_age(28);
  int my_age = vetri_age.get_my_age();
  cout <<"vetri's age is :"<<my_age<<"\n";
}