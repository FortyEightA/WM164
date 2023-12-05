#include <iostream>

using namespace std;

int calculateSumOfSquares(int end);

int calculateSumOfSquares(int start, int end);
int main (int argc, char *argv[]) {
  int inputOne, inputTwo, inputThree;
  cout << "Enter an Integer: ";
  cin >> inputOne;
  cout << "The sum of squares of even numbers from 1 to " << inputOne << " is " << calculateSumOfSquares(inputOne) << endl;
  cout << "Enter two Integers: ";
  cin >> inputTwo >> inputThree;
  cout << "The sum of squares of even numbers from " << inputTwo << " to " << inputThree << " is " << calculateSumOfSquares(inputTwo, inputThree) << endl;
  
  return 0;
}

int calculateSumOfSquares(int end){
  int sum = 0;
  for (int i = 2; i <= end; i+=2) {
    sum += (i*i);
  }
  return sum;
}

int calculateSumOfSquares(int start, int end){
  int temp = ((start%2)==0)?start:start+1;
  int sum = 0;
  for (int i = temp; i <= end; i+=2) {
    sum += (i*i);
  }
  return sum;
}
