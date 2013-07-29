#include <iostream>
#include <string>
using namespace std;

int main (int argc, char const *argv[])
{
  string name    = "Stephen";
  // Read "point points to a string variable...assigned to the address of name"
  string* point = &name;

  cout << "The address of name is " << (long)&name << endl;
  // count << point;

  *point = "John";

  // This will return 'John', not 'Stephen' now
  cout << name << endl;

  return 0;
}