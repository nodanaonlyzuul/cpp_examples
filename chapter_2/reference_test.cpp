#include <iostream>
using namespace std;

int main (int argc, char const *argv[])
{
  int a = 0;
  int b = 5;

  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
  cout << "running a = 5" << endl ;
  a = 5;
  cout << "a = " << a << " now" << endl;
  cout << "b = " << b << " now" << endl;
}