#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <time.h>

using namespace std;

int cointoss(){
  srand(time(0));
  int number = (rand() % 1);
  return number;
}
int main (int argc, char *argv[]) {
  
  int number = cointoss();
  char guess;
  cout << "Please input your guess: ";
  cin >> guess;
  int guessNumber;
  if (guess == 'H') {
    guessNumber = 1; 
  }
  else if (guess == 'T') {
    guessNumber = 0; 
  }
  else {
    cout << "error wrong input" << endl;
  }
  if (guessNumber == number) {
    
    cout << "You guessed correctly! " << endl;
  }
  else {
    cout << "You guessed incorrectly! " << number << " was the guess";
  }
  return 0;
}
