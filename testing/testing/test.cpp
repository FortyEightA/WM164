#include <iostream>
#include <iomanip>
using namespace std;

int main (int argc, char *argv[]) {
  float pi = 3.1415;
  cout << "This width = 5: " << setprecision(3) << setw(5) << pi << endl;
  cout << "this width = 5: " << setw(5) << "1"<< endl;
  return 0;
}
