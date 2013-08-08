#include <iostream>
using namespace std;

int main (int argc, char const *argv[])
{
  const int i = 0;
  int* j      = const_cast<int*>(&i);


  return 0;
}