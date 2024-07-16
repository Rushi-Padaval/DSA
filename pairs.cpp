/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/





#include <iostream>
#include <utility>

using namespace std;

void pairs() {
  // Create a pair with a nested pair (1, {2, 4})
  pair<int, pair<int,int>> p = {1, {2, 4}};
  cout << "Nested Pair:" << endl;
  cout << p.second.second;  // This will print 4
}

int main() {
  pairs();
  return 0;
}
