#include <iostream>
using namespace std;

// The ampersand means 'this will pass by reference'
void f(int& r){
  cout <<   "r = "  << r  << endl;
  cout <<   "&r = " << &r << endl;
  r = 5;
  cout << "r = " << r << endl;
}

int main (int argc, char const *argv[])
{
  int x = 47;
  cout << "x = "  << x  << endl;
  cout << "&x = " << &x << endl;
  f(x); // looks like pass-by-value
  cout << "x = "  << x  << endl;

  return 0;
}

// x = 47
// &x = 0x7fff54b4b7a4
// r = 47
// &r = 0x7fff54b4b7a4
// r = 5
// x = 5