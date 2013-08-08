#include <iostream>
using namespace std;

union MyUnion{
  int i;
  float f;
};

int main (int argc, char const *argv[])
{
  MyUnion u;
  u.f = 1.2;

  cout << "u.f = " << u.f << endl;

  // This will return nonsense
  cout << "u.i = " << u.i << endl;
  return 0;
}