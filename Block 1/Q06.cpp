#include <iostream> 
#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <time.h>

using namespace std;

void test(){
  srand(time(0));          
  int number1 = ((rand() % 9) + 1);
  int number2 = ((rand() % 9) + 1); 
  int userAnswer;
  cout << "The numbers to add are: " << number1 << ", " << number2 << endl;
  cout << "Please Input your answer: ";
  cin >> userAnswer;
  if (userAnswer == (number1+number2)) {
    cout << "Correct Answer! " << endl;
  }
  else {
    cout << "Incorrect Answer! " << endl << "Correct Answer is: " << number1+number2 << endl;
  } 
}

int main(){
  test(); 
  return 0;
}
