#include <iostream>
using namespace std;

// A nice demonstration of recursion
void removeHat(char letter){
  if(letter == 'z'){
    cout << "cat " << letter << endl;
  }
  else {
    cout << "..." << letter << endl;
    removeHat(letter+1);
  }
}

int main (int argc, char const *argv[])
{
  removeHat('a');
}