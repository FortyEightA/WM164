#include <iostream>

using namespace std;

int main (int argc, char *argv[]) {
  int firstInput = 0;
  int secondInput = 0;
  
  do {
    cout << "Enter the first positive integer: " << endl;
    cin >> firstInput;
    cout << "Enter the second positive integer: " << endl;
    cin >> secondInput;
  } while((firstInput <= 0) && (secondInput <=0));

  int smallest = (firstInput > secondInput)?firstInput:secondInput;
  int gcd;

  for (int i = 0; i < smallest ; i++) {
    if (((firstInput%i)==0)&&(secondInput%i)==0) {
      gcd=i;
    } 
  }

  cout << "The GCD of " << firstInput << " and " << secondInput << " is " << gcd << endl;
  return 0;
}
