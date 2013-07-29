#include <iostream>
using namespace std;

void f(int a){
  cout << "a = " << a << endl;
  a = 5;
  cout << "a = " << a << endl;
}

int main (int argc, char const *argv[])
{
  int x = 47;
  f(x);
  cout << "x = " << x << endl;
}

// Outputs
// a = 47
// a = 5
// x = 47
