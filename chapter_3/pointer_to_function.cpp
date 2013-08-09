#include <iostream>
using namespace std;

void func(){
  cout << "func() called.." << endl;
}


int main (int argc, char const *argv[]) {
  void (*fp2)() = func; // define and initialize

  // This syntax 'dereferences' the pointer, it gets the value of what fp points to it.
  (*fp2)();
  return 0;
}

