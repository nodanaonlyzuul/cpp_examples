#include <iostream>
using namespace std;

int main (int argc, char const *argv[])
{
  // sizeof is an operator, not a function - but if you use it on a Type - then you need parens
  cout << "sizeof(double) is " << sizeof(double) << endl;
  cout << "sizeof(char) is "   << sizeof(char) << endl;

  unsigned int ui = 100;
  cout << "an unsigned int has a size of " << sizeof(ui) << endl;

  float f = 100;
  cout << "a float has a size of " << sizeof(f) << endl;
}