#include <iostream>
using namespace std;

void func(){
  static int i = 0;
  i++;
  cout << "i = " << i << endl;
}

int main (int argc, char const *argv[])
{
  for(int i = 0; i < 10; ++i)
  {
    func();
  }
  return 0;
}

// Outputs
//
//   i = 1
//   i = 2
//   i = 3
//   i = 4
//   i = 5
//   i = 6
//   i = 7
//   i = 8
//   i = 9
//   i = 10
// Since i is static it is remembered 'i' is not re-initialized each run.